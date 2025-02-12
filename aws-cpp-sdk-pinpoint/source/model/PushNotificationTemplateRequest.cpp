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

#include <aws/pinpoint/model/PushNotificationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

PushNotificationTemplateRequest::PushNotificationTemplateRequest() : 
    m_aDMHasBeenSet(false),
    m_aPNSHasBeenSet(false),
    m_baiduHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_gCMHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

PushNotificationTemplateRequest::PushNotificationTemplateRequest(JsonView jsonValue) : 
    m_aDMHasBeenSet(false),
    m_aPNSHasBeenSet(false),
    m_baiduHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_gCMHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

PushNotificationTemplateRequest& PushNotificationTemplateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ADM"))
  {
    m_aDM = jsonValue.GetObject("ADM");

    m_aDMHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APNS"))
  {
    m_aPNS = jsonValue.GetObject("APNS");

    m_aPNSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Baidu"))
  {
    m_baidu = jsonValue.GetObject("Baidu");

    m_baiduHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Default"))
  {
    m_default = jsonValue.GetObject("Default");

    m_defaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GCM"))
  {
    m_gCM = jsonValue.GetObject("GCM");

    m_gCMHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue PushNotificationTemplateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_aDMHasBeenSet)
  {
   payload.WithObject("ADM", m_aDM.Jsonize());

  }

  if(m_aPNSHasBeenSet)
  {
   payload.WithObject("APNS", m_aPNS.Jsonize());

  }

  if(m_baiduHasBeenSet)
  {
   payload.WithObject("Baidu", m_baidu.Jsonize());

  }

  if(m_defaultHasBeenSet)
  {
   payload.WithObject("Default", m_default.Jsonize());

  }

  if(m_gCMHasBeenSet)
  {
   payload.WithObject("GCM", m_gCM.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
