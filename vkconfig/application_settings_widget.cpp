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

#include "application_settings_widget.h"

#include <QBoxLayout>
#include <QDialogButtonBox>

ApplicationSettingsWidget::ApplicationSettingsWidget(QWidget *parent)
: QGroupBox(tr("Application Override"), parent)
{
    setTitle("Application Override Settings");

    QHBoxLayout * layout = new QHBoxLayout();

    application_list = new QListWidget();
    layout->addWidget(application_list);

    QVBoxLayout *button_layout = new QVBoxLayout();
    
    add_button = new QPushButton("new");
    delete_button = new QPushButton("delete");

    button_layout->addWidget(add_button);
    button_layout->addWidget(delete_button);

    layout->addLayout(button_layout);

    setLayout(layout);
}