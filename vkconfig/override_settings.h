/*
 * Copyright (c) 2018-2019 Valve Corporation
 * Copyright (c) 2018-2019 LunarG, Inc.
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
 * Author: Lenny Komow <lenny@lunarg.com>
 */

#pragma once

#include <QHash>
#include <QList>
#include <QString>

#include "layer_manifest.h"

struct ApplicationLayer {
    QList<QString> enabled_layers;
    QList<QString> disabled_layers;
    QHash<QString, QHash<QString, QString>> layer_settings;
};

struct OverrideLayer {
    QList<QPair<QString, LayerType>> paths;
    QList<LayerManifest> enabled_layers;
    QList<LayerManifest> disabled_layers;
    int expiration;
};

// Add a Paths() method?
class OverrideSettings {
   public:
    OverrideSettings();
    void ClearLayers();
    void ClearSettings();

    void AddApplication(QString application);
    void RemoveApplication(QString application);

    QList<QString> DisabledLayers(QString application) const;
    QList<QString> EnabledLayers(QString application) const;
    QHash<QString, QHash<QString, QString>> LayerSettings(QString application) const;

    void SetDisabledLayers(QString application, const QList<QString> &disabled_layers);
    void SetEnabledLayers(QString application, const QList<QString> &enabled_layers);
    void SetLayerSettings(QString application, const QHash<QString, QHash<QString, QString>> &settings);

    bool SaveLayers(QList<OverrideLayer> layers);
    bool SaveSettings(QString app, const QHash<QString, QHash<QString, LayerValue>> &settings);

   private:
    void addLayer(const QJsonValue &layer);
    QJsonObject toJsonLayer(const OverrideLayer &override_layer);

    QString LayerFile(bool create_path) const;
    QString LayerSettingsFile(bool create_path) const;

    QHash<QString, ApplicationLayer> application_layers;
};
