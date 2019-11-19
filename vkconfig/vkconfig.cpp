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

#include "vkconfig.h"

#include <QApplication>
#include <QBoxLayout>
#include <QFile>

#if !defined(NO_HTML)
#include <QWebEngineView>
#endif

int main(int argc, char **argv) {
    QCoreApplication::setOrganizationName("LunarG");
    QCoreApplication::setOrganizationDomain("lunarg.com");
    QCoreApplication::setApplicationName("vkconfig");

    QApplication app(argc, argv);
    LayerManager manager;
    manager.show();
    return app.exec();
}

LayerManager::LayerManager() {
    setWindowIcon(QPixmap(":/layermgr/icons/logo_square.png"));
    setWindowTitle(tr("Vulkan Configuration Tool"));

    QWidget *center_widget = new QWidget();
    QVBoxLayout *center_layout = new QVBoxLayout();

    QTabWidget *tab_widget = new QTabWidget();

    // Run vulkaninfo and display its output on a tab
#if !defined(NO_HTML)
    QProcess *vulkan_info = new QProcess(this);
    vulkan_info->setProgram("vulkaninfo");
    vulkan_info->setArguments(QStringList() << "--html");
    vulkan_info->setWorkingDirectory(QDir::temp().path());
    tab_widget->addTab(showHtml(vulkan_info, "Vulkan Info", "vulkaninfo.html"), tr("Vulkan Info"));
#endif

    // Build the layer manager
    QWidget *layer_widget = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout();
    outer_split = new QSplitter(Qt::Horizontal);
    inner_split = new QSplitter(Qt::Vertical);
    inner_right_split = new QSplitter(Qt::Vertical);

    locations = new LayerLocationsWidget();
    inner_split->addWidget(locations);
    active_layers = new ActiveLayersWidget();
    inner_split->addWidget(active_layers);

    outer_split->addWidget(inner_split);

    QWidget *right_widget = new QWidget();
    QVBoxLayout *right_layout = new QVBoxLayout();
    QLabel *logo_widget = new QLabel();
    logo_widget->setPixmap(QPixmap(":/layermgr/icons/lunarg_logo.png"));
    right_layout->addWidget(logo_widget, 0, Qt::AlignRight | Qt::AlignTop);
    applications = new ApplicationSettingsWidget();
    right_layout->addWidget(applications);

    right_widget->setLayout(right_layout);
    inner_right_split->addWidget(right_widget);

    layer_settings = new LayerSettingsWidget();
    inner_right_split->addWidget(layer_settings);
    outer_split->addWidget(inner_right_split);

    connect(locations, &LayerLocationsWidget::pathsChanged, active_layers, &ActiveLayersWidget::updateAvailableLayers);
    connect(active_layers, &ActiveLayersWidget::enabledLayersUpdated, layer_settings, &LayerSettingsWidget::updateAvailableLayers);

    layout->addWidget(outer_split, 1);

    layer_widget->setLayout(layout);
    tab_widget->addTab(layer_widget, tr("Layer Manager"));

    // Run via and display its output on a tab
#if !defined(NO_HTML)
    QProcess *via = new QProcess(this);
    via->setProgram("vkvia");
    via->setArguments(QStringList() << "--disable_cube_tests"
                                    << "--output_path" << QDir::temp().path());
    tab_widget->addTab(showHtml(via, "VIA", "vkvia.html"), tr("Installation Analyzer"));
#endif

    connect(tab_widget, &QTabWidget::currentChanged, this, &LayerManager::tabChanged);
    center_layout->addWidget(tab_widget, 1);

    QHBoxLayout *button_layout = new QHBoxLayout();
    save_button = new QPushButton(tr("Save"));
    save_button->setToolTip(tr("Save current layers and settings"));
    button_layout->addWidget(save_button, 0);
    save_all_button = new QPushButton(tr("Save All"));
    save_all_button->setToolTip(tr("Save all layers and settings"));
    button_layout->addWidget(save_all_button, 0);
    restore_button = new QPushButton(tr("Restore"));
    restore_button->setToolTip(tr("Restore to last saved state"));
    button_layout->addWidget(restore_button, 0);
    clear_button = new QPushButton(tr("Clear"));
    clear_button->setToolTip(tr("Clear current saved layers and settings"));
    button_layout->addWidget(clear_button, 0);
    clear_all_button = new QPushButton(tr("Clear All"));
    clear_all_button->setToolTip(tr("Clear all saved layers and settings"));
    button_layout->addWidget(clear_all_button, 0);

    active_combo_label = new QLabel();
    active_combo_label->setText("Active Override Layer:");
    button_layout->addWidget(active_combo_label);

    active_combo_box = new QComboBox();
    active_combo_box->addItems(applications->application_names());
    button_layout->addWidget(active_combo_box);
    active_combo_label->setBuddy(active_combo_box);
    active_combo_box->setModel(applications->get_string_list_model());

#if !defined(NO_HTML)
    save_button->setEnabled(false);
    restore_button->setEnabled(false);
    clear_button->setEnabled(false);
    active_combo_label->setEnabled(false);
    active_combo_box->setEnabled(false);
    save_all_button->setEnabled(false);
    clear_all_button->setEnabled(false);
#endif

    button_layout->addSpacing(24);
    notification_label = new QLabel("");
    notification_base_color = notification_label->palette().color(QPalette::WindowText);
    connect(&notification_timer, &QTimer::timeout, this, &LayerManager::timerUpdate);
    button_layout->addWidget(notification_label);
    button_layout->addStretch(1);

    QPushButton *exit_button = new QPushButton(tr("Exit"));
    button_layout->addWidget(exit_button, 0);

    connect(save_button, &QPushButton::clicked, this, &LayerManager::save);
    connect(save_all_button, &QPushButton::clicked, this, &LayerManager::saveAll);
    connect(restore_button, &QPushButton::clicked, this, &LayerManager::restore);
    connect(clear_button, &QPushButton::clicked, this, &LayerManager::clear);
    connect(clear_all_button, &QPushButton::clicked, this, &LayerManager::clearAll);
    connect(exit_button, &QPushButton::clicked, this, &LayerManager::close);
    connect(active_combo_box, QOverload<const QString &>::of(&QComboBox::currentIndexChanged), this,
            &LayerManager::currentApplicationChanged);
    center_layout->addLayout(button_layout, 0);

    center_widget->setLayout(center_layout);
    setCentralWidget(center_widget);

    active_application = global_layer_name;
    QString stored_active_application = settings.value("ActiveApplication").toString();

    QList<ApplicationOverride> application_overrides;
    int application_override_count = settings.beginReadArray("ApplicationOverrides");
    for (int i = 0; i < application_override_count; ++i) {
        // Restore the state from the settings and the override settings
        settings.setArrayIndex(i);
        QString app_name = settings.value("Name").toString();
        QDir dir_path = settings.value("Directory").toString();
        bool use_custom_paths = settings.value("UseCustomPaths").toBool();
        QList<QPair<QString, LayerType>> custom_paths;
        int length = settings.beginReadArray("LayerPaths");
        for (int j = 0; j < length; ++j) {
            settings.setArrayIndex(j);
            QString location = settings.value("Path").toString();
            LayerType type = LayerEnum(settings.value("Type").toString());
            custom_paths.append(QPair<QString, LayerType>(location, type));
        }
        settings.endArray();

        application_overrides.append({app_name, dir_path, use_custom_paths, custom_paths});
    }
    settings.endArray();

    if (settings.contains("ExpirationValue") && settings.contains("ExpirationUnit")) {
        active_layers->setExpiration(settings.value("ExpirationValue").toInt(),
                                     (DurationUnit)settings.value("ExpirationUnit").toInt());
    }

    for (auto &app : application_overrides) {
        if (app.app_name == global_layer_name) {
        } else {
            applications->AddApplication(app.app_name, app.dir_path);
        }
        override_settings.SetCustomPaths(app.app_name, app.use_custom_paths, app.custom_paths);

        if (app.app_name == stored_active_application) {
            active_application = stored_active_application;
        }
    }
    locations->setUseCustomLayerPaths(override_settings.UseCustomPath(active_application));
    locations->setCustomLayerPaths(override_settings.CustomPaths(active_application));

    active_layers->setEnabledLayers(override_settings.EnabledLayers(active_application));
    active_layers->setDisabledLayers(override_settings.DisabledLayers(active_application));

    layer_settings->setSettingsValues(override_settings.LayerSettings(active_application));
    // TODO: Restore the active layer

    inner_split->restoreState(settings.value("InnerSplitState").toByteArray());
    outer_split->restoreState(settings.value("OuterSplitState").toByteArray());
    restoreGeometry(settings.value("WindowGeometry").toByteArray());
}

