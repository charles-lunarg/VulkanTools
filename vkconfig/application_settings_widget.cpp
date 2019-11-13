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
#include <QFileDialog>
#include <QMessageBox>

#include <QDialogButtonBox>

ApplicationSettingsWidget::ApplicationSettingsWidget(QWidget *parent)
: QGroupBox(tr("Application Override"), parent)
{
    setTitle("Application Override Settings");

    QHBoxLayout * layout = new QHBoxLayout();

    application_list = new QListWidget();
    layout->addWidget(application_list);

    QVBoxLayout *button_layout = new QVBoxLayout();
    
    add_button = new QPushButton("New");
    connect(add_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::addApplicationLayer);
    remove_button = new QPushButton("Remove");
    connect(remove_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::removeApplicationLayer);
    clear_button = new QPushButton("Clear");
    connect(clear_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::clearApplicationLayers);


    button_layout->addWidget(add_button);
    button_layout->addWidget(remove_button);
    button_layout->addWidget(clear_button);
    button_layout->addStretch();

    layout->addLayout(button_layout);

    setLayout(layout);

    QDir dir("n/a");
    ApplicationEntry app_entry = {"global" , dir};
    entries.append(app_entry);
    QListWidgetItem *item = new QListWidgetItem();
    item->setText(app_entry.app_name + ": \"" + app_entry.dir_path.path() + "\"");
    application_list->addItem(item);

}

void ApplicationSettingsWidget::addApplicationLayer(){
    QString path = QFileDialog::getOpenFileName(this, tr("Application Directory"), QDir::homePath());
    if (path == "") {
        return;
    }
    QDir new_path(path);
    for (const auto& location : entries) {
        if (QDir(location.dir_path) == new_path) {
            return;
        }
    }
    ApplicationEntry app_entry = {new_path.dirName() ,new_path};
    entries.append(app_entry);
    QListWidgetItem *item = new QListWidgetItem();
    item->setText(app_entry.app_name + ": \"" + app_entry.dir_path.path() + "\"");
    application_list->addItem(item);

    emit applicationListChanged(applicationEntries());
}
void ApplicationSettingsWidget::removeApplicationLayer(){

    auto items_to_remove = application_list->selectedItems();
    
    emit applicationListChanged(applicationEntries());
}
void ApplicationSettingsWidget::clearApplicationLayers(){


    emit applicationListChanged(applicationEntries());
}