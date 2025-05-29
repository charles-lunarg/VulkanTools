#!/usr/bin/python3 -i
#
# Copyright (c) 2015-2025 Valve Corporation
# Copyright (c) 2015-2025 LunarG, Inc.
# Copyright (c) 2015-2016, 2019, 2021 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Author: Lenny Komow <lenny@lunarg.com>
# Author: Charles Giessen <charles@lunarg.com>
#

import os
from base_generator import BaseGenerator

POINTER_TYPES = ['void', 'xcb_connection_t', 'Display', 'SECURITY_ATTRIBUTES', 'ANativeWindow', 'AHardwareBuffer', 'wl_display', 'wl_surface', '_screen_context', '_screen_window', '_screen_buffer']

TRACKED_STATE = {
    'vkAllocateCommandBuffers':
        'if(result == VK_SUCCESS)\n' +
            'ApiDumpInstance::current().addCmdBuffers(\n' +
                'device,\n' +
                'pAllocateInfo->commandPool,\n' +
                'std::vector<VkCommandBuffer>(pCommandBuffers, pCommandBuffers + pAllocateInfo->commandBufferCount),\n' +
                'pAllocateInfo->level\n'
            ');',
    'vkDestroyCommandPool':
        'ApiDumpInstance::current().eraseCmdBufferPool(device, commandPool);'
    ,
    'vkFreeCommandBuffers':
        'ApiDumpInstance::current().eraseCmdBuffers(device, commandPool, std::vector<VkCommandBuffer>(pCommandBuffers, pCommandBuffers + commandBufferCount));'
    ,
}

PARAMETER_STATE = {
    'VkPipelineViewportStateCreateInfo': {
        'VkGraphicsPipelineCreateInfo':
            'ApiDumpInstance::current().setIsDynamicViewport('
            'object.pDynamicState && '
            'std::count('
                'object.pDynamicState->pDynamicStates, '
                'object.pDynamicState->pDynamicStates + object.pDynamicState->dynamicStateCount, '
                'VK_DYNAMIC_STATE_VIEWPORT'
            ') > 0);'
            'ApiDumpInstance::current().setIsDynamicScissor('
            'object.pDynamicState && '
            'std::count('
                'object.pDynamicState->pDynamicStates, '
                'object.pDynamicState->pDynamicStates + object.pDynamicState->dynamicStateCount, '
                'VK_DYNAMIC_STATE_SCISSOR'
            '));'
            'ApiDumpInstance::current().setIsGPLPreRasterOrFragmentShader(checkForGPLPreRasterOrFragmentShader(object));',
    },
    'VkCommandBufferBeginInfo': {
        'vkBeginCommandBuffer':
            'ApiDumpInstance::current().setCmdBuffer(commandBuffer);',
    },
    'VkPhysicalDeviceMemoryProperties': {
        'VkPhysicalDeviceMemoryProperties2':
            'ApiDumpInstance::current().setMemoryHeapCount(object.memoryProperties.memoryHeapCount);',
    },
    'VkDescriptorDataEXT': {
        'VkDescriptorGetInfoEXT':
            'ApiDumpInstance::current().setDescriptorType(object.type);',
    },
    'VkIndirectExecutionSetInfoEXT':{
        'VkIndirectExecutionSetInfoEXT':
            'ApiDumpInstance::current().setIndirectExecutionSetInfoType(object.type);',
    },
    'VkIndirectCommandsTokenDataEXT':{
        'VkIndirectCommandsLayoutTokenEXT':
            'ApiDumpInstance::current().setIndirectCommandsLayoutToken(object.type);',
    }
}

VALIDITY_CHECKS = {
    'VkBufferCreateInfo': {
        'pQueueFamilyIndices': 'object.sharingMode == VK_SHARING_MODE_CONCURRENT',
    },
    'VkCommandBufferBeginInfo': {
        # Tracked state ApiDumpInstance, and inherited cmd_buffer
        'pInheritanceInfo': 'ApiDumpInstance::current().getCmdBufferLevel() == VK_COMMAND_BUFFER_LEVEL_SECONDARY',
    },
    'VkDescriptorSetLayoutBinding': {
        'pImmutableSamplers':
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER)',
    },
    'VkImageCreateInfo': {
        'pQueueFamilyIndices': 'object.sharingMode == VK_SHARING_MODE_CONCURRENT',
    },
    'VkPipelineViewportStateCreateInfo': {
        'pViewports': '!ApiDumpInstance::current().getIsDynamicViewport()', # Inherited state variable is_dynamic_viewport
        'pScissors': '!ApiDumpInstance::current().getIsDynamicScissor()',   # Inherited state variable is_dynamic_scissor
    },
    'VkSwapchainCreateInfoKHR': {
        'pQueueFamilyIndices': 'object.imageSharingMode == VK_SHARING_MODE_CONCURRENT',
    },
    'VkWriteDescriptorSet': {
        'pImageInfo':
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT)',
        'pBufferInfo':
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC)',
        'pTexelBufferView':
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) || ' +
            '(object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER)',
    },
    'VkDescriptorDataEXT':{
        'pSampler': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_SAMPLER',
        'pCombinedImageSampler': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER',
        'pInputAttachmentImage': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT',
        'pSampledImage': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE',
        'pStorageImage': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE',
        'pUniformTexelBuffer': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER',
        'pStorageTexelBuffer': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER',
        'pUniformBuffer': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER',
        'pStorageBuffer': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER',
        'accelerationStructure': 'ApiDumpInstance::current().getDescriptorType() == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR',
    },
    'VkPipelineRenderingCreateInfo': {
        'colorAttachmentCount': '!ApiDumpInstance::current().getIsGPLPreRasterOrFragmentShader()',
        'pColorAttachmentFormats': '!ApiDumpInstance::current().getIsGPLPreRasterOrFragmentShader()',
        'depthAttachmentFormat': '!ApiDumpInstance::current().getIsGPLPreRasterOrFragmentShader()',
        'stencilAttachmentFormat': '!ApiDumpInstance::current().getIsGPLPreRasterOrFragmentShader()',
    },
    'VkIndirectExecutionSetInfoEXT':{
        'pPipelineInfo': 'ApiDumpInstance::current().getIndirectExecutionSetInfoType() == VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT',
        'pShaderInfo': 'ApiDumpInstance::current().getIndirectExecutionSetInfoType() == VK_INDIRECT_EXECUTION_SET_INFO_TYPE_SHADER_OBJECTS_EXT',
    },
    'VkIndirectCommandsTokenDataEXT':{
        'pPushConstant': 'ApiDumpInstance::current().getIndirectCommandsLayoutToken() == VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT || ApiDumpInstance::current().getIndirectCommandsLayoutToken() == VK_INDIRECT_COMMANDS_TOKEN_TYPE_SEQUENCE_INDEX_EXT',
        'pVertexBuffer': 'ApiDumpInstance::current().getIndirectCommandsLayoutToken() == VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_EXT',
        'pIndexBuffer': 'ApiDumpInstance::current().getIndirectCommandsLayoutToken() == VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_EXT',
        'pExecutionSet': 'ApiDumpInstance::current().getIndirectCommandsLayoutToken() == VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT',

    }
}

# These types are defined in both video.xml and vk.xml. Because duplicate functions aren't allowed,
# we have to prevent these from generating twice. This is done by removing the types from the non-video
# outputs
DUPLICATE_TYPES_IN_VIDEO_HEADER = ['uint32_t', 'uint16_t', 'uint8_t', 'int32_t', 'int16_t', 'int8_t']

# Short list of all of the functions that are 'global', meaning they can be queried from vkGetInstanceProcAddr(NULL, "<func_name>")
GLOBAL_FUNCTION_NAMES = ['vkEnumerateInstanceLayerProperties', 'vkEnumerateInstanceExtensionProperties', 'vkEnumerateInstanceVersion', 'vkCreateInstance']

# Types that are from stdint.h but we need to generate printers for
EXTERNAL_TYPES = ['uint64_t', 'size_t', 'char', 'float', 'int64_t', 'double' ]

BLOCKING_API_CALLS = [
    'vkWaitForFences', 'vkWaitSemaphores', 'vkQueuePresentKHR', 'vkDeviceWaitIdle',
    'vkQueueWaitIdle', 'vkAcquireNextImageKHR', 'vkGetQueryPoolResults', 'vkWaitSemaphoresKHR'
]

class ApiDumpGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def generate(self):
        self.generate_copyright()
        if self.filename == 'api_dump.cpp':
            self.generate_dispatch_codegen()
        elif self.filename == 'api_dump_text.h':
            self.generate_text_header()
        elif self.filename == 'api_dump_text.cpp':
            self.generate_text_implementation(video=False)
        elif self.filename == 'api_dump_html.h':
            self.generate_html_header()
        elif self.filename == 'api_dump_html.cpp':
            self.generate_html_implementation(video=False)
        elif self.filename == 'api_dump_json.h':
            self.generate_json_header()
        elif self.filename == 'api_dump_json.cpp':
            self.generate_json_implementation(video=False)
        elif self.filename == 'api_dump_video_text.h':
            self.generate_text_implementation(video=True)
        elif self.filename == 'api_dump_video_html.h':
            self.generate_json_implementation(video=True)
        elif self.filename == 'api_dump_video_json.h':
            self.generate_json_implementation(video=True)

    def generate_copyright(self):
                self.write('''
/* Copyright (c) 2015-2016, 2021 Valve Corporation
 * Copyright (c) 2015-2016, 2021 LunarG, Inc.
 * Copyright (c) 2015-2016, 2021 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * This file is generated from the Khronos Vulkan XML API Registry.
 */
''')

    def generate_dispatch_codegen(self):

        self.write('''#include "api_dump_text.h"
#include "api_dump_html.h"
#include "api_dump_json.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

// Specifically implemented functions

#if defined(__GNUC__) && __GNUC__ >= 4
#define EXPORT_FUNCTION __attribute__((visibility("default")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define EXPORT_FUNCTION __attribute__((visibility("default")))
#else
#define EXPORT_FUNCTION
#endif

VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
{
    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());
    ApiDumpInstance::current().initLayerSettings(pCreateInfo, pAllocator);
    dump_function_head(ApiDumpInstance::current(), "vkCreateInstance", "pCreateInfo, pAllocator, pInstance", "VkResult");

    // Get the function pointer
    VkLayerInstanceCreateInfo* chain_info = get_chain_info(pCreateInfo, VK_LAYER_LINK_INFO);
    assert(chain_info->u.pLayerInfo != 0);
    PFN_vkGetInstanceProcAddr fpGetInstanceProcAddr = chain_info->u.pLayerInfo->pfnNextGetInstanceProcAddr;
    assert(fpGetInstanceProcAddr != 0);
    PFN_vkCreateInstance fpCreateInstance = (PFN_vkCreateInstance) fpGetInstanceProcAddr(NULL, "vkCreateInstance");
    if(fpCreateInstance == NULL) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    // Call the function and create the dispatch table
    chain_info->u.pLayerInfo = chain_info->u.pLayerInfo->pNext;
    VkResult result = fpCreateInstance(pCreateInfo, pAllocator, pInstance);
    if(result == VK_SUCCESS) {
        initInstanceTable(*pInstance, fpGetInstanceProcAddr);
    }

    // Output the API dump
    if (ApiDumpInstance::current().shouldDumpOutput()) {
        switch(ApiDumpInstance::current().settings().format())
        {
            case ApiDumpFormat::Text:
                dump_text_vkCreateInstance(ApiDumpInstance::current(), result, pCreateInfo, pAllocator, pInstance);
                break;
            case ApiDumpFormat::Html:
                dump_html_vkCreateInstance(ApiDumpInstance::current(), result, pCreateInfo, pAllocator, pInstance);
                break;
            case ApiDumpFormat::Json:
                dump_json_vkCreateInstance(ApiDumpInstance::current(), result, pCreateInfo, pAllocator, pInstance);
                break;
        }
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)
{
    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());
    dump_function_head(ApiDumpInstance::current(), "vkCreateDevice", "physicalDevice, pCreateInfo, pAllocator, pDevice", "VkResult");

    // Get the function pointer
    VkLayerDeviceCreateInfo* chain_info = get_chain_info(pCreateInfo, VK_LAYER_LINK_INFO);
    assert(chain_info->u.pLayerInfo != 0);
    PFN_vkGetInstanceProcAddr fpGetInstanceProcAddr = chain_info->u.pLayerInfo->pfnNextGetInstanceProcAddr;
    PFN_vkGetDeviceProcAddr fpGetDeviceProcAddr = chain_info->u.pLayerInfo->pfnNextGetDeviceProcAddr;
    VkInstance vk_instance = ApiDumpInstance::current().get_vk_instance(physicalDevice);
    PFN_vkCreateDevice fpCreateDevice = (PFN_vkCreateDevice) fpGetInstanceProcAddr(vk_instance, "vkCreateDevice");
    if(fpCreateDevice == NULL) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    // Call the function and create the dispatch table
    chain_info->u.pLayerInfo = chain_info->u.pLayerInfo->pNext;
    VkResult result = fpCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
    if(result == VK_SUCCESS) {
        initDeviceTable(*pDevice, fpGetDeviceProcAddr);
    }

    // Output the API dump
    if (ApiDumpInstance::current().shouldDumpOutput()) {
        switch(ApiDumpInstance::current().settings().format())
        {
            case ApiDumpFormat::Text:
                dump_text_vkCreateDevice(ApiDumpInstance::current(), result, physicalDevice, pCreateInfo, pAllocator, pDevice);
                break;
            case ApiDumpFormat::Html:
                dump_html_vkCreateDevice(ApiDumpInstance::current(), result, physicalDevice, pCreateInfo, pAllocator, pDevice);
                break;
            case ApiDumpFormat::Json:
                dump_json_vkCreateDevice(ApiDumpInstance::current(), result, physicalDevice, pCreateInfo, pAllocator, pDevice);
                break;
        }
    }
    return result;
}

EXPORT_FUNCTION VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    return util_GetExtensionProperties(0, NULL, pPropertyCount, pProperties);
}

EXPORT_FUNCTION VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    static const VkLayerProperties layerProperties[] = {
        {
            "VK_LAYER_LUNARG_api_dump",
            VK_MAKE_VERSION(1, 4, VK_HEADER_VERSION), // specVersion
            VK_MAKE_VERSION(0, 2, 0), // implementationVersion
            "layer: api_dump",
        }
    };

    return util_GetLayerProperties(ARRAY_SIZE(layerProperties), layerProperties, pPropertyCount, pProperties);
}

EXPORT_FUNCTION VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    static const VkLayerProperties layerProperties[] = {
        {
            "VK_LAYER_LUNARG_api_dump",
            VK_MAKE_VERSION(1, 4, VK_HEADER_VERSION),
            VK_MAKE_VERSION(0, 2, 0),
            "layer: api_dump",
        }
    };

    return util_GetLayerProperties(ARRAY_SIZE(layerProperties), layerProperties, pPropertyCount, pProperties);
}

// Autogen instance functions
''')


        for command in  [x for x in self.vk.commands.values() if x.instance]:
            if command.name in ['vkCreateInstance', 'vkCreateDevice', 'vkGetInstanceProcAddr', 'vkEnumerateDeviceExtensionProperties', 'vkEnumerateDeviceLayerProperties', 'vkEnumerateInstanceExtensionProperties', 'vkEnumerateInstanceLayerProperties', 'vkEnumerateInstanceVersion']:
                continue
            if command.protect:
                self.write(f'#if defined({command.protect})')

            self.write(f'VKAPI_ATTR {command.returnType} VKAPI_CALL {command.name}({", ".join(str.strip(p.cDeclaration) for p in command.params)})')
            self.write('{')
            if command.name not in BLOCKING_API_CALLS:
                self.write('    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());')
                self.write(f'    dump_function_head(ApiDumpInstance::current(), "{command.name}", "{", ".join(p.name for p in command.params)}", "{command.returnType}");')

            if command.name == 'vkGetPhysicalDeviceToolPropertiesEXT':
                self.write('''    static const VkPhysicalDeviceToolPropertiesEXT api_dump_layer_tool_props = {
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT,
        nullptr,
        "API Dump Layer",
        "2",
        VK_TOOL_PURPOSE_PROFILING_BIT_EXT | VK_TOOL_PURPOSE_TRACING_BIT_EXT,
        "The VK_LAYER_LUNARG_api_dump utility layer prints API calls, parameters, and values to the identified output stream.",
        "VK_LAYER_LUNARG_api_dump"};

    auto original_pToolProperties = pToolProperties;
    if (pToolProperties != nullptr) {
        *pToolProperties = api_dump_layer_tool_props;
        pToolProperties = ((*pToolCount > 1) ? &pToolProperties[1] : nullptr);
        (*pToolCount)--;
    }''')
            if command.name == 'vkDestroyInstance':
                self.write('    auto dispatch_key = get_dispatch_key(instance);')

            return_str = f'{command.returnType} result = ' if command.returnType != 'void' else ''
            self.write(f'    {return_str}instance_dispatch_table({command.params[0].name})->{command.name[2:]}({", ".join(p.name for p in command.params)});')
            if command.name in BLOCKING_API_CALLS:
                self.write('    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());')
                self.write(f'    dump_function_head(ApiDumpInstance::current(), "{command.name}", "{", ".join(p.name for p in command.params)}", "{command.returnType}");')

            if command.name in TRACKED_STATE:
                self.write('    ' + TRACKED_STATE[command.name])
            else:
                self.write('    ')

            if command.name == 'vkEnumeratePhysicalDevices':
                self.write('    if (pPhysicalDeviceCount != nullptr && pPhysicalDevices != nullptr) {')
                self.write('        for (uint32_t i = 0; i < *pPhysicalDeviceCount; i++) {')
                self.write('            ApiDumpInstance::current().set_vk_instance(pPhysicalDevices[i], instance);')
                self.write('        }')
                self.write('    }')

            if command.name == 'vkDestroyInstance':
                self.write('    destroy_instance_dispatch_table(dispatch_key);')

            if command.name == 'vkGetPhysicalDeviceToolPropertiesEXT':
                self.write('    if (original_pToolProperties != nullptr) {')
                self.write('        pToolProperties = original_pToolProperties;')
                self.write('    }\n')
                self.write('    (*pToolCount)++;')

            self.write(f'''    if (ApiDumpInstance::current().shouldDumpOutput()) {{
        switch(ApiDumpInstance::current().settings().format())
        {{
            case ApiDumpFormat::Text:
                dump_text_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{', '.join(p.name for p in command.params)});
                break;
            case ApiDumpFormat::Html:
                dump_html_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{', '.join(p.name for p in command.params)});
                break;
            case ApiDumpFormat::Json:
                dump_json_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{', '.join(p.name for p in command.params)});
                break;
        }}
    }}''')
            if command.returnType != 'void':
                self.write('    return result;')
            self.write('}')
            if command.protect:
                self.write(f'#endif // {command.protect}')

        self.write('\n// Autogen device functions\n')

        for command in [x for x in self.vk.commands.values() if (x.device or 'VK_EXT_debug_utils' in x.extensions)]:
            if command.name in ['vkGetDeviceProcAddr']:
                continue

            if command.protect:
                self.write(f'#if defined({command.protect})')

            self.write(f'VKAPI_ATTR {command.returnType} VKAPI_CALL {command.name}({", ".join(str.strip(p.cDeclaration) for p in command.params)})')
            self.write('{')

            if command.name not in BLOCKING_API_CALLS:
                self.write('    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());')
                if command.name in ['vkDebugMarkerSetObjectNameEXT', 'vkSetDebugUtilsObjectNameEXT']:
                    self.write('    ApiDumpInstance::current().update_object_name_map(pNameInfo);')
                self.write(f'    dump_function_head(ApiDumpInstance::current(), "{command.name}", "{", ".join(p.name for p in command.params)}", "{command.returnType}");')

            return_str = f'{command.returnType} result = ' if command.returnType != 'void' else ''
            self.write(f'    {return_str}device_dispatch_table({command.params[0].name})->{command.name[2:]}({", ".join(p.name for p in command.params)});')
            if command.name in BLOCKING_API_CALLS:
                self.write('    std::lock_guard<std::mutex> lg(ApiDumpInstance::current().outputMutex());')
                self.write(f'    dump_function_head(ApiDumpInstance::current(), "{command.name}", "{", ".join(p.name for p in command.params)}", "{command.returnType}");')

            if command.name in TRACKED_STATE:
                self.write('    ' + TRACKED_STATE[command.name])
            else:
                self.write('    ')

            if command.name == 'vkDestroyDevice':
                self.write('    destroy_device_dispatch_table(get_dispatch_key(device));')

            self.write(f'''    if (ApiDumpInstance::current().shouldDumpOutput()) {{
        switch(ApiDumpInstance::current().settings().format())
        {{
            case ApiDumpFormat::Text:
                dump_text_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{", ".join(p.name for p in command.params)});
                break;
            case ApiDumpFormat::Html:
                dump_html_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{", ".join(p.name for p in command.params)});
                break;
            case ApiDumpFormat::Json:
                dump_json_{command.name}(ApiDumpInstance::current(), {"result, " if command.returnType != "void" else ""}{", ".join(p.name for p in command.params)});
                break;
        }}
    }}''')
            if command.name == 'vkQueuePresentKHR':
                self.write('    ApiDumpInstance::current().nextFrame();')
            if command.returnType != 'void':
                self.write('    return result;')
            self.write('}')
            if command.protect:
                self.write(f'#endif // {command.protect}')

        self.write('\nVKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL api_dump_known_instance_functions(VkInstance instance, const char* pName)')
        self.write('{\n')
        for command in self.vk.commands.values():
            if command.name in ['vkEnumerateDeviceExtensionProperties', 'vkEnumerateInstanceVersion'] or (command.device and self.vk.extensions['VK_EXT_debug_utils'] not in command.extensions):
                continue
            if command.protect:
                self.write(f'#if defined({command.protect})')
            if command.params[0].type in ['VkInstance', 'VkPhysicalDevice']:
                self.write(f'    if(strcmp(pName, "{command.name}") == 0 && (!instance || instance_dispatch_table(instance)->{command.name[2:]}))')
            else:
                self.write(f'    if(strcmp(pName, "{command.name}") == 0)')
            self.write(f'        return reinterpret_cast<PFN_vkVoidFunction>({command.name});')
            if command.protect:
                self.write(f'#endif // {command.protect}')
        self.write('\n    return nullptr;')
        self.write('}')

        self.write('\nVKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL api_dump_known_device_functions(VkDevice device, const char* pName)')
        self.write('{\n')
        for command in [x for x in self.vk.commands.values() if x.device ]:
            if command.protect:
                self.write(f'#if defined({command.protect})')
            self.write(f'    if(strcmp(pName, "{command.name}") == 0 && (!device || device_dispatch_table(device)->{command.name[2:]}))')
            self.write(f'        return reinterpret_cast<PFN_vkVoidFunction>({command.name});')
            if command.protect:
                self.write(f'#endif // {command.protect}')

        self.write('\n    return nullptr;')
        self.write('}')

        self.write('''
EXPORT_FUNCTION VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance instance, const char* pName)
{
    auto instance_func = api_dump_known_instance_functions(instance, pName);
    if (instance_func) return instance_func;

    // Make sure that device functions queried through GIPA works
    auto device_func = api_dump_known_device_functions(NULL, pName);
    if (device_func) return device_func;

    // Haven't created an instance yet, exit now since there is no instance_dispatch_table
    if(instance_dispatch_table(instance)->GetInstanceProcAddr == NULL)
        return nullptr;
    return instance_dispatch_table(instance)->GetInstanceProcAddr(instance, pName);
}

EXPORT_FUNCTION VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice device, const char* pName)
{
    auto device_func = api_dump_known_device_functions(device, pName);
    if (device_func) return device_func;

    // Haven't created a device yet, exit now since there is no device_dispatch_table
    if(device_dispatch_table(device)->GetDeviceProcAddr == NULL)
        return nullptr;
    return device_dispatch_table(device)->GetDeviceProcAddr(device, pName);
}''')

    def generate_text_header(self, video=False):
        self.write('''
#pragma once

#include "api_dump.h"
''')
        if not video:
            self.write(f'void dump_text_pNext_struct_name(const void* object, const ApiDumpSettings& settings, int indents, const char* pnext_type);')
            self.write(f'void dump_text_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_text_{union.name}(const {union.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Type Implementations ==========================//')

        for t in EXTERNAL_TYPES:
            self.write(f'void dump_text_{t}({t} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Basetype Implementations ========================//')

        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_text_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_text_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_text_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')

        self.write('\n//======================= System Type Implementations =======================//')

        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_text_{sys.name}(const {sys.type} object, const ApiDumpSettings& settings, int indents);')


        self.write('\n//========================== Handle Implementations =========================//')

        for handle in self.vk.handles.values():
            self.write(f'void dump_text_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents);')


        self.write('\n//=========================== Enum Implementations ==========================//')

        for enum in self.vk.enums.values():
            self.write(f'void dump_text_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Bitmask Implementations =========================//')

        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_text_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Flag Implementations ==========================//')

