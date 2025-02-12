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
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the percentile and percentile value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PercentPair">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API PercentPair
  {
  public:
    PercentPair();
    PercentPair(Aws::Utils::Json::JsonView jsonValue);
    PercentPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentile.</p>
     */
    inline double GetPercent() const{ return m_percent; }

    /**
     * <p>The percentile.</p>
     */
    inline bool PercentHasBeenSet() const { return m_percentHasBeenSet; }

    /**
     * <p>The percentile.</p>
     */
    inline void SetPercent(double value) { m_percentHasBeenSet = true; m_percent = value; }

    /**
     * <p>The percentile.</p>
     */
    inline PercentPair& WithPercent(double value) { SetPercent(value); return *this;}


    /**
     * <p>The value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value.</p>
     */
    inline PercentPair& WithValue(double value) { SetValue(value); return *this;}

  private:

    double m_percent;
    bool m_percentHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
