/*
 * Copyright (c) 2018 Valve Corporation
 * Copyright (c) 2018 LunarG, Inc.
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
 * Author: Charles Giessen <charles@lunarg.com>
 */

#pragma once

#include <QGroupBox>
#include <QListWidget>
#include <QPushButton>
#include <QSplitter>

class ApplicationSettingsWidget : public QGroupBox {
    Q_OBJECT
public:
    ApplicationSettingsWidget(QWidget *parent = NULL);

protected:
    void addApplicationLayer();
    void deleteApplicationLayer();

private:
    QListWidget *application_list;

    QPushButton *add_button;
    QPushButton *delete_button;
};