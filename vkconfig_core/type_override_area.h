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

#pragma once

enum OverrideArea {
    OVERRIDE_AREA_NONE = 0,
    OVERRIDE_AREA_LOADER_SETTINGS_BIT = (1 << 0),
    OVERRIDE_AREA_LAYERS_SETTINGS_BIT = (1 << 1),
    OVERRIDE_AREA_ALL = OVERRIDE_AREA_LOADER_SETTINGS_BIT | OVERRIDE_AREA_LAYERS_SETTINGS_BIT,

    OVERRIDE_DRIVER = (1 << 31)
};
