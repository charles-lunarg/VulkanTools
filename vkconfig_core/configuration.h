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
 * - Richard S. Wright Jr. <richard@lunarg.com>
 * - Christophe Riccio <christophe@lunarg.com>
 */

#pragma once

#include "parameter.h"
#include "type_log.h"

#include <QByteArray>

#include <vector>
#include <string>

#define DEFAULT_PHYSICAL_DEVICE "Default Physical Device"

class LayerManager;

class Configuration {
   public:
    static Configuration CreateDisabled(const LayerManager& layers);
    static Configuration Create(const LayerManager& layers, const std::string& configuration_key);

    bool Load(const Path& full_path, const LayerManager& layers);
    bool Save(const Path& full_path, bool export_mode = false) const;
    void Reset(const LayerManager& layers);

    Parameter* Find(const std::string& layer_key);
    const Parameter* Find(const std::string& layer_key) const;
    std::size_t Size() const { return this->parameters.size(); };

    Parameter* GetActiveParameter();
    const Parameter* GetActiveParameter() const;

    bool HasMissingLayer(const LayerManager& layers, std::vector<std::string>& missing_layers) const;
    void RemoveParameter(const std::string& layer_key);
    void SwitchLayerVersion(const LayerManager& layers, const std::string& layer_key, const Path& manifest_path);
    void SwitchLayerLatest(const LayerManager& layers, const std::string& layer_key);
    void GatherParameters(const LayerManager& layers);
    void Reorder(const std::vector<std::string>& layer_names);

    bool HasMultipleActiveParameter() const;

    std::string key = "New Configuration";  // User readable display of the configuration name (may contain spaces)
    int version = 1;
    int platform_flags = PLATFORM_DESKTOP_BIT;
    LayerControl default_control = LAYER_CONTROL_AUTO;
    bool override_settings = false;
    Path override_settings_path;
    bool override_layers = true;
    std::string selected_layer_name;
    bool override_driver = false;
    std::string override_driver_name = DEFAULT_PHYSICAL_DEVICE;
    bool override_loader = true;
    int loader_log_messages_flags = GetBit(LOG_ERROR);

    std::vector<Parameter> parameters;

    bool IsDefault() const;
};

std::string MakeConfigurationName(const std::vector<Configuration>& configurations, const std::string& configuration_name);
