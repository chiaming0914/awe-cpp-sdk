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

#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkSchemaAndFacetName::TypedLinkSchemaAndFacetName() : 
    m_schemaArnHasBeenSet(false),
    m_typedLinkNameHasBeenSet(false)
{
}

TypedLinkSchemaAndFacetName::TypedLinkSchemaAndFacetName(const JsonValue& jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_typedLinkNameHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkSchemaAndFacetName& TypedLinkSchemaAndFacetName::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypedLinkName"))
  {
    m_typedLinkName = jsonValue.GetString("TypedLinkName");

    m_typedLinkNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkSchemaAndFacetName::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_typedLinkNameHasBeenSet)
  {
   payload.WithString("TypedLinkName", m_typedLinkName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws