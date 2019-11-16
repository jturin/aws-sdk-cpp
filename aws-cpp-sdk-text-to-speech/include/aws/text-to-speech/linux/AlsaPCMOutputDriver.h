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
*/

#pragma once

#include <aws/text-to-speech/PCMOutputDriver.h>
#include <alsa/asoundlib.h>

namespace Aws
{
    namespace TextToSpeech
    {
        /**
         * Alsa implementation for PCM output.
         */
        class AlsaPCMOutputDriver : public PCMOutputDriver
        {
        public:
            AlsaPCMOutputDriver();
            virtual ~AlsaPCMOutputDriver();

            AlsaPCMOutputDriver(const AlsaPCMOutputDriver&) = delete;
            AlsaPCMOutputDriver& operator=(const AlsaPCMOutputDriver&) = delete;
            AlsaPCMOutputDriver(AlsaPCMOutputDriver&&) = delete;
            AlsaPCMOutputDriver& operator=(AlsaPCMOutputDriver&&) = delete;

            bool WriteBufferToDevice(const unsigned char* buffer, size_t bufferSize) override;
            Aws::Vector<DeviceInfo> EnumerateDevices() const override;
            void SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& capabilities) override;
            const char* GetName() const override;
            void AudioInit();
            void AudioReset();
            void AudioDeinit();

        private:
            void InitDevice();

            DeviceInfo m_activeDevice;
            snd_pcm_t* m_driver;
            snd_pcm_hw_params_t* alsa_params;
            snd_pcm_sw_params_t *sw_params;
            
        };
    }
}
