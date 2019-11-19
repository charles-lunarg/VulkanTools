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

#include <QDir>
#include <QGroupBox>
#include <QListWidget>
#include <QPushButton>
#include <QSplitter>
#include <QAction>
#include <QTableWidget>
#include <QVector>
#include <QStringList>
#include <QStringListModel>

#include "layer_manifest.h"

struct ApplicationEntry {
    QString app_name;
    QDir dir_path;
};

class ApplicationSettingsWidget : public QGroupBox {
    Q_OBJECT
   public:
    ApplicationSettingsWidget(QWidget *parent = NULL);

    QVector<ApplicationEntry> applicationEntries() const;
    const QStringList application_names() const;

    QAbstractItemModel *get_string_list_model() const { return application_table->model(); }

    QDir get_application_dir(QString app_name) const;

   signals:
    void applicationListChanged(const QVector<ApplicationEntry> &path_list);

   private slots:
    void addApplicationLayer();
    void removeApplicationLayer();
    void clearApplicationLayers();
    void changedItem();

   private:
    int addNewLayer(QString name, QString path);
    void addGlobalLayer();

    QTableWidget *application_table;

    QPushButton *add_button;
    QPushButton *remove_button;
    QPushButton *clear_button;
};