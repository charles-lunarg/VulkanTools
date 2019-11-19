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
#include <QTableWidgetItem>
#include <QMessageBox>

#include <QDialogButtonBox>

ApplicationSettingsWidget::ApplicationSettingsWidget(QWidget *parent) : QGroupBox(tr("Application Override"), parent) {
    setTitle("Application Override Settings");

    QHBoxLayout *layout = new QHBoxLayout();

    application_table = new QTableWidget(0, 2);
    application_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
    application_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    application_table->setColumnWidth(0, 150);
    application_table->setColumnWidth(1, 200);
    application_table->setHorizontalHeaderLabels({"Name", "Directory to override"});
    layout->addWidget(application_table);

    addGlobalLayer();

    connect(application_table, &QTableWidget::itemChanged, this, &ApplicationSettingsWidget::changedItem);

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
}
void ApplicationSettingsWidget::AddApplication(QString app_name, QDir dir_path) { addNewLayer(app_name, dir_path); }

void ApplicationSettingsWidget::addApplicationLayer() {
    QString path = QFileDialog::getOpenFileName(this, tr("Application Directory"), QDir::homePath());
    if (path == "") {
        return;
    }
    QDir new_path(path);
    for (int row = 0; row < application_table->rowCount(); row++) {
        if (application_table->item(row, 1)->text() == new_path.path()) {
            return;
        }
    }

    QString appName = new_path.dirName();
    new_path.cdUp();
    addNewLayer(appName, new_path.path());

    emit applicationListChanged(applicationEntries());
}
void ApplicationSettingsWidget::changedItem() { emit applicationListChanged(applicationEntries()); }

void ApplicationSettingsWidget::removeApplicationLayer() {
    int row = -1;

    for (auto &item : application_table->selectedItems()) {
        row = item->row();
    }
    // no row selected or if the global layer is selected
    if (row > 0) {
        application_table->removeRow(row);
    }

    emit applicationListChanged(applicationEntries());
}

void ApplicationSettingsWidget::clearApplicationLayers() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm clear", "Are you sure you want to clear all application overrides?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        application_table->setRowCount(1);
    }

    emit applicationListChanged(applicationEntries());
}

int ApplicationSettingsWidget::addNewLayer(QString name, QDir path) {
    int new_row = application_table->rowCount();
    application_table->insertRow(new_row);
    application_table->setItem(new_row, 0, new QTableWidgetItem());
    application_table->setItem(new_row, 1, new QTableWidgetItem());
    auto item_name = application_table->item(new_row, 0);
    auto item_dir = application_table->item(new_row, 1);
    item_name->setText(name);
    item_dir->setText(path.path());
    return new_row;
}

void ApplicationSettingsWidget::addGlobalLayer() {
    int row = addNewLayer(global_layer_name, QDir());
    application_table->item(row, 0)->setFlags(application_table->item(row, 0)->flags() ^ Qt::ItemIsEditable);
    application_table->item(row, 1)->setFlags(application_table->item(row, 1)->flags() ^ Qt::ItemIsEditable);
}

const QStringList ApplicationSettingsWidget::application_names() const {
    QStringList names;
    for (int row = 0; row < application_table->rowCount(); row++) {
        names.push_back(application_table->item(row, 0)->text());
    }
    return names;
}

QList<ApplicationEntry> ApplicationSettingsWidget::applicationEntries() const {
    QList<ApplicationEntry> v_entries;
    for (int row = 0; row < application_table->rowCount(); row++) {
        if (application_table->item(row, 0) != nullptr && application_table->item(row, 1) != nullptr)
            v_entries.push_back({application_table->item(row, 0)->text(), application_table->item(row, 1)->text()});
    }
    return v_entries;
}

QDir ApplicationSettingsWidget::get_application_dir(QString app_name) const {
    for (int row = 0; row < application_table->rowCount(); row++) {
        if (application_table->item(row, 0)->text() == app_name) {
            return application_table->item(row, 1)->text();
        }
    }
    return QDir();
}