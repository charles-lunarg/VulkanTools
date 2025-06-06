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

#include "../vkconfig_core/parameter.h"

#include "ui_mainwindow.h"

#include <QListWidgetItem>
#include <QLabel>
#include <QCheckBox>
#include <QComboBox>
#include <QResizeEvent>

#include <memory>

class TabConfigurations;

class ConfigurationLayerWidget : public QLabel {
    Q_OBJECT

   public:
    ConfigurationLayerWidget(TabConfigurations *tab, const Parameter &parameter);

    std::string layer_name;

   protected:
    bool eventFilter(QObject *target, QEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

   public Q_SLOTS:
    void on_layer_state_currentIndexChanged(int index);
    void on_layer_remove_pressed();

   Q_SIGNALS:
    void itemChanged();

   private:
    TabConfigurations *tab;

    QComboBox *layer_state = nullptr;
    QPushButton *layer_remove = nullptr;
};
