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

#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEventTopicsRequest::DescribeEventTopicsRequest() : 
    m_directoryIdHasBeenSet(false),
    m_topicNamesHasBeenSet(false)
{
}

Aws::String DescribeEventTopicsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_topicNamesHasBeenSet)
  {
   Array<JsonValue> topicNamesJsonList(m_topicNames.size());
   for(unsigned topicNamesIndex = 0; topicNamesIndex < topicNamesJsonList.GetLength(); ++topicNamesIndex)
   {
     topicNamesJsonList[topicNamesIndex].AsString(m_topicNames[topicNamesIndex]);
   }
   payload.WithArray("TopicNames", std::move(topicNamesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEventTopicsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeEventTopics"));
  return headers;

}