void LayerManager::closeEvent(QCloseEvent *event) {
    if (active_layers->shouldClearOnClose()) {
        clear();
    }

    auto app_entries = applications->applicationEntries();
    QList<ApplicationOverride> application_overrides;
    for (auto &entry : app_entries) {
        bool use_custom_paths = override_settings.UseCustomPath(entry.app_name);
        QList<QPair<QString, LayerType>> custom_paths = override_settings.CustomPaths(entry.app_name);
        application_overrides.append({entry.app_name, entry.dir_path, use_custom_paths, custom_paths});
    }

    // The settings are saved here, but the override settings are only saved when the user clicks "Save"
    // settings.remove("ApplicationOverrides");
    int i = 0;
    settings.beginWriteArray("ApplicationOverrides");
    for (const auto &app : application_overrides) {
        settings.setArrayIndex(i++);
        settings.setValue("Name", app.app_name);
        settings.setValue("Directory", app.dir_path.path());
        settings.setValue("UseCustomPaths", app.use_custom_paths);
        settings.beginWriteArray("LayerPaths");
        int j = 0;
        for (const auto &pair : app.custom_paths) {
            settings.setArrayIndex(j++);
            settings.setValue("Type", LayerString(pair.second));
            settings.setValue("Path", pair.first);
        }
        settings.endArray();
    }
    settings.endArray();

    settings.setValue("ExpirationValue", active_layers->expiration());
    settings.setValue("ExpirationUnit", (int)active_layers->expirationUnit());

    settings.setValue("InnerSplitState", inner_split->saveState());
    settings.setValue("OuterSplitState", outer_split->saveState());
    settings.setValue("WindowGeometry", saveGeometry());
    settings.setValue("ActiveApplication", active_application);
}

void LayerManager::clear() {
    override_settings.ClearLayers(active_application);
    override_settings.ClearSettings(active_application, applications->get_application_dir(active_application));
    active_layers->clearEnabledLayers();
    active_layers->clearDisabledLayers();
    notify("Cleared current layers and settings");
}

void LayerManager::clearAll() {
    override_settings.ClearAllLayers();
    override_settings.ClearAllSettings();
    active_layers->clearEnabledLayers();
    active_layers->clearDisabledLayers();
    notify("Cleared all layers and settings");
}

void LayerManager::notify(const QString &message) {
    notification_label->setText("(" + QTime::currentTime().toString() + ") " + message);
    QPalette palette = notification_label->palette();
    palette.setColor(QPalette::WindowText, QColor(255, 0, 0));
    notification_label->setPalette(palette);
    notification_timer.start(50);
}

void LayerManager::restore() {
    active_layers->setEnabledLayers(override_settings.EnabledLayers(active_application));
    active_layers->setDisabledLayers(override_settings.DisabledLayers(active_application));
    layer_settings->setSettingsValues(override_settings.LayerSettings(active_application));

    notify("Restored layers and settings to last saved state");
}
void LayerManager::save() {
    QList<QPair<QString, LayerType>> paths;
    if (locations->useCustomLayerPaths()) {
        paths = locations->customLayerPaths();
    }

    QList<OverrideLayer> override_layers;
    for (auto &layer : applications->applicationEntries()) {
        override_layers.push_back({layer.app_name, applications->get_application_dir(layer.app_name), paths,
                                   override_settings.EnabledLayers(layer.app_name),
                                   override_settings.DisabledLayers(layer.app_name), active_layers->expiration()});
    }
    override_settings.SaveLayers(override_layers);
    // const QList<LayerManifest> &enabled_layers = active_layers->enabledLayers();
    // const QList<LayerManifest> &disabled_layers = active_layers->disabledLayers();
    // override_settings.SaveLayers({{active_application, applications->get_application_dir(active_application), paths,
    // enabled_layers,
    //                                disabled_layers, active_layers->expiration()}});

    const QHash<QString, QHash<QString, LayerValue>> &settings = layer_settings->settings();
    override_settings.SaveSettings(active_application, settings, applications->get_application_dir(active_application));

    notify("Saved current layers and settings");
}
void LayerManager::saveAll() {
    // The override settings are saved here, but the regular settings are only saved when we close
    QList<QPair<QString, LayerType>> paths;
    if (locations->useCustomLayerPaths()) {
        paths = locations->customLayerPaths();
    }

    QList<OverrideLayer> override_layers;
    for (auto &layer : applications->applicationEntries()) {
        const QList<QString> &enabled_layers = override_settings.EnabledLayers(layer.app_name);
        const QList<QString> &disabled_layers = override_settings.DisabledLayers(layer.app_name);
        override_layers.push_back({layer.app_name, applications->get_application_dir(layer.app_name), paths, enabled_layers,
                                   disabled_layers, active_layers->expiration()});
    }
    override_settings.SaveLayers(override_layers);

    // const QList<LayerManifest> &enabled_layers = active_layers->enabledLayers();
    // const QList<LayerManifest> &disabled_layers = active_layers->disabledLayers();
    // override_settings.SaveLayers({{active_application, applications->get_application_dir(active_application), paths,
    // enabled_layers,
    //                                disabled_layers, active_layers->expiration()}});

    const QHash<QString, QHash<QString, LayerValue>> &settings = layer_settings->settings();
    override_settings.SaveSettings(active_application, settings, applications->get_application_dir(active_application));

    notify("Saved all layers and settings");
}

