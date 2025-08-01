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

#include "type_hide_message.h"
#include "bitfield.h"
#include "util.h"

#include <array>
#include <cstring>

const char* GetToken(HideMessageType value) {
    static const char* TOKENS[]{"HIDE_MESSAGE_NEED_APPLICATION_RESTART",
                                "HIDE_MESSAGE_USE_SYSTEM_TRAY",
                                "HIDE_MESSAGE_CRITICAL_IMPLICIT_LAYER_OVERRIDE",
                                "HIDE_MESSAGE_WIDGET_SETTING_FLOAT",
                                "HIDE_MESSAGE_WIDGET_SETTING_INT",
                                "HIDE_MESSAGE_WIDGET_SETTING_FRAMES",
                                "HIDE_MESSAGE_NOTIFICATION_LAYERS_LOADED",
                                "HIDE_MESSAGE_NOTIFICATION_EXECUTABLE_ALL",
                                "HIDE_MESSAGE_NOTIFICATION_EXECUTABLE_PER",
                                "HIDE_MESSAGE_NOTIFICATION_PER_CONFIG_UPDATE",
                                "HIDE_MESSAGE_WARN_REMOVE_EXECUTABLE",
                                "HIDE_MESSAGE_WARN_REMOVE_EXECUTABLE_OPTIONS",
                                "HIDE_MESSAGE_WARN_MISSING_LAYERS_IGNORE",
                                "HIDE_MESSAGE_WARN_CORE_SHADER_IGNORE",
                                "HIDE_MESSAGE_WARN_OVERRIDE_LAYERS_SETTINGS",
                                "HIDE_MESSAGE_WARN_OVERRIDE_LAYERS_SETTINGS_HIDE",
                                "HIDE_MESSAGE_WARN_DARK_THEME_LINUX",
                                "HIDE_MESSAGE_WARN_DARK_THEME_ICON",
                                "HIDE_MESSAGE_QUESTION_REMOVING_LAYERS_PATH",
                                "HIDE_MESSAGE_QUESTION_REMOVING_DRIVER_PATH",
                                "HIDE_MESSAGE_ERROR_32BIT"};
    static_assert(std::size(TOKENS) == HIDE_MESSAGE_COUNT);

    if (value >= HIDE_MESSAGE_FIRST && value <= HIDE_MESSAGE_LAST) {
        return TOKENS[value - HIDE_MESSAGE_FIRST];
    } else {
        return nullptr;  // for HIDE_MESSAGE_INVALID
    }
}

HideMessageType GetHideMessageType(const char* token) {
    for (int i = HIDE_MESSAGE_FIRST, l = HIDE_MESSAGE_LAST; i <= l; ++i) {
        const HideMessageType value = static_cast<HideMessageType>(i);
        if (std::strcmp(::GetToken(value), token) == 0) {
            return value;
        }
    }

    return HIDE_MESSAGE_INVALID;
}

const char* GetToken(HideMessageBit bit) { return GetToken(GetValue(bit)); }

HideMessageBit GetHideMessageBit(const char* token) {
    const HideMessageType value = GetHideMessageType(token);
    if (value >= HIDE_MESSAGE_FIRST && value <= HIDE_MESSAGE_LAST) {
        return static_cast<HideMessageBit>(1 << (value - HIDE_MESSAGE_FIRST));
    } else {
        return static_cast<HideMessageBit>(0);
    }
}

HideMessageBit GetBit(HideMessageType value) {
    if (value >= HIDE_MESSAGE_FIRST && value <= HIDE_MESSAGE_LAST) {
        const int bit = GetBit(value, HIDE_MESSAGE_FIRST);
        return static_cast<HideMessageBit>(bit);
    } else {
        return static_cast<HideMessageBit>(0);
    }
}

HideMessageType GetValue(HideMessageBit bit) {
    const HideMessageType value = GetValue(bit, HIDE_MESSAGE_FIRST);
    if (value >= HIDE_MESSAGE_FIRST && value <= HIDE_MESSAGE_LAST) {
        return value;
    } else {
        return HIDE_MESSAGE_INVALID;
    }
}

HideMessageFlags GetHideMessageFlags(const std::vector<std::string>& tokens) {
    HideMessageFlags flags = 0;

    for (std::size_t i = 0, n = tokens.size(); i < n; ++i) {
        const HideMessageType value = GetHideMessageType(tokens[i].c_str());
        if (value == HIDE_MESSAGE_INVALID) {
            continue;
        }
        flags |= GetBit(value);
    }

    return flags;
}

std::vector<std::string> GetHideMessageTokens(HideMessageFlags flags) {
    std::vector<std::string> result;

    for (std::size_t i = HIDE_MESSAGE_FIRST, l = HIDE_MESSAGE_LAST; i <= l; ++i) {
        HideMessageType value = static_cast<HideMessageType>(i);
        if (flags & GetBit(value)) {
            result.push_back(GetToken(value));
        }
    }

    return result;
}

HideMessageFlags GetHideMessageFlags(const std::string& string) {
    std::vector<std::string> tokens = Split(string, ",");
    return GetHideMessageFlags(tokens);
}

std::string GetHideMessageString(HideMessageFlags flags) {
    std::vector<std::string> tokens = GetHideMessageTokens(flags);
    return Merge(tokens, ",");
}
