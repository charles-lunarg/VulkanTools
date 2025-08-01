/*
 * Copyright (c) 2020-2025 Valve Corporation
 * Copyright (c) 2020-2025 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authors:
 * - Christophe Riccio <christophe@lunarg.com>
 */

#include "../vulkan_util.h"

#include <gtest/gtest.h>

#ifndef RUN_ON_CI

TEST(test_vulkan, system_info) {
    const VulkanSystemInfo& vulkan_system_info = BuildVulkanSystemInfo();

    EXPECT_TRUE(vulkan_system_info.loaderVersion != Version::NONE);
    EXPECT_TRUE(!vulkan_system_info.instanceLayerProperties.empty());
    EXPECT_TRUE(!vulkan_system_info.instanceExtensionPropertie.empty());
    EXPECT_TRUE(!vulkan_system_info.physicalDevices.empty());
}

#endif  // RUN_ON_CI
