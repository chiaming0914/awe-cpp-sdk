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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/SdkType.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>The collection of <a>SdkType</a> instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkTypes">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetSdkTypesResult
  {
  public:
    GetSdkTypesResult();
    GetSdkTypesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSdkTypesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetSdkTypesResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetSdkTypesResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline GetSdkTypesResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline const Aws::Vector<SdkType>& GetItems() const{ return m_items; }

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline void SetItems(const Aws::Vector<SdkType>& value) { m_items = value; }

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline void SetItems(Aws::Vector<SdkType>&& value) { m_items = std::move(value); }

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline GetSdkTypesResult& WithItems(const Aws::Vector<SdkType>& value) { SetItems(value); return *this;}

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline GetSdkTypesResult& WithItems(Aws::Vector<SdkType>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline GetSdkTypesResult& AddItems(const SdkType& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The set of <a>SdkType</a> items that comprise this view of the
     * <a>SdkTypes</a> collection.</p>
     */
    inline GetSdkTypesResult& AddItems(SdkType&& value) { m_items.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<SdkType> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws