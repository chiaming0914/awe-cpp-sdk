/*
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

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>

#include <iostream>

int main(int argc, char** argv)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;

    Aws::Testing::InitPlatformTest(options);
    if(argc > 1)
    {
        std::cout << "Resource prefix: " << argv[1] << std::endl;
        Aws::Testing::SetAwsResourcePrefix(argv[1]);
    }

    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int exitCode = RUN_ALL_TESTS(); 
    Aws::ShutdownAPI(options);

    Aws::Testing::ShutdownPlatformTest(options);
    return exitCode;
}
