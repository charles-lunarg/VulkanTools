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

ApplicationSettingsWidget::ApplicationSettingsWidget(QWidget *parent) : QGroupBox(tr("Application Override"), parent) {
    setTitle("Application Override Settings");

    QHBoxLayout *layout = new QHBoxLayout();

    application_list = new QListWidget();
    layout->addWidget(application_list);

    QVBoxLayout *button_layout = new QVBoxLayout();

    add_button = new QPushButton("New");
    connect(add_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::addApplicationLayer);
    edit_button = new QPushButton("Edit");
    connect(edit_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::editSelectedApplication);
    remove_button = new QPushButton("Remove");
    connect(remove_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::removeApplicationLayer);
    clear_button = new QPushButton("Clear");
    connect(clear_button, &QPushButton::clicked, this, &ApplicationSettingsWidget::clearApplicationLayers);

    button_layout->addWidget(add_button);
    button_layout->addWidget(edit_button);
    button_layout->addWidget(remove_button);
    button_layout->addWidget(clear_button);
    button_layout->addStretch();

    layout->addLayout(button_layout);

    setLayout(layout);

    addNewLayer(global_layer_name, QDir());
}

void ApplicationSettingsWidget::addApplicationLayer() {
    QString path = QFileDialog::getOpenFileName(this, tr("Application Directory"), QDir::homePath());
    if (path == "") {
        return;
    }
    QDir new_path(path);
    for (const auto &location : entries) {
        if (QDir(location.dir_path) == new_path) {
            return;
        }
    }
    addNewLayer(new_path.dirName(), new_path);

    emit applicationListChanged(applicationEntries());
}
void ApplicationSettingsWidget::editSelectedApplication() {
    QDialog edit_box;
    edit_box.setObjectName("TODO: make names editable");

    emit applicationListChanged(applicationEntries());
}

void ApplicationSettingsWidget::removeApplicationLayer() {
    for (auto &item : application_list->selectedItems()) {
        if (item->text() == global_layer_name) continue;

        for (int i = 0; i < entries.size(); i++) {
            if (entries[i].app_name == item->text()) {
                entries.removeAt(i);
            }
        }
        delete application_list->takeItem(application_list->row(item));
    }

    emit applicationListChanged(applicationEntries());
}

void ApplicationSettingsWidget::clearApplicationLayers() {
    entries.clear();
    application_list->clear();
    addNewLayer(global_layer_name, QDir());
    emit applicationListChanged(applicationEntries());
}

void ApplicationSettingsWidget::addNewLayer(QString name, QDir path) {
    ApplicationEntry app_entry = {name, path};
    entries.append(app_entry);
    QListWidgetItem *item = new QListWidgetItem();
    item->setText(app_entry.app_name);
    application_list->addItem(item);
}

const QStringList ApplicationSettingsWidget::application_names() const {
    QStringList names;
    for (auto &app : entries) {
        names.push_back(app.app_name);
    }
    return names;
}
