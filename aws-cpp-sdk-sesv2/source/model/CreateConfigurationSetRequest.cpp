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

#include <aws/sesv2/model/CreateConfigurationSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfigurationSetRequest::CreateConfigurationSetRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_trackingOptionsHasBeenSet(false),
    m_deliveryOptionsHasBeenSet(false),
    m_reputationOptionsHasBeenSet(false),
    m_sendingOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_trackingOptionsHasBeenSet)
  {
   payload.WithObject("TrackingOptions", m_trackingOptions.Jsonize());

  }

  if(m_deliveryOptionsHasBeenSet)
  {
   payload.WithObject("DeliveryOptions", m_deliveryOptions.Jsonize());

  }

  if(m_reputationOptionsHasBeenSet)
  {
   payload.WithObject("ReputationOptions", m_reputationOptions.Jsonize());

  }

  if(m_sendingOptionsHasBeenSet)
  {
   payload.WithObject("SendingOptions", m_sendingOptions.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