void LayerManager::tabChanged(int index) {
#if !defined(NO_HTML)
    bool enabled = index == 1;
#else
    bool enabled = true;
#endif
    save_button->setEnabled(enabled);
    save_all_button->setEnabled(enabled);
    restore_button->setEnabled(enabled);
    clear_button->setEnabled(enabled);
    clear_all_button->setEnabled(enabled);
    active_combo_label->setEnabled(enabled);
    active_combo_box->setEnabled(enabled);
}

void LayerManager::timerUpdate() {
    QPalette palette = notification_label->palette();
    QColor color = palette.color(QPalette::WindowText);
    if (color == notification_base_color) {
        notification_timer.stop();
    }

    color.setRed(color.red() + qBound(-4, notification_base_color.red() - color.red(), 4));
    palette.setColor(QPalette::WindowText, color);
    notification_label->setPalette(palette);
}

void LayerManager::currentApplicationChanged(const QString &text) {
    override_settings.SetCustomPaths(active_application, locations->useCustomLayerPaths(), locations->customLayerPaths());
    override_settings.SetEnabledLayers(active_application, active_layers->getEnabledLayers());
    override_settings.SetDisabledLayers(active_application, active_layers->getDisabledLayers());
    override_settings.SetLayerSettings(active_application, layer_settings->getSettingsValues());

    this->active_application = text;
    active_layers->setEnabledLayers(override_settings.EnabledLayers(active_application));
    active_layers->setDisabledLayers(override_settings.DisabledLayers(active_application));
    layer_settings->setSettingsValues(override_settings.LayerSettings(active_application));
    locations->setUseCustomLayerPaths(override_settings.UseCustomPath(active_application));
    locations->setCustomLayerPaths(override_settings.CustomPaths(active_application));
    active_layers->updateAvailableLayers(override_settings.CustomPaths(active_application),
                                         override_settings.UseCustomPath(active_application));
}

#if !defined(NO_HTML)
QWidget *LayerManager::showHtml(QProcess *process, const QString &name, const QString &html_file) {
    process->start();
    if (process->waitForFinished() || process->error() != QProcess::FailedToStart) {
        if (QDir::temp().exists(html_file)) {
            QWebEngineView *display = new QWebEngineView();
            display->load(QUrl::fromLocalFile(QDir::temp().absoluteFilePath(html_file)));
            return display;
        } else {
            QString message =
                "<b>Could not find %1 output file (%2).</b><br>"
                "An unknown error occurred in %1. To diagnose this, try running %1 separately.";
            QLabel *error = new QLabel(message.arg(name, html_file));
            error->setAlignment(Qt::AlignCenter);
            return error;
        }
    } else {
        QString message =
            "<b>Could not start %1.</b><br>"
            "Most likely, the '%2' executable is not in the system PATH.<br>"
            "Add '%2' to the system path to see the results here.";
        QLabel *error = new QLabel(message.arg(name, process->program()));
        error->setAlignment(Qt::AlignCenter);
        return error;
    }
}
#endif
