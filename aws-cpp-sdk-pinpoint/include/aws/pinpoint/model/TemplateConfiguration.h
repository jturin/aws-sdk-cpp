﻿/*
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Template.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the message template for each type of channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API TemplateConfiguration
  {
  public:
    TemplateConfiguration();
    TemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email template to use for the message.</p>
     */
    inline const Template& GetEmailTemplate() const{ return m_emailTemplate; }

    /**
     * <p>The email template to use for the message.</p>
     */
    inline bool EmailTemplateHasBeenSet() const { return m_emailTemplateHasBeenSet; }

    /**
     * <p>The email template to use for the message.</p>
     */
    inline void SetEmailTemplate(const Template& value) { m_emailTemplateHasBeenSet = true; m_emailTemplate = value; }

    /**
     * <p>The email template to use for the message.</p>
     */
    inline void SetEmailTemplate(Template&& value) { m_emailTemplateHasBeenSet = true; m_emailTemplate = std::move(value); }

    /**
     * <p>The email template to use for the message.</p>
     */
    inline TemplateConfiguration& WithEmailTemplate(const Template& value) { SetEmailTemplate(value); return *this;}

    /**
     * <p>The email template to use for the message.</p>
     */
    inline TemplateConfiguration& WithEmailTemplate(Template&& value) { SetEmailTemplate(std::move(value)); return *this;}


    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline const Template& GetPushTemplate() const{ return m_pushTemplate; }

    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline bool PushTemplateHasBeenSet() const { return m_pushTemplateHasBeenSet; }

    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline void SetPushTemplate(const Template& value) { m_pushTemplateHasBeenSet = true; m_pushTemplate = value; }

    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline void SetPushTemplate(Template&& value) { m_pushTemplateHasBeenSet = true; m_pushTemplate = std::move(value); }

    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline TemplateConfiguration& WithPushTemplate(const Template& value) { SetPushTemplate(value); return *this;}

    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline TemplateConfiguration& WithPushTemplate(Template&& value) { SetPushTemplate(std::move(value)); return *this;}


    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline const Template& GetSMSTemplate() const{ return m_sMSTemplate; }

    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline bool SMSTemplateHasBeenSet() const { return m_sMSTemplateHasBeenSet; }

    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline void SetSMSTemplate(const Template& value) { m_sMSTemplateHasBeenSet = true; m_sMSTemplate = value; }

    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline void SetSMSTemplate(Template&& value) { m_sMSTemplateHasBeenSet = true; m_sMSTemplate = std::move(value); }

    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline TemplateConfiguration& WithSMSTemplate(const Template& value) { SetSMSTemplate(value); return *this;}

    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline TemplateConfiguration& WithSMSTemplate(Template&& value) { SetSMSTemplate(std::move(value)); return *this;}

  private:

    Template m_emailTemplate;
    bool m_emailTemplateHasBeenSet;

    Template m_pushTemplate;
    bool m_pushTemplateHasBeenSet;

    Template m_sMSTemplate;
    bool m_sMSTemplateHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
