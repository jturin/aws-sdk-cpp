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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/TrailInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  class AWS_CLOUDTRAIL_API ListTrailsResult
  {
  public:
    ListTrailsResult();
    ListTrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline const Aws::Vector<TrailInfo>& GetTrails() const{ return m_trails; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline void SetTrails(const Aws::Vector<TrailInfo>& value) { m_trails = value; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline void SetTrails(Aws::Vector<TrailInfo>&& value) { m_trails = std::move(value); }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& WithTrails(const Aws::Vector<TrailInfo>& value) { SetTrails(value); return *this;}

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& WithTrails(Aws::Vector<TrailInfo>&& value) { SetTrails(std::move(value)); return *this;}

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& AddTrails(const TrailInfo& value) { m_trails.push_back(value); return *this; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& AddTrails(TrailInfo&& value) { m_trails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListTrailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListTrailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListTrailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TrailInfo> m_trails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