@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_text_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents);')
@end flag

        self.write('\n//======================= f ======================//')

@foreach funcpointer
        self.write(f'void dump_text_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents);')
@end funcpointer

        self.write('\n//========================== Struct Implementations =========================//')

        for struct in self.vk.structs.values():
            self.write(f'void dump_text_{struct.name}(const {struct.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================== Union Implementations ==========================//')

        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_text_{union.name}(const {union.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//======================== pNext Chain Implementation =======================//')
        if not video:
            self.write(f'void dump_text_pNext_struct_name(const void* object, const ApiDumpSettings& settings, int indents, const char* pnext_type);')

            self.write(f'void dump_text_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Function Implementations ========================//')

@foreach function where('{funcName}' not in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_text_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams});')
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_text_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams});')
@end if
@end function


    def generate_text_implementation(self, video=False):
@if({isVideoGeneration})
        self.write(f'#pragma once')
@end if

        self.write(f'#include "api_dump_text.h"')
@if(not {isVideoGeneration})
        self.write(f'#include "api_dump_video_text.h"')
@end if
        self.write(f'//=========================== Type Implementations ==========================//')

        for t in EXTERNAL_TYPES:
            self.write(f'void dump_text_{t}({t} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
    @if('{t}' != 'uint8_t' and '{t}' != 'int8_t')
                self.write(f'    settings.stream() << object;')
    @end if
    @if('{t}' == 'uint8_t')
                self.write(f'    settings.stream() << (uint32_t) object;')
    @end if
    @if('{t}' == 'int8_t')
                self.write(f'    settings.stream() << (int32_t) object;')
    @end if
            self.write('}')

        self.write(f'//========================= Basetype Implementations ========================//')

        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_text_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write(f'    settings.stream() << object;')
            self.write('}')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_text_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << object;')
            self.write('}')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_text_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << object;')
            self.write('}')
            self.write('#endif')

        self.write('\n//======================= System Type Implementations =======================//\n')
        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_text_{sys.name}(const {sys.type} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            if sys.needsPointer:
                self.write('''    if (object == NULL) {
        settings.stream() << "NULL";
        return;
    }
    OutputAddress(settings, object);''')
            else:
                self.write('''    if (settings.showAddress())
        settings.stream() << object;
    else
        settings.stream() << "address";''')
            self.write('}')

        self.write('\n//========================== Handle Implementations =========================//\n')
        for handle in self.vk.handles.values():
            self.write(f'''void dump_text_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents)
{{
    if(settings.showAddress()) {{
        settings.stream() << object;

        std::unordered_map<uint64_t, std::string>::const_iterator it = ApiDumpInstance::current().object_name_map.find((uint64_t) object);
        if (it != ApiDumpInstance::current().object_name_map.end()) {{
            settings.stream() << " [" << it->second << "]";
        }}
    }} else {{
        settings.stream() << "address";
    }}
}}''')

        self.write('\n//=========================== Enum Implementations ==========================//\n')
        for enum in self.vk.enums.values():
            self.write(f'void dump_text_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    switch((int64_t) object)')
            self.write('    {')
            for field in enum.fields:
                self.write(f'    case {field.valueStr}:')
                self.write(f'        settings.stream() << "{field.name} (";')
                self.write('        break;')
        @end option
            self.write('    default:')
            self.write('        settings.stream() << "UNKNOWN (";')
            self.write('    }')
            self.write('    settings.stream() << object << ")";')
            self.write('}')

        self.write('\n//========================= Bitmask Implementations =========================//\n')
        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_text_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    bool is_first = true;')
            self.write('    settings.stream() << object;')
            for field in bitmask.flags:
                self.write(f'    if(object {"==" if field.multiBit else "&"} {bitmask.valueStr}) {{')
                self.write(f'        settings.stream() << (is_first ? \" (\" : \" | \") << "{field.name}"; is_first = false;')
                self.write('    }')
            self.write('    if(!is_first)')
            self.write('        settings.stream() << ")";')
            self.write('}')

        self.write('\n//=========================== Flag Implementations ==========================//\n')
@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_text_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    dump_text_{flagEnum}(({flagEnum}) object, settings, indents);')
        self.write('}')
@end flag
@foreach flag where('{flagEnum}' == 'None')
        self.write(f'void dump_text_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write('    settings.stream() << object;')
        self.write('}')
@end flag
        self.write('\n//======================= Func Pointer Implementations ======================//\n')
@foreach funcpointer
        self.write(f'void dump_text_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write('    if(settings.showAddress())')
        self.write('        settings.stream() << object;')
        self.write('    else')
        self.write('        settings.stream() << "address";')
        self.write('}')
@end funcpointer
        self.write('\n//========================== Struct Implementations =========================//\n')
@foreach struct
        self.write(f'void dump_text_{sctName}(const {sctName}& object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    if(settings.showAddress())
        self.write(f'        settings.stream() << &object << ":\\n";')
        self.write('    else')
        self.write(f'        settings.stream() << "address:\\n";')
        self.write(f'
    @foreach member
        @if('{memParameterStorage}' != '' and '{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        self.write(f'        {memParameterStorage}
        @end if
        @if('{memParameterStorage}' != '' and '{memCondition}' == 'None')
        self.write(f'    {memParameterStorage}
        @end if
    @end member
        self.write(f'
    @foreach member
        @if('{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        @end if
        @if({memPtrLevel} == 0)
            @if('{memName}' != 'pNext')
                @if('{memName}' == 'apiVersion')
        self.write(f'    dump_text_value<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, OutputApiVersionTEXT);  // AET
                @end if
                @if('{memName}' != 'apiVersion')
        self.write(f'    dump_text_value<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, dump_text_{memTypeID});  // AET
                @end if
            @end if
            @if('{memName}' == 'pNext')
        self.write(f'    dump_text_pNext_struct_name(object.{memName}, settings, indents + 1, "{memType}");')
            @end if
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' == 'None')
        self.write(f'    dump_text_pointer<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, dump_text_{memTypeID});')
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and not {memLengthIsMember})
        self.write(f'    dump_text_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_text_{memTypeID}); // AQA
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and {memLengthIsMember} and '{memName}' != 'pCode')
            @if('{memLength}'[0].isdigit() or '{memLength}'[0].isupper())
        self.write(f'    dump_text_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_text_{memTypeID}); // BQA
            @end if
            @if(not ('{memLength}'[0].isdigit() or '{memLength}'[0].isupper()))
                @if('{memLength}' == 'rasterizationSamples')
        self.write(f'    dump_text_array<const {memBaseType}>(object.{memName}, (object.{memLength} + 31) / 32, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_text_{memTypeID}); // BQB
                @end if
                @if('{memLength}' != 'rasterizationSamples')
        self.write(f'    dump_text_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_text_{memTypeID}); // BQB
                @end if
            @end if
        @end if
        self.write(f'
        @if('{sctName}' == 'VkShaderModuleCreateInfo')
            @if('{memName}' == 'pCode')
        self.write(f'    if(settings.showShader())
        self.write(f'        dump_text_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_text_{memTypeID}); // CQA
        self.write('    else')
        self.write(f'        dump_text_special("SHADER DATA", settings, "{memType}", "{memName}", indents + 1);')
            @end if
        @end if
        self.write(f'
        @if('{memCondition}' != 'None')
        self.write('    else')
        self.write(f'        dump_text_special("UNUSED", settings, "{memType}", "{memName}", indents + 1);')
        @end if
    @end member
        self.write(f'
    @foreach member
    @if({memPtrLevel} == 0)
        @if('{memName}' == 'pNext')
        self.write(f'    if(object.pNext != nullptr){{')
        self.write(f'        dump_text_pNext_trampoline(object.{memName}, settings, indents < 2 ? indents + 1 : indents);')
        self.write('    }')
        @end if
    @end if
    @end member
        self.write('}')
@end struct

        self.write('\n//========================== Union Implementations ==========================//\n')

        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_text_{union.name}(const {union.name}& object, const ApiDumpSettings& settings, int indents)')
            self.write('''{
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\\n";
    else
        settings.stream() << "address (Union):\\n";
}''')
            for member in union.members:
                if union.name in VALIDITY_CHECKS and member.name in VALIDITY_CHECKS[union.name]:
                    self.write(f'    if({chcCondition})
                @if({chcPtrLevel} == 0)
                    self.write(f'    dump_text_value<const {chcBaseType}>(object.{chcName}, settings, "{chcType}", "{chcName}", indents + 1, dump_text_{chcTypeID}); // LET
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' == 'None')
                    self.write(f'    dump_text_pointer<const {chcBaseType}>(object.{chcName}, settings, "{chcType}", "{chcName}", indents + 1, dump_text_{chcTypeID});')
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' != 'None')
                    self.write(f'    dump_text_array<const {chcBaseType}>(object.{chcName}, {chcLength}, settings, "{chcType}", "{chcChildType}", "{chcName}", indents + 1, dump_text_{chcTypeID}); // GQA
                @end if
            self.write('}')
@end union
        self.write('\n//======================== pNext Chain Implementation =======================//\n')
@if(not {isVideoGeneration})
        self.write(f'void dump_text_pNext_struct_name(const void* object, const ApiDumpSettings& settings, int indents, const char* pnext_type)')
        self.write('{')
        self.write(f'    if (object == nullptr) {{')
        self.write(f'        dump_text_value<const void*>(object, settings, pnext_type, "pNext", indents, dump_text_void);')
        self.write(f'        return;')
        self.write('    }')
        self.write(f'
        self.write(f'    settings.formatNameType(indents, "pNext", pnext_type);')
        self.write(f'    switch(reinterpret_cast<const VkBaseInStructure*>(object)->sType) {{')
    @foreach struct
        @if({sctStructureTypeIndex} != -1)
        self.write(f'        case {sctStructureTypeIndex}:')
        self.write(f'            settings.stream() << "{sctName}\\n";')
        self.write(f'            break;')
        @end if
    @end struct
        self.write(f'        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: // 47')
        self.write(f'        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: // 48')
        self.write(f'        default:')
        self.write(f'            settings.stream() << "NULL\\n";')
        self.write(f'            break;')
        self.write('    }')
        self.write('}')
        self.write(f'
        self.write(f'void dump_text_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    const auto* base_struct = reinterpret_cast<const VkBaseInStructure*>(object);')
        self.write(f'    switch(base_struct->sType) {{')
    @foreach struct
        @if({sctStructureTypeIndex} != -1)
        self.write(f'    case {sctStructureTypeIndex}:')
        self.write(f'        dump_text_pNext<const {sctName}>(reinterpret_cast<const {sctName}*>(object), settings, "{sctName}", indents, dump_text_{sctName});')
        self.write(f'        break;')
        @end if
    @end struct
        self.write(f'
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: // 47
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: // 48
        self.write(f'        if(base_struct->pNext != nullptr){{')
        self.write(f'            dump_text_pNext_trampoline(reinterpret_cast<const void*>(base_struct->pNext), settings, indents);')
        self.write('        } else {')
        self.write(f'            settings.formatNameType(indents, "pNext", "const void*");')
        self.write(f'            settings.stream() << "NULL\\n";')
        self.write(        '}')
        self.write(f'        break;')
        self.write(f'    default:')
        self.write(f'        settings.formatNameType(indents, "pNext", "const void*");')
        self.write(f'        settings.stream() << "UNKNOWN (" << (int64_t) (base_struct->sType) << ")\\n";')
        self.write('    }')
        self.write('}')
@end if
        self.write('\n//========================= Function Implementations ========================//\n')
@foreach function where('{funcName}' not in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_text_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams})
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_text_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams})
@end if
        self.write('{')
        self.write(f'    const ApiDumpSettings& settings(dump_inst.settings());')
        self.write(f'
    @if('{funcReturn}' != 'void')
        self.write(f'    settings.stream() << " ";')
        self.write(f'    dump_text_{funcReturn}(result, settings, 0);')
    @end if
        self.write(f'    settings.stream() << ":\\n";')
        self.write(f'    if(settings.showParams())
        self.write('    {'
        @foreach parameter
        @if('{prmParameterStorage}' != '')
        self.write(f'        {prmParameterStorage}
        @end if
        @if({prmPtrLevel} == 0)
        self.write(f'        dump_text_value<const {prmBaseType}>({prmName}, settings, "{prmType}", "{prmName}", 1, dump_text_{prmTypeID}); // MET
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' == 'None')
        self.write(f'        dump_text_pointer<const {prmBaseType}>({prmName}, settings, "{prmType}", "{prmName}", 1, dump_text_{prmTypeID});')
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' != 'None')
        self.write(f'        dump_text_array<const {prmBaseType}>({prmName}, {prmLength}, settings, "{prmType}", "{prmChildType}", "{prmName}", 1, dump_text_{prmTypeID}); // HQA
        @end if
        @end parameter
        self.write('    }')
        self.write(f'    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\\n";')
        self.write('}')
@end function



    def generate_html_header(self, video=False):
        self.write('''
#pragma once

#include "api_dump.h"
''')
@if(not {isVideoGeneration})
        self.write(f'void dump_html_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')
@end if
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_html_{union.name}(const {union.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Type Implementations ==========================//\n')

        for t in EXTERNAL_TYPES:
            self.write(f'void dump_html_{t}({t} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Basetype Implementations ========================//\n')

        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_html_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_html_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_html_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')
@end basetype

        self.write('\n//======================= System Type Implementations =======================//\n')

        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_html_{sys.name}(const {sys.type} object, const ApiDumpSettings& settings, int indents);')


        self.write('\n//========================== Handle Implementations =========================//\n')

        for handle in self.vk.handles.values():
            self.write(f'void dump_html_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents);')


        self.write('\n//=========================== Enum Implementations ==========================//\n')

        for enum in self.vk.enums.values():
            self.write(f'void dump_html_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Bitmask Implementations =========================//\n')

        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_html_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Flag Implementations ==========================//\n')

@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_html_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents);')
@end flag

        self.write('//======================= Func Pointer Implementations ======================//\n')

@foreach funcpointer
        self.write(f'void dump_html_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents);')
@end funcpointer

        self.write('\n//========================== Struct Implementations =========================//\n')

        for struct in self.vk.structs.values():
            self.write(f'void dump_html_{struct.name}(const {struct.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================== Union Implementations ==========================//\n')

        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_html_{union.name}(const {union.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= pNext Chain Implementation =======================//\n')
        if not video:
            self.write(f'void dump_html_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')
        self.write('\n//========================= Function Implementations ========================//\n')

@foreach function where('{funcName}' not in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_html_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams});')
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_html_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams});')
@end if
@end function


    def generate_html_implementation(self, video=False):

@if({isVideoGeneration})
        self.write(f'#pragma once
@end if
        self.write(f'
        self.write(f'#include "api_dump_html.h"
@if(not {isVideoGeneration})
        self.write(f'#include "api_dump_video_html.h"
@end if
        self.write('\n//=========================== Type Implementations ==========================//\n')
        for t in EXTERNAL_TYPES:
            self.write(f'void dump_html_{t}({t} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write(f'    settings.stream() << "<div class='val'>";')
        @if('{t}' != 'uint8_t' and '{t}' != 'int8_t')
                self.write(f'    settings.stream() << object;')
        @end if
        @if('{t}' == 'uint8_t')
                self.write(f'    settings.stream() << (uint32_t) object;')
        @end if
        @if('{t}' == 'int8_t')
                self.write(f'    settings.stream() << (int32_t) object;')
        @end if
            self.write(f'    settings.stream() << "</div></summary>";')
            self.write('}')

        self.write('\n//========================= Basetype Implementations ========================//\n')
        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_html_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "<div class=\'val\'>" << object << "</div></summary>";')
            self.write('}')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_html_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "<div class=\'val\'>" << object << "</div></summary>";')
            self.write('}')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_html_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "<div class=\'val\'>" << object << "</div></summary>";')
            self.write('}')
            self.write('#endif')

        self.write('\n//======================= System Type Implementations =======================//\n')
        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_html_{sys.name}(const {sys.type} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            if sys.needsPointer:
                self.write('''    settings.stream() << "<div class=\'val\'>";
    OutputAddress(settings, object);
    settings.stream() << "</div>";''')
            else:
                self.write('''    if (settings.showAddress())
        settings.stream() << "<div class='val'>" << object << "</div></summary>";
    else
        settings.stream() << "<div class='val'>address</div></summary>";''')
            self.write('}')

        self.write('\n//========================== Handle Implementations =========================//\n')
        for handle in self.vk.handles.values():
            self.write(f'''void dump_html_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents)
{{
    settings.stream() << "<div class=\'val\'>";
    if(settings.showAddress()) {{
        settings.stream() << object;

        std::unordered_map<uint64_t, std::string>::const_iterator it = ApiDumpInstance::current().object_name_map.find((uint64_t) object);
        if (it != ApiDumpInstance::current().object_name_map.end()) {{
            settings.stream() << "</div><div class=\'val\'>[" << it->second << "]";
       }}
    }} else {{
        settings.stream() << "address";
    }}
    settings.stream() << "</div></summary>";
}}''')

        self.write('\n//=========================== Enum Implementations ==========================//\n')
        for enum in self.vk.enums.values():
            self.write(f'void dump_html_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "<div class=\'val\'>";')
            self.write('    switch((int64_t) object)')
            self.write('    {')
            for field in enum.fields:
                self.write(f'    case {field.valueStr}:')
                self.write(f'        settings.stream() << "{field.name} (";')
                self.write('        break;')
        @end option
            self.write('    default:')
            self.write('        settings.stream() << "UNKNOWN (";')
            self.write('    }')
            self.write('    settings.stream() << object << ")</div></summary>";')
            self.write('}')

        self.write('\n//========================= Bitmask Implementations =========================//\n')
        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_html_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "<div class=\'val\'>";')
            self.write('    bool is_first = true;')
            self.write('    settings.stream() << object;')
            for field in bitmask.flags:
                self.write(f'    if(object {"==" if field.multiBit else "&"} {bitmask.valueStr}) {{')
                self.write(f'        settings.stream() << (is_first ? \" (\" : \" | \") << "{field.name}"; is_first = false;')
                self.write('    }')
            self.write('    if(!is_first)')
            self.write('        settings.stream() << ")";')
            self.write('    settings.stream() << "</div></summary>";')
            self.write('}')

        self.write('\n//=========================== Flag Implementations ==========================//\n')
@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_html_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    dump_html_{flagEnum}(({flagEnum}) object, settings, indents);')
        self.write('}')
@end flag
@foreach flag where('{flagEnum}' == 'None')
        self.write(f'void dump_html_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    settings.stream() << "<div class=\'val\'>"
        self.write(f'                             << object << "</div></summary>";')
        self.write('}')
@end flag
        self.write('\n//======================= Func Pointer Implementations ======================//\n')
@foreach funcpointer
        self.write(f'void dump_html_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    settings.stream() << "<div class=\'val\'>";')
        self.write(f'    if(settings.showAddress())
        self.write(f'        settings.stream() << object;')
        self.write('    else')
        self.write(f'        settings.stream() << "address";')
        self.write(f'    settings.stream() << "</div></summary>";')
        self.write('}')
@end funcpointer
        self.write('\n//========================== Struct Implementations =========================//\n')
@foreach struct
        self.write(f'void dump_html_{sctName}(const {sctName}& object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    settings.stream() << "<div class=\'val\'>";')
        self.write(f'    if(settings.showAddress())
        self.write(f'        settings.stream() << &object << "\\n";')
        self.write('    else')
        self.write(f'        settings.stream() << "address\\n";')
        self.write(f'    settings.stream() << "</div></summary>";')
        self.write(f'
    @foreach member
        @if('{memParameterStorage}' != '' and '{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        self.write(f'        {memParameterStorage}
        @end if
        @if('{memParameterStorage}' != '' and '{memCondition}' == 'None')
        self.write(f'    {memParameterStorage}
        @end if
    @end member
        self.write(f'
    @foreach member
        @if('{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        @end if
        @if({memPtrLevel} == 0)
            @if('{memName}' != 'pNext')
                @if('{memName}' == 'apiVersion')
        self.write(f'    dump_html_value<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, OutputApiVersionHTML);')
                @end if
                @if('{memName}' != 'apiVersion')
        self.write(f'    dump_html_value<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, dump_html_{memTypeID});')
                @end if
            @end if
            @if('{memName}' == 'pNext')
        self.write(f'    if(object.pNext != nullptr){{')
        self.write(f'        dump_html_pNext_trampoline(object.{memName}, settings, indents + 1);')
        self.write('    } else {')
        self.write(f'        dump_html_value<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, dump_html_{memTypeID});')
        self.write('    }')
            @end if
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' == 'None')
        self.write(f'    dump_html_pointer<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", indents + 1, dump_html_{memTypeID});')
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and not {memLengthIsMember})
        self.write(f'    dump_html_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_html_{memTypeID}); // ZRR
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and {memLengthIsMember} and '{memName}' != 'pCode')
            @if('{memLength}'[0].isdigit() or '{memLength}'[0].isupper())
        self.write(f'    dump_html_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_html_{memTypeID}); // ZRS
            @end if
            @if(not ('{memLength}'[0].isdigit() or '{memLength}'[0].isupper()))
                @if('{memLength}' == 'rasterizationSamples')
        self.write(f'    dump_html_array<const {memBaseType}>(object.{memName}, (object.{memLength} + 31) / 32, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_html_{memTypeID}); // ZRT
                @end if
                @if('{memLength}' != 'rasterizationSamples')
        self.write(f'    dump_html_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_html_{memTypeID}); // ZRT
                @end if
            @end if
        @end if
        @if('{sctName}' == 'VkShaderModuleCreateInfo')
            @if('{memName}' == 'pCode')
        self.write(f'    if(settings.showShader())
        self.write(f'        dump_html_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", indents + 1, dump_html_{memTypeID}); // ZRU
        self.write('    else')
        self.write(f'        dump_html_special("SHADER DATA", settings, "{memType}", "{memName}", indents + 1);')
            @end if
        @end if
        self.write(f'
        @if('{memCondition}' != 'None')
        self.write('    else')
        self.write(f'        dump_html_special("UNUSED", settings, "{memType}", "{memName}", indents + 1);')
        @end if
    @end member
        self.write('}')
@end struct
        self.write('\n//========================== Union Implementations ==========================//\n')
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_html_{unName}(const {unName}& object, const ApiDumpSettings& settings, int indents)')
            self.write('''{
    settings.stream() << "<div class='val'>";
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\\n";
    else
        settings.stream() << "address (Union):\\n";
    settings.stream() << "</div></summary>";
''')
            for member in union.members:
                if union.name in VALIDITY_CHECKS and member.name in VALIDITY_CHECKS[union.name]:
                    self.write(f'    if({chcCondition})
                @if({chcPtrLevel} == 0)
                    self.write(f'    dump_html_value<const {chcBaseType}>(object.{chcName}, settings, "{chcType}", "{chcName}", indents + 1, dump_html_{chcTypeID});')
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' == 'None')
                    self.write(f'    dump_html_pointer<const {chcBaseType}>(object.{chcName}, settings, "{chcType}", "{chcName}", indents + 1, dump_html_{chcTypeID});')
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' != 'None')
                    self.write(f'    dump_html_array<const {chcBaseType}>(object.{chcName}, {chcLength}, settings, "{chcType}", "{chcChildType}", "{chcName}", indents + 1, dump_html_{chcTypeID}); // ZRY
                @end if
            @end choice
            self.write('}')

        self.write('\n//======================== pNext Chain Implementation =======================//')
@if(not {isVideoGeneration})
        self.write(f'void dump_html_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    switch((int64_t) (static_cast<const VkBaseInStructure*>(object)->sType)) {{')
    @foreach struct
        @if({sctStructureTypeIndex} != -1)
        self.write(f'    case {sctStructureTypeIndex}:')
        self.write(f'        dump_html_pNext<const {sctName}>(static_cast<const {sctName}*>(object), settings, "{sctName}", indents, dump_html_{sctName});')
        self.write(f'        break;')
        @end if
    @end struct
        self.write(f'
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: // 47
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: // 48
        self.write(f'        if(static_cast<const VkBaseInStructure*>(object)->pNext != nullptr){{')
        self.write(f'            dump_html_pNext_trampoline(static_cast<const void*>(static_cast<const VkBaseInStructure*>(object)->pNext), settings, indents);')
        self.write('        } else {')
        self.write(f'            settings.stream() << "<details class='data'><summary>";')
        self.write(f'            dump_html_nametype(settings.stream(), settings.showType(), "pNext", "const void*");')
        self.write(f'            settings.stream() << "<div class='val'> NULL</div></summary></details>";')
        self.write(        '}')
        self.write(f'        break;')
        self.write(f'    default:')
        self.write(f'        settings.stream() << "<details class='data'><summary>";')
        self.write(f'        dump_html_nametype(settings.stream(), settings.showType(), "pNext", "const void*");')
        self.write(f'        settings.stream() << "<div class='val'>UNKNOWN (" << (int64_t) (static_cast<const VkBaseInStructure*>(object)->sType) <<")</div></summary></details>";')
        self.write('    }')
        self.write('}')
@end if
        self.write('\n//========================= Function Implementations ========================//\n')
@foreach function where('{funcName}' not in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_html_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams})
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_html_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams})
@end if
        self.write('{')
        self.write(f'    const ApiDumpSettings& settings(dump_inst.settings());')
        self.write(f'
    @if('{funcReturn}' != 'void')
        self.write(f'    dump_html_{funcReturn}(result, settings, 0);')
    @end if
        self.write(f'    settings.stream() << "</summary>";')
        self.write(f'
        self.write(f'    if(settings.showParams())
        self.write('    {'
        @foreach parameter
        @if('{prmParameterStorage}' != '')
        self.write(f'        {prmParameterStorage}
        @end if
        @if({prmPtrLevel} == 0)
        self.write(f'        dump_html_value<const {prmBaseType}>({prmName}, settings, "{prmType}", "{prmName}", 1, dump_html_{prmTypeID});')
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' == 'None')
        self.write(f'        dump_html_pointer<const {prmBaseType}>({prmName}, settings, "{prmType}", "{prmName}", 1, dump_html_{prmTypeID});')
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' != 'None')
        self.write(f'        dump_html_array<const {prmBaseType}>({prmName}, {prmLength}, settings, "{prmType}", "{prmChildType}", "{prmName}", 1, dump_html_{prmTypeID}); // ZRZ
        @end if
        @end parameter
        self.write('    }')
        self.write(f'    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\\n";')
        self.write(f'
        self.write(f'    settings.stream() << "</details>";')
        self.write('}')
@end function


    def generate_json_header(self, video=False):

        self.write(f'#pragma once
        self.write(f'
        self.write(f'#include "api_dump.h"
        self.write(f'
@if(not {isVideoGeneration})
        self.write(f'void dump_json_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')
@end if
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_json_{unName}(const {unName}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Type Implementations ==========================//\n')
        for t in EXTERNAL_TYPES:
            self.write(f'void dump_json_{t}({t} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Basetype Implementations ========================//\n')
        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_json_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_json_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_json_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents);')
            self.write('#endif')
@end basetype
        self.write('\n//======================= System Type Implementations =======================//\n')

        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_json_{sys.name}(const {sys.type} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================== Handle Implementations =========================//\n')

        for handle in self.vk.handles.values():
            self.write(f'void dump_json_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Enum Implementations ==========================//\n')

        for enum in self.vk.enums.values():
            self.write(f'void dump_json_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================= Bitmask Implementations =========================//\n')

        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_json_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//=========================== Flag Implementations ==========================//\n')
@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_json_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents);')
@end flag

        self.write('\n//======================= Func Pointer Implementations ======================//\n')
@foreach funcpointer
        self.write(f'void dump_json_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents);')
@end funcpointer
        self.write('\n//========================== Struct Implementations =========================//\n')
        for struct in self.vk.structs.values():
            self.write(f'void dump_json_{struct.name}(const {struct.name}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//========================== Union Implementations ==========================//')
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_json_{unName}(const {unName}& object, const ApiDumpSettings& settings, int indents);')

        self.write('\n//======================== pNext Chain Implementation =======================//')
@if(not {isVideoGeneration})
        self.write(f'void dump_json_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents);')
@end if
        self.write('\n//========================= Function Implementations ========================//\n')
@foreach function where(not '{funcName}' in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_json_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams});')
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_json_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams});')
@end if
@end function

    def generate_json_implementation(self, video=False):
@if({isVideoGeneration})
        self.write(f'#pragma once
@end if
        self.write(f'
        self.write(f'#include "api_dump_json.h"
@if(not {isVideoGeneration})
        self.write(f'#include "api_dump_video_json.h"
@end if
        self.write('\n//=========================== Type Implementations ==========================//\n')
        for t in EXTERNAL_TYPES:
            self.write(f'void dump_json_{t}({t} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write(f'
        @if('{t}' != 'uint8_t' and '{t}' != 'int8_t')
                self.write(f'    settings.stream() << "\\"" << object << "\\"";')
        @end if
        @if('{t}' == 'uint8_t')
                self.write(f'    settings.stream() << "\\"" << (uint32_t) object << "\\"";')
        @end if
        @if('{t}' == 'int8_t')
                self.write(f'    settings.stream() << "\\"" << (int32_t) object << "\\"";')
        @end if
            self.write('}')

        self.write('\n//========================= Basetype Implementations ========================//\n')
        for basetype in [x for x in self.vk.basetypes.values() if x not in ['ANativeWindow', 'AHardwareBuffer', 'CAMetalLayer']]:
            self.write(f'void dump_json_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "\\"" << object << "\\"";')
            self.write('}')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['ANativeWindow', 'AHardwareBuffer']]:
            self.write('#if defined(VK_USE_PLATFORM_ANDROID_KHR)')
            self.write(f'void dump_json_{basetype.name}(const {basetype.name}* object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "\\"" << object << "\\"";')
            self.write('}')
            self.write('#endif')
        for basetype in [x for x in self.vk.basetypes.values() if x in ['CAMetalLayer']]:
            self.write('#if defined(VK_USE_PLATFORM_METAL_EXT)')
            self.write(f'void dump_json_{basetype.name}({basetype.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << "\\"" << object << "\\"";')
            self.write('}')
            self.write('#endif')

        self.write('\n//======================= System Type Implementations =======================//\n')
        for sys in self.vk.systemTypes.values():
            self.write(f'void dump_json_{sys.name}(const {sys.tpe} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            if sys.needsPointer:
                self.write('    OutputAddressJSON(settings, object);')
                self.write('    settings.stream() << "\\n";')
            else:
                self.write('''    if (settings.showAddress())
        settings.stream() << "\\"" << object << "\\"";
    else
        settings.stream() << "\\"address\\"";''')
            self.write('}')

        self.write('\n//========================== Handle Implementations =========================//\n')
        for handle in self.vk.handles.values():
            self.write(f'''void dump_json_{handle.name}(const {handle.name} object, const ApiDumpSettings& settings, int indents)
{{
    if(settings.showAddress()) {{
        settings.stream() << "\\"" << object << "\\"";
    }} else {{
        settings.stream() << "\\"address\\"";
    }}
}}''')

        self.write('\n//=========================== Enum Implementations ==========================//\n')
        for enum in self.vk.enums.values():
            self.write(f'void dump_json_{enum.name}({enum.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    switch((int64_t) object)')
            self.write('    {')
            for field in enum.fields:
                self.write(f'    case {field.valueStr}:')
                self.write(f'        settings.stream() << "\\"{field.name}\\"";')
                self.write('        break;')
        @end option
            self.write('    default:')
            self.write('        settings.stream() << "\\"UNKNOWN (" << object << ")\\"";')
            self.write('    }')
            self.write('}')

        self.write('\n//========================= Bitmask Implementations =========================//\n')
        for bitmask in self.vk.bitmasks.values():
            self.write(f'void dump_json_{bitmask.name}({bitmask.name} object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    bool is_first = true;')
            self.write('    settings.stream() << '"' << object;')
            for field in bitmask.flags:
                self.write(f'    if(object {"==" if field.multiBit else "&"} {bitmask.valueStr}) {{')
                self.write(f'        settings.stream() << (is_first ? \" (\" : \" | \") << "{field.name}"; is_first = false;')
                self.write('    }')
            self.write('    if(!is_first)
            self.write('        settings.stream() << ')';')
            self.write('    settings.stream() << "\\"";')
            self.write('}')

        self.write('\n//=========================== Flag Implementations ==========================//\n')
@foreach flag where('{flagEnum}' != 'None')
        self.write(f'void dump_json_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    dump_json_{flagEnum}(({flagEnum}) object, settings, indents);')
        self.write('}')
@end flag
@foreach flag where('{flagEnum}' == 'None')
        self.write(f'void dump_json_{flagName}({flagName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    settings.stream() << '"' << object << "\\"";')
        self.write('}')
@end flag
        self.write('\n//======================= Func Pointer Implementations ======================//\n')
@foreach funcpointer
        self.write(f'void dump_json_{pfnName}({pfnName} object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    if(settings.showAddress())
        self.write(f'       settings.stream() << "\\"" << object << "\\"";')
        self.write('    else')
        self.write(f'        settings.stream() << "\\"address\\"";')
        self.write('}')
@end funcpointer
        self.write('\n//========================== Struct Implementations =========================//\n')
@foreach struct
        self.write(f'void dump_json_{sctName}(const {sctName}& object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    settings.stream() << settings.indentation(indents) << "[\\n";')
        self.write(f'
    @foreach member
        @if('{memParameterStorage}' != '' and '{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        self.write(f'        {memParameterStorage}
        @end if
        @if('{memParameterStorage}' != '' and '{memCondition}' == 'None')
        self.write(f'    {memParameterStorage}
        @end if
    @end member
        self.write(f'
    @foreach member
        @if({memIndex} != 0)
        self.write(f'    settings.stream() << ",\\n";')
        @end if
        @if('{memCondition}' != 'None')
        self.write(f'    if({memCondition})
        @end if
        @if({memPtrLevel} == 0)
            @if('{memName}' != 'pNext')
                @if('{memName}' == 'apiVersion')
        self.write(f'    dump_json_value<const {memBaseType}>(object.{memName}, NULL, settings, "{memType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, OutputApiVersionJSON);')
                @end if
                @if('{memName}' != 'apiVersion')
        self.write(f'    dump_json_value<const {memBaseType}>(object.{memName}, NULL, settings, "{memType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID});')
                @end if
            @end if
            @if('{memName}' == 'pNext')
        self.write(f'    if(object.pNext != nullptr){{')
        self.write(f'        dump_json_pNext_trampoline(object.{memName}, settings, indents + 1);')
        self.write('    } else {')
        self.write(f'        dump_json_value<const {memBaseType}>(object.{memName}, object.{memName}, settings, "{memType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID});')
        self.write('    }')
            @end if
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' == 'None')
        self.write(f'    dump_json_pointer<const {memBaseType}>(object.{memName}, settings, "{memType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID});')
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and not {memLengthIsMember})
        self.write(f'    dump_json_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID}); // IQA')
        @end if
        @if({memPtrLevel} == 1 and '{memLength}' != 'None' and {memLengthIsMember} and '{memName}' != 'pCode')
            @if('{memLength}'[0].isdigit() or '{memLength}'[0].isupper())
        self.write(f'    dump_json_array<const {memBaseType}>(object.{memName}, {memLength}, settings, "{memType}", "{memChildType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID}); // JQA')
            @end if
            @if(not ('{memLength}'[0].isdigit() or '{memLength}'[0].isupper()))
                @if('{memLength}' == 'rasterizationSamples')
        self.write(f'    dump_json_array<const {memBaseType}>(object.{memName}, (object.{memLength} + 31) / 32, settings, "{memType}", "{memChildType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID}); // JQA')
                @end if
                @if('{memLength}' != 'rasterizationSamples')
        self.write(f'    dump_json_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID}); // JQA')
                @end if
            @end if
        @end if
        @if('{sctName}' == 'VkShaderModuleCreateInfo')
            @if('{memName}' == 'pCode')
        self.write(f'    if(settings.showShader())
        self.write(f'        dump_json_array<const {memBaseType}>(object.{memName}, object.{memLength}, settings, "{memType}", "{memChildType}", "{memName}", {memIsStruct}, {memIsUnion}, indents + 1, dump_json_{memTypeID}); // KQA')
        self.write('    else')
        self.write(f'        dump_json_special("SHADER DATA", settings, "{memType}", "{memName}", indents + 1);')
            @end if
        @end if
        self.write(f'
        @if('{memCondition}' != 'None')
        self.write('    else')
        self.write(f'        dump_json_UNUSED(settings, "{memType}", "{memName}", indents + 1);')
        @end if
    @end member
        self.write(f'    settings.stream() << "\\n" << settings.indentation(indents) << "]";')
        self.write('}')
@end struct
        self.write('\n//========================== Union Implementations ==========================//')
        for union in [ x for x in self.vk.structs.values() if x.union ]:
            self.write(f'void dump_json_{unName}(const {unName}& object, const ApiDumpSettings& settings, int indents)')
            self.write('{')
            self.write('    settings.stream() << settings.indentation(indents) << "[\\n";\n')
            for member in union.members:
                if union.name in VALIDITY_CHECKS and member.name in VALIDITY_CHECKS[union.name]:
                    self.write(f'    if({chcCondition})
                @if({chcIndex} != 0 and '{chcCondition}' == 'None')
                    self.write(f'    settings.stream() << ",\\n"; // Only need commas when more than one field is printed')
                @end if
                @if({chcPtrLevel} == 0)
                    self.write(f'    dump_json_value<const {chcBaseType}>(object.{chcName}, NULL, settings, "{chcType}", "{chcName}", {chcIsStruct}, {chcIsUnion}, indents + 2, dump_json_{chcTypeID});')
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' == 'None')
                    self.write(f'    dump_json_pointer<const {chcBaseType}>(object.{chcName}, settings, "{chcType}", "{chcName}", {chcIsStruct}, {chcIsUnion}, indents + 2, dump_json_{chcTypeID});')
                @end if
                @if({chcPtrLevel} == 1 and '{chcLength}' != 'None')
                    self.write(f'    dump_json_array<const {chcBaseType}>(object.{chcName}, {chcLength}, settings, "{chcType}", "{chcChildType}", "{chcName}", {chcIsStruct}, {chcIsUnion}, indents + 2, dump_json_{chcTypeID}); // OQA')
                @end if
            self.write('\n    settings.stream() << "\\n" << settings.indentation(indents) << "]";')
            self.write('}')

        self.write('\n//======================== pNext Chain Implementation =======================//')
@if(not {isVideoGeneration})
        self.write(f'void dump_json_pNext_trampoline(const void* object, const ApiDumpSettings& settings, int indents)')
        self.write('{')
        self.write(f'    switch((int64_t) (static_cast<const VkBaseInStructure*>(object)->sType)) {{')
    @foreach struct
        @if({sctStructureTypeIndex} != -1)
        self.write(f'    case {sctStructureTypeIndex}:')
        self.write(f'        dump_json_pNext<const {sctName}>(static_cast<const {sctName}*>(object), settings, "{sctName}", indents, dump_json_{sctName});')
        self.write(f'        break;')
        @end if
    @end struct
        self.write(f'
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: // 47')
        self.write(f'    case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: // 48')
        self.write(f'        if(static_cast<const VkBaseInStructure*>(object)->pNext != nullptr){{')
        self.write(f'            dump_json_pNext_trampoline(static_cast<const void*>(static_cast<const VkBaseInStructure*>(object)->pNext), settings, indents);')
        self.write('        } else {')
        self.write(f'            settings.stream() << settings.indentation(indents) << "{{\\n";')
        self.write(f'            settings.stream() << settings.indentation(indents + 1) << "\\"type\\" : \\"const void*\\",\\n";')
        self.write(f'            settings.stream() << settings.indentation(indents + 1) << "\\"name\\" : \\"pNext\\",\\n";')
        self.write(f'            settings.stream() << settings.indentation(indents + 1) << "\\"value\\" : \\"NULL\\"\\n";')
        self.write(f'            settings.stream() << settings.indentation(indents) << "}}";')
        self.write(        '}')
        self.write(f'        break;')
        self.write(f'    default:')
        self.write(f'        settings.stream() << settings.indentation(indents) << "{{\\n";')
        self.write(f'        settings.stream() << settings.indentation(indents + 1) << "\\"type\\" : \\"const void*\\",\\n";')
        self.write(f'        settings.stream() << settings.indentation(indents + 1) << "\\"name\\" : \\"pNext\\",\\n";')
        self.write(f'        settings.stream() << settings.indentation(indents + 1) << "\\"value\\" : \\"UNKNOWN (" << (int64_t) (static_cast<const VkBaseInStructure*>(object)->sType) << ")\\"\\n";')
        self.write(f'        settings.stream() << settings.indentation(indents) << "}}";')
        self.write('    }')
        self.write('}')
@end if
self.write('\n//========================= Function Implementations ========================//\n')
@foreach function where(not '{funcName}' in ['vkGetDeviceProcAddr', 'vkGetInstanceProcAddr'])
@if('{funcReturn}' != 'void')
        self.write(f'void dump_json_{funcName}(ApiDumpInstance& dump_inst, {funcReturn} result, {funcTypedParams})
@end if
@if('{funcReturn}' == 'void')
        self.write(f'void dump_json_{funcName}(ApiDumpInstance& dump_inst, {funcTypedParams})
@end if
        self.write('{')
        self.write(f'    const ApiDumpSettings& settings(dump_inst.settings());')
        self.write(f'
    @if('{funcReturn}' != 'void')
        self.write(f'    settings.stream() << settings.indentation(3) << "\\\"returnValue\\\" : ";')
        self.write(f'    dump_json_{funcReturn}(result, settings, 0);')
        self.write(f'    if(settings.showParams())
        self.write(f'        settings.stream() << ",";')
        self.write(f'    settings.stream() << "\\n";')
    @end if
        self.write(f'
        self.write(f'    // Display parameter values
        self.write(f'    if(settings.showParams())
        self.write('    {'
        self.write(f'        settings.stream() << settings.indentation(3) << "\\\"args\\\" :\\n";')
        self.write(f'        settings.stream() << settings.indentation(3) << "[\\n";')
        self.write(f'
        @foreach parameter
        @if({prmIndex} != 0)
        self.write(f'        settings.stream() << ",\\n";')
        @end if
        @if('{prmParameterStorage}' != '')
        self.write(f'        {prmParameterStorage}
        @end if
        @if({prmPtrLevel} == 0)
        self.write(f'        dump_json_value<const {prmBaseType}>({prmName}, NULL, settings, "{prmType}", "{prmName}", {prmIsStruct}, {prmIsUnion}, 4, dump_json_{prmTypeID});')
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' == 'None')
        self.write(f'        dump_json_pointer<const {prmBaseType}>({prmName}, settings, "{prmType}", "{prmName}", {prmIsStruct}, {prmIsUnion}, 4, dump_json_{prmTypeID});')
        @end if
        @if({prmPtrLevel} == 1 and '{prmLength}' != 'None')
        self.write(f'        dump_json_array<const {prmBaseType}>({prmName}, {prmLength}, settings, "{prmType}", "{prmChildType}", "{prmName}", {prmIsStruct}, {prmIsUnion}, 4, dump_json_{prmTypeID}); // PQA
        @end if
        @end parameter
        self.write(f'
        self.write(f'        settings.stream() << "\\n" << settings.indentation(3) << "]\\n";')
        self.write('    }')
        self.write(f'    settings.stream() << settings.indentation(2) << "}}";')
        self.write(f'    if (settings.shouldFlush()) settings.stream().flush();')
        self.write('}')
@end function

