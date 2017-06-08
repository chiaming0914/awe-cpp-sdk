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

#include <aws/config/model/ComplianceSummaryByResourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceSummaryByResourceType::ComplianceSummaryByResourceType() : 
    m_resourceTypeHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
}

ComplianceSummaryByResourceType::ComplianceSummaryByResourceType(const JsonValue& jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceSummaryByResourceType& ComplianceSummaryByResourceType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

    m_complianceSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceSummaryByResourceType::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_complianceSummaryHasBeenSet)
  {
   payload.WithObject("ComplianceSummary", m_complianceSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws