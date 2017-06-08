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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/Protection.h>
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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API DescribeProtectionResult
  {
  public:
    DescribeProtectionResult();
    DescribeProtectionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProtectionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The <a>Protection</a> object that is described.</p>
     */
    inline const Protection& GetProtection() const{ return m_protection; }

    /**
     * <p>The <a>Protection</a> object that is described.</p>
     */
    inline void SetProtection(const Protection& value) { m_protection = value; }

    /**
     * <p>The <a>Protection</a> object that is described.</p>
     */
    inline void SetProtection(Protection&& value) { m_protection = std::move(value); }

    /**
     * <p>The <a>Protection</a> object that is described.</p>
     */
    inline DescribeProtectionResult& WithProtection(const Protection& value) { SetProtection(value); return *this;}

    /**
     * <p>The <a>Protection</a> object that is described.</p>
     */
    inline DescribeProtectionResult& WithProtection(Protection&& value) { SetProtection(std::move(value)); return *this;}

  private:
    Protection m_protection;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws