/*
 * Copyright (c) 2020-2021 Valve Corporation
 * Copyright (c) 2020-2021 LunarG, Inc.
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

#pragma once

#include "type_platform.h"
#include "layer.h"

#if VKC_ENV == VKC_ENV_WIN32

#include <QString>

#include <vector>

void AppendRegistryEntriesForLayers(QString override_file, QString settings_file);

void RemoveRegistryEntriesForLayers();

std::vector<LayersPathInfo> LoadRegistrySystemLayers(const char* path);

std::vector<LayersPathInfo> LoadRegistrySoftwareLayers(const char* path, LayerType type);

#endif  // VKC_ENV == VKC_ENV_WIN32
