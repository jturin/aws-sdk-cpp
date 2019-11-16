/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
#define SAMPLE_RATE 44100
*/

#include <aws/text-to-speech/linux/AlsaPCMOutputDriver.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <alsa/asoundlib.h>
#include <iostream>



using namespace Aws::Utils;

static int alsa_can_pause = 0;
int numChannels;
snd_pcm_uframes_t frames = 32;

namespace Aws
{
    namespace TextToSpeech
    {
        //static const char* APP_NAME = "Aws::Polly::TextToSpeech";
        static const char* CLASS_NAME = "AlsaPCMOutputDriver";




        AlsaPCMOutputDriver::AlsaPCMOutputDriver() : m_driver(0) {}

        AlsaPCMOutputDriver::~AlsaPCMOutputDriver()
        {
            AudioDeinit();
        }

        void AlsaPCMOutputDriver::AudioReset(void) {
            std::cout << "AudioReset" << std::endl;
            if(m_driver)
            {
                snd_pcm_drop(m_driver);
                snd_pcm_prepare(m_driver);
            }
        }

        void AlsaPCMOutputDriver::AudioDeinit(void) {
            std::cout << "AudioDeinit" << std::endl;
            if (m_driver) {
                snd_pcm_drain(m_driver);
                snd_pcm_close(m_driver);
                m_driver = nullptr;
            }
        }

        void AlsaPCMOutputDriver::AudioInit(void) {
            std::cout << "AudioInit" << std::endl;
            int rc, dir = 0;
            int sampling_rate = KHZ_16;
            rc = snd_pcm_open(&m_driver, "default", SND_PCM_STREAM_PLAYBACK, 0);
            std::cout << "snd_pcm_open: " << rc << std::endl;
            if (rc < 0) { 
                printf("unable to open pcm device:\n");
                AWS_LOGSTREAM_ERROR(CLASS_NAME, " error initializing audio device: PCM_OPEN");
                m_driver = 0;
                return;
            }

            snd_pcm_nonblock(m_driver, 0);

            snd_pcm_hw_params_alloca(&alsa_params);
            snd_pcm_hw_params_any(m_driver, alsa_params);
            snd_pcm_hw_params_set_access(m_driver, alsa_params, SND_PCM_ACCESS_RW_INTERLEAVED);
            snd_pcm_hw_params_set_format(m_driver, alsa_params, SND_PCM_FORMAT_S16);
            snd_pcm_hw_params_set_channels(m_driver, alsa_params, MONO);
            snd_pcm_hw_params_set_rate_near(m_driver, alsa_params, (unsigned int *)&sampling_rate, &dir);
            snd_pcm_hw_params_set_period_size_near(m_driver, alsa_params, &frames, &dir);
            rc = snd_pcm_hw_params(m_driver, alsa_params);
            std::cout << "snd_pcm_hw_params: " << rc << std::endl;
            if (rc < 0) {
                printf("unable to set hw parameters: \n");
                AWS_LOGSTREAM_ERROR(CLASS_NAME, " unable to set hw parameters ");
                snd_pcm_hw_params_free(alsa_params);
                snd_pcm_close(m_driver);
                alsa_params = 0;
                m_driver = 0;
                return;
            }
            snd_pcm_hw_params_get_buffer_size (alsa_params, &frames);
            snd_pcm_sw_params_malloc (&sw_params);
            snd_pcm_sw_params_current (m_driver, sw_params);
            snd_pcm_sw_params_set_start_threshold(m_driver, sw_params, 8192*2);
            alsa_can_pause = snd_pcm_hw_params_can_pause(alsa_params);
            snd_pcm_prepare(m_driver);
            std::cout << "AudioInit end" << std::endl;
        }

        bool AlsaPCMOutputDriver::WriteBufferToDevice(const unsigned char* buffer, size_t size)
        {
            std::cout << "Write buffer:" << size << std::endl;
            InitDevice();
            
            if(m_driver)
            {
                int res = snd_pcm_writei(m_driver, buffer, size/2);
                std::cout << "Res: " << res << std::endl;
                if (res == -EPIPE) {
                    snd_pcm_prepare(m_driver);
                    res = snd_pcm_writei(m_driver, buffer, size/2);
                }
                if(res < 0)
                {
                    std::cout << "Error snd_pcm_writei: " << snd_strerror(res) << std::endl;
                    snd_pcm_recover(m_driver, res, 0);
                    return false;
                }
                return true;
            }

            return false;
        }

        Aws::Vector<DeviceInfo> AlsaPCMOutputDriver::EnumerateDevices() const
        {
            std::cout << "EnumerateDevices" << std::endl;
            Aws::Vector<DeviceInfo> devices;

            DeviceInfo deviceInfo;
            deviceInfo.deviceId = "0";
            deviceInfo.deviceName = "default audio output device";

            CapabilityInfo capabilityInfo;
            capabilityInfo.channels = MONO;
            capabilityInfo.sampleRate = KHZ_16;
            capabilityInfo.sampleWidthBits = BIT_WIDTH_16;

            deviceInfo.capabilities.push_back(capabilityInfo);

            //capabilityInfo.sampleRate = KHZ_8;
            //deviceInfo.capabilities.push_back(capabilityInfo);

            devices.push_back(deviceInfo);

            return devices;
        }

        void AlsaPCMOutputDriver::SetActiveDevice(const DeviceInfo& deviceInfo, const CapabilityInfo& capabilityInfo)
        {
            std::cout << "SetActiveDevice" << std::endl;
            m_activeDevice = deviceInfo;
            numChannels = static_cast<uint8_t>(capabilityInfo.channels);
            /*m_selectedCaps.channels = static_cast<uint8_t>(capabilityInfo.channels);
            m_selectedCaps.rate = static_cast<uint32_t>(capabilityInfo.sampleRate);
            m_selectedCaps.format = PA_SAMPLE_S16LE;*/

            if(m_driver)
            {
                AudioDeinit();
            }

            InitDevice();
        }

        const char* AlsaPCMOutputDriver::GetName() const
        {
            return "Linux (Alsa)";
        }

        void AlsaPCMOutputDriver::InitDevice()
        {
            std::cout << "InitDevice" << std::endl;
            if (!m_driver)
            {
                AudioInit();
                if(!m_driver)
                {
                    std::cout << "Error intializing audio device: InitDevice" << std::endl;
                    AWS_LOGSTREAM_ERROR(CLASS_NAME, " error initializing audio device " );
                }
            }
        }
    }
}
