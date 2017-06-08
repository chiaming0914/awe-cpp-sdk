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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkFacet.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API CreateTypedLinkFacetRequest : public CloudDirectoryRequest
  {
  public:
    CreateTypedLinkFacetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateTypedLinkFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateTypedLinkFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateTypedLinkFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline const TypedLinkFacet& GetFacet() const{ return m_facet; }

    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline void SetFacet(const TypedLinkFacet& value) { m_facetHasBeenSet = true; m_facet = value; }

    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline void SetFacet(TypedLinkFacet&& value) { m_facetHasBeenSet = true; m_facet = std::move(value); }

    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline CreateTypedLinkFacetRequest& WithFacet(const TypedLinkFacet& value) { SetFacet(value); return *this;}

    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline CreateTypedLinkFacetRequest& WithFacet(TypedLinkFacet&& value) { SetFacet(std::move(value)); return *this;}

  private:
    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
    TypedLinkFacet m_facet;
    bool m_facetHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
