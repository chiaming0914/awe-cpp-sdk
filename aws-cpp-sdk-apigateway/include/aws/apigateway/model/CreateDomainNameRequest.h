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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to create a new domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainNameRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateDomainNameRequest : public APIGatewayRequest
  {
  public:
    CreateDomainNameRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>(Required) The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the certificate.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::move(value); }

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(Aws::String&& value) { SetCertificateBody(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] The body of the server certificate provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline const Aws::String& GetCertificatePrivateKey() const{ return m_certificatePrivateKey; }

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline void SetCertificatePrivateKey(const Aws::String& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = value; }

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline void SetCertificatePrivateKey(Aws::String&& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = std::move(value); }

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline void SetCertificatePrivateKey(const char* value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey.assign(value); }

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const Aws::String& value) { SetCertificatePrivateKey(value); return *this;}

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(Aws::String&& value) { SetCertificatePrivateKey(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] Your certificate's private key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const char* value) { SetCertificatePrivateKey(value); return *this;}

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines. If you include the
     * root certificate, your certificate chain must start with intermediate
     * certificates and end with the root certificate. Use the intermediate
     * certificates that were provided by your certificate authority. Do not include
     * any intermediaries that are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;
    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet;
    Aws::String m_certificatePrivateKey;
    bool m_certificatePrivateKeyHasBeenSet;
    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;
    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
