/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionShow_help;
    QAction *actionControl_pad;
    QAction *actionMeasurement_Configuration;
    QAction *actionWatch_window;
    QAction *actionConsole;
    QAction *actionLoad_plugins;
    QAction *actionCreate_point;
    QAction *actionCreate_line;
    QAction *actionCreate_plane;
    QAction *actionCreate_sphere;
    QAction *actionCreate_station;
    QAction *actionCreate_coordinatesystem;
    QAction *actionShow_hide_feature_toolbar;
    QAction *actionSet_sensor;
    QAction *actionSet_function;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionView_settings;
    QAction *actionCreate_scalar_entity;
    QAction *actionProject;
    QAction *action_importNominals;
    QAction *actionCreate_trafoParam;
    QAction *actionActivate_station;
    QAction *actionCreate_cone;
    QAction *actionCreate_cylinder;
    QAction *actionCreate_ellipsoid;
    QAction *actionCreate_hyperboloid;
    QAction *actionCreate_paraboloid;
    QAction *actionCreate_nurbs;
    QAction *actionCreate_pointcloud;
    QAction *actionCreate_circle;
    QAction *actionPlugin_manager;
    QAction *actionSimulation;
    QAction *actionSensor_real_time_data;
    QAction *action_importMeasurementConfigs;
    QAction *action_importSensorConfigs;
    QAction *action_exportNominals;
    QAction *action_exportMeasurementConfigs;
    QAction *action_exportSensorConfigs;
    QAction *actionMagnify;
    QAction *actionCreate_torus;
    QAction *actionCreate_slotted_hole;
    QAction *actionCreate_ellipse;
    QAction *actionRemoveObservations;
    QAction *actionAbout_OpenIndy;
    QAction *actionStationProperties;
    QAction *action_RunBundle;
    QAction *actionShortcut_import;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_activeCoordSystem;
    QComboBox *comboBox_actualNominal;
    QComboBox *comboBox_groups;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget_views;
    QWidget *tab_features;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_features;
    QWidget *tab_bundle;
    QGridLayout *gridLayout_5;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_removeBundle;
    QPushButton *pushButton_addBundle;
    QListView *listView_bundle;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_runBundle;
    QTabWidget *tabWidget_bundle;
    QWidget *tab_bundleGeneralSettings;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_bundleTemplate;
    QComboBox *comboBox_bundleTemplate;
    QPushButton *pushButton_loadBundleTemplate;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_bundleParameters;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_bundleInputGeometries;
    QGridLayout *gridLayout_7;
    QTreeView *treeView_inputGeometries;
    QWidget *tab_bundleInputStations;
    QGridLayout *gridLayout_6;
    QTreeView *treeView_inputStations;
    QWidget *tab_bundleResults;
    QWidget *tab_trafoParam;
    QGridLayout *gridLayout;
    QTableView *tableView_trafoParams;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_import;
    QMenu *menu_export;
    QMenu *menuHelp;
    QMenu *menuSensor;
    QMenu *menuFunctions;
    QMenu *menuView;
    QMenu *menuPlugins;
    QMenu *menuSettings;
    QMenu *menuTools;
    QMenu *menuFeatures;
    QMenu *menuReport;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolbarCreateFeature;
    QToolBar *toolBar_controlPad;
    QDockWidget *dockWidget_Console;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QListView *listView_console;
    QToolBar *toolBar_features;
    QDockWidget *dockWidget_magnify;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_2;
    QLabel *label_magnifyName;
    QLabel *label_magnifyActualNominal;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1081, 657);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons/openIndy.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/toolbars/standard/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionShow_help = new QAction(MainWindow);
        actionShow_help->setObjectName(QStringLiteral("actionShow_help"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/toolbars/standard/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_help->setIcon(icon3);
        actionControl_pad = new QAction(MainWindow);
        actionControl_pad->setObjectName(QStringLiteral("actionControl_pad"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/toolbars/standard/sensor control pad.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionControl_pad->setIcon(icon4);
        actionMeasurement_Configuration = new QAction(MainWindow);
        actionMeasurement_Configuration->setObjectName(QStringLiteral("actionMeasurement_Configuration"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/toolbars/standard/Measurement Config.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMeasurement_Configuration->setIcon(icon5);
        actionWatch_window = new QAction(MainWindow);
        actionWatch_window->setObjectName(QStringLiteral("actionWatch_window"));
        actionWatch_window->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/toolbars/standard/Watch Window.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWatch_window->setIcon(icon6);
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QStringLiteral("actionConsole"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/icons/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsole->setIcon(icon7);
        actionLoad_plugins = new QAction(MainWindow);
        actionLoad_plugins->setObjectName(QStringLiteral("actionLoad_plugins"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/icons/loadPlugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_plugins->setIcon(icon8);
        actionLoad_plugins->setVisible(false);
        actionCreate_point = new QAction(MainWindow);
        actionCreate_point->setObjectName(QStringLiteral("actionCreate_point"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Point.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_point->setIcon(icon9);
        actionCreate_line = new QAction(MainWindow);
        actionCreate_line->setObjectName(QStringLiteral("actionCreate_line"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_line->setIcon(icon10);
        actionCreate_plane = new QAction(MainWindow);
        actionCreate_plane->setObjectName(QStringLiteral("actionCreate_plane"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_plane->setIcon(icon11);
        actionCreate_sphere = new QAction(MainWindow);
        actionCreate_sphere->setObjectName(QStringLiteral("actionCreate_sphere"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_sphere->setIcon(icon12);
        actionCreate_station = new QAction(MainWindow);
        actionCreate_station->setObjectName(QStringLiteral("actionCreate_station"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Station.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_station->setIcon(icon13);
        actionCreate_coordinatesystem = new QAction(MainWindow);
        actionCreate_coordinatesystem->setObjectName(QStringLiteral("actionCreate_coordinatesystem"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Coordinatesystem.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_coordinatesystem->setIcon(icon14);
        actionShow_hide_feature_toolbar = new QAction(MainWindow);
        actionShow_hide_feature_toolbar->setObjectName(QStringLiteral("actionShow_hide_feature_toolbar"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Images/icons/featureToolBar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_hide_feature_toolbar->setIcon(icon15);
        actionSet_sensor = new QAction(MainWindow);
        actionSet_sensor->setObjectName(QStringLiteral("actionSet_sensor"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/icons/toolbars/standard/Sensor Set.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_sensor->setIcon(icon16);
        actionSet_function = new QAction(MainWindow);
        actionSet_function->setObjectName(QStringLiteral("actionSet_function"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/icons/toolbars/standard/function.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_function->setIcon(icon17);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/icons/toolbars/standard/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon18);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/Images/icons/fileexport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon19);
        actionView_settings = new QAction(MainWindow);
        actionView_settings->setObjectName(QStringLiteral("actionView_settings"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/Images/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_settings->setIcon(icon20);
        actionCreate_scalar_entity = new QAction(MainWindow);
        actionCreate_scalar_entity->setObjectName(QStringLiteral("actionCreate_scalar_entity"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Scalar Entities.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_scalar_entity->setIcon(icon21);
        actionProject = new QAction(MainWindow);
        actionProject->setObjectName(QStringLiteral("actionProject"));
        action_importNominals = new QAction(MainWindow);
        action_importNominals->setObjectName(QStringLiteral("action_importNominals"));
        actionCreate_trafoParam = new QAction(MainWindow);
        actionCreate_trafoParam->setObjectName(QStringLiteral("actionCreate_trafoParam"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/icons/icons/toolbars/feature/TrafoParam.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_trafoParam->setIcon(icon22);
        actionActivate_station = new QAction(MainWindow);
        actionActivate_station->setObjectName(QStringLiteral("actionActivate_station"));
        actionCreate_cone = new QAction(MainWindow);
        actionCreate_cone->setObjectName(QStringLiteral("actionCreate_cone"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Cone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_cone->setIcon(icon23);
        actionCreate_cylinder = new QAction(MainWindow);
        actionCreate_cylinder->setObjectName(QStringLiteral("actionCreate_cylinder"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_cylinder->setIcon(icon24);
        actionCreate_ellipsoid = new QAction(MainWindow);
        actionCreate_ellipsoid->setObjectName(QStringLiteral("actionCreate_ellipsoid"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Ellipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_ellipsoid->setIcon(icon25);
        actionCreate_hyperboloid = new QAction(MainWindow);
        actionCreate_hyperboloid->setObjectName(QStringLiteral("actionCreate_hyperboloid"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Hyperboloid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_hyperboloid->setIcon(icon26);
        actionCreate_paraboloid = new QAction(MainWindow);
        actionCreate_paraboloid->setObjectName(QStringLiteral("actionCreate_paraboloid"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Paraboloid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_paraboloid->setIcon(icon27);
        actionCreate_nurbs = new QAction(MainWindow);
        actionCreate_nurbs->setObjectName(QStringLiteral("actionCreate_nurbs"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Nurbs Surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_nurbs->setIcon(icon28);
        actionCreate_pointcloud = new QAction(MainWindow);
        actionCreate_pointcloud->setObjectName(QStringLiteral("actionCreate_pointcloud"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Point Cloud.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_pointcloud->setIcon(icon29);
        actionCreate_circle = new QAction(MainWindow);
        actionCreate_circle->setObjectName(QStringLiteral("actionCreate_circle"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_circle->setIcon(icon30);
        actionPlugin_manager = new QAction(MainWindow);
        actionPlugin_manager->setObjectName(QStringLiteral("actionPlugin_manager"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/Images/icons/pluginmanager.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlugin_manager->setIcon(icon31);
        actionSimulation = new QAction(MainWindow);
        actionSimulation->setObjectName(QStringLiteral("actionSimulation"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/Images/icons/simulation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSimulation->setIcon(icon32);
        actionSensor_real_time_data = new QAction(MainWindow);
        actionSensor_real_time_data->setObjectName(QStringLiteral("actionSensor_real_time_data"));
        actionSensor_real_time_data->setEnabled(false);
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/Images/icons/streamingLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSensor_real_time_data->setIcon(icon33);
        action_importMeasurementConfigs = new QAction(MainWindow);
        action_importMeasurementConfigs->setObjectName(QStringLiteral("action_importMeasurementConfigs"));
        action_importSensorConfigs = new QAction(MainWindow);
        action_importSensorConfigs->setObjectName(QStringLiteral("action_importSensorConfigs"));
        action_exportNominals = new QAction(MainWindow);
        action_exportNominals->setObjectName(QStringLiteral("action_exportNominals"));
        action_exportMeasurementConfigs = new QAction(MainWindow);
        action_exportMeasurementConfigs->setObjectName(QStringLiteral("action_exportMeasurementConfigs"));
        action_exportSensorConfigs = new QAction(MainWindow);
        action_exportSensorConfigs->setObjectName(QStringLiteral("action_exportSensorConfigs"));
        actionMagnify = new QAction(MainWindow);
        actionMagnify->setObjectName(QStringLiteral("actionMagnify"));
        actionCreate_torus = new QAction(MainWindow);
        actionCreate_torus->setObjectName(QStringLiteral("actionCreate_torus"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_torus->setIcon(icon34);
        actionCreate_slotted_hole = new QAction(MainWindow);
        actionCreate_slotted_hole->setObjectName(QStringLiteral("actionCreate_slotted_hole"));
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Slotted Hole.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_slotted_hole->setIcon(icon35);
        actionCreate_ellipse = new QAction(MainWindow);
        actionCreate_ellipse->setObjectName(QStringLiteral("actionCreate_ellipse"));
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/icons/icons/toolbars/feature/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_ellipse->setIcon(icon36);
        actionRemoveObservations = new QAction(MainWindow);
        actionRemoveObservations->setObjectName(QStringLiteral("actionRemoveObservations"));
        actionRemoveObservations->setIcon(icon2);
        actionAbout_OpenIndy = new QAction(MainWindow);
        actionAbout_OpenIndy->setObjectName(QStringLiteral("actionAbout_OpenIndy"));
        actionAbout_OpenIndy->setIcon(icon);
        actionStationProperties = new QAction(MainWindow);
        actionStationProperties->setObjectName(QStringLiteral("actionStationProperties"));
        action_RunBundle = new QAction(MainWindow);
        action_RunBundle->setObjectName(QStringLiteral("action_RunBundle"));
        actionShortcut_import = new QAction(MainWindow);
        actionShortcut_import->setObjectName(QStringLiteral("actionShortcut_import"));
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/icons/icons/toolbars/standard/import_icon.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionShortcut_import->setIcon(icon37);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_activeCoordSystem = new QComboBox(centralWidget);
        comboBox_activeCoordSystem->setObjectName(QStringLiteral("comboBox_activeCoordSystem"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_activeCoordSystem->sizePolicy().hasHeightForWidth());
        comboBox_activeCoordSystem->setSizePolicy(sizePolicy1);
        comboBox_activeCoordSystem->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox_activeCoordSystem->setFrame(true);
        comboBox_activeCoordSystem->setModelColumn(0);

        horizontalLayout->addWidget(comboBox_activeCoordSystem);

        comboBox_actualNominal = new QComboBox(centralWidget);
        comboBox_actualNominal->setObjectName(QStringLiteral("comboBox_actualNominal"));
        sizePolicy1.setHeightForWidth(comboBox_actualNominal->sizePolicy().hasHeightForWidth());
        comboBox_actualNominal->setSizePolicy(sizePolicy1);
        comboBox_actualNominal->setAutoFillBackground(false);
        comboBox_actualNominal->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox_actualNominal->setModelColumn(0);

        horizontalLayout->addWidget(comboBox_actualNominal);

        comboBox_groups = new QComboBox(centralWidget);
        comboBox_groups->setObjectName(QStringLiteral("comboBox_groups"));
        sizePolicy1.setHeightForWidth(comboBox_groups->sizePolicy().hasHeightForWidth());
        comboBox_groups->setSizePolicy(sizePolicy1);
        comboBox_groups->setAutoFillBackground(false);
        comboBox_groups->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox_groups->setModelColumn(0);

        horizontalLayout->addWidget(comboBox_groups);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget_views = new QTabWidget(centralWidget);
        tabWidget_views->setObjectName(QStringLiteral("tabWidget_views"));
        sizePolicy.setHeightForWidth(tabWidget_views->sizePolicy().hasHeightForWidth());
        tabWidget_views->setSizePolicy(sizePolicy);
        tabWidget_views->setSizeIncrement(QSize(0, 0));
        tab_features = new QWidget();
        tab_features->setObjectName(QStringLiteral("tab_features"));
        horizontalLayout_2 = new QHBoxLayout(tab_features);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView_features = new QTableView(tab_features);
        tableView_features->setObjectName(QStringLiteral("tableView_features"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView_features->sizePolicy().hasHeightForWidth());
        tableView_features->setSizePolicy(sizePolicy2);
        tableView_features->setAutoFillBackground(true);
        tableView_features->setStyleSheet(QStringLiteral("font: 11pt \"Arial\";"));
        tableView_features->setShowGrid(true);
        tableView_features->setSortingEnabled(false);

        horizontalLayout_2->addWidget(tableView_features);

        tabWidget_views->addTab(tab_features, QString());
        tab_bundle = new QWidget();
        tab_bundle->setObjectName(QStringLiteral("tab_bundle"));
        sizePolicy.setHeightForWidth(tab_bundle->sizePolicy().hasHeightForWidth());
        tab_bundle->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(tab_bundle);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        splitter = new QSplitter(tab_bundle);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_removeBundle = new QPushButton(layoutWidget);
        pushButton_removeBundle->setObjectName(QStringLiteral("pushButton_removeBundle"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/Images/icons/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_removeBundle->setIcon(icon38);

        horizontalLayout_3->addWidget(pushButton_removeBundle);

        pushButton_addBundle = new QPushButton(layoutWidget);
        pushButton_addBundle->setObjectName(QStringLiteral("pushButton_addBundle"));
        QIcon icon39;
        icon39.addFile(QStringLiteral(":/Images/icons/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addBundle->setIcon(icon39);

        horizontalLayout_3->addWidget(pushButton_addBundle);


        verticalLayout_3->addLayout(horizontalLayout_3);

        listView_bundle = new QListView(layoutWidget);
        listView_bundle->setObjectName(QStringLiteral("listView_bundle"));

        verticalLayout_3->addWidget(listView_bundle);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButton_runBundle = new QPushButton(layoutWidget);
        pushButton_runBundle->setObjectName(QStringLiteral("pushButton_runBundle"));

        horizontalLayout_5->addWidget(pushButton_runBundle);


        verticalLayout_3->addLayout(horizontalLayout_5);

        splitter->addWidget(layoutWidget);
        tabWidget_bundle = new QTabWidget(splitter);
        tabWidget_bundle->setObjectName(QStringLiteral("tabWidget_bundle"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(5);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget_bundle->sizePolicy().hasHeightForWidth());
        tabWidget_bundle->setSizePolicy(sizePolicy3);
        tab_bundleGeneralSettings = new QWidget();
        tab_bundleGeneralSettings->setObjectName(QStringLiteral("tab_bundleGeneralSettings"));
        gridLayout_4 = new QGridLayout(tab_bundleGeneralSettings);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_bundleTemplate = new QLabel(tab_bundleGeneralSettings);
        label_bundleTemplate->setObjectName(QStringLiteral("label_bundleTemplate"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_bundleTemplate->setFont(font);

        horizontalLayout_4->addWidget(label_bundleTemplate);

        comboBox_bundleTemplate = new QComboBox(tab_bundleGeneralSettings);
        comboBox_bundleTemplate->setObjectName(QStringLiteral("comboBox_bundleTemplate"));

        horizontalLayout_4->addWidget(comboBox_bundleTemplate);

        pushButton_loadBundleTemplate = new QPushButton(tab_bundleGeneralSettings);
        pushButton_loadBundleTemplate->setObjectName(QStringLiteral("pushButton_loadBundleTemplate"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_loadBundleTemplate->sizePolicy().hasHeightForWidth());
        pushButton_loadBundleTemplate->setSizePolicy(sizePolicy4);
        pushButton_loadBundleTemplate->setMaximumSize(QSize(50, 24));

        horizontalLayout_4->addWidget(pushButton_loadBundleTemplate);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        widget_bundleParameters = new QWidget(tab_bundleGeneralSettings);
        widget_bundleParameters->setObjectName(QStringLiteral("widget_bundleParameters"));

        horizontalLayout_6->addWidget(widget_bundleParameters);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayout_4->setStretch(1, 1);

        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget_bundle->addTab(tab_bundleGeneralSettings, QString());
        tab_bundleInputGeometries = new QWidget();
        tab_bundleInputGeometries->setObjectName(QStringLiteral("tab_bundleInputGeometries"));
        gridLayout_7 = new QGridLayout(tab_bundleInputGeometries);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        treeView_inputGeometries = new QTreeView(tab_bundleInputGeometries);
        treeView_inputGeometries->setObjectName(QStringLiteral("treeView_inputGeometries"));

        gridLayout_7->addWidget(treeView_inputGeometries, 0, 0, 1, 1);

        tabWidget_bundle->addTab(tab_bundleInputGeometries, QString());
        tab_bundleInputStations = new QWidget();
        tab_bundleInputStations->setObjectName(QStringLiteral("tab_bundleInputStations"));
        gridLayout_6 = new QGridLayout(tab_bundleInputStations);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        treeView_inputStations = new QTreeView(tab_bundleInputStations);
        treeView_inputStations->setObjectName(QStringLiteral("treeView_inputStations"));

        gridLayout_6->addWidget(treeView_inputStations, 0, 0, 1, 1);

        tabWidget_bundle->addTab(tab_bundleInputStations, QString());
        tab_bundleResults = new QWidget();
        tab_bundleResults->setObjectName(QStringLiteral("tab_bundleResults"));
        tabWidget_bundle->addTab(tab_bundleResults, QString());
        splitter->addWidget(tabWidget_bundle);

        gridLayout_5->addWidget(splitter, 0, 0, 1, 1);

        tabWidget_views->addTab(tab_bundle, QString());
        tab_trafoParam = new QWidget();
        tab_trafoParam->setObjectName(QStringLiteral("tab_trafoParam"));
        gridLayout = new QGridLayout(tab_trafoParam);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView_trafoParams = new QTableView(tab_trafoParam);
        tableView_trafoParams->setObjectName(QStringLiteral("tableView_trafoParams"));

        gridLayout->addWidget(tableView_trafoParams, 0, 0, 1, 1);

        tabWidget_views->addTab(tab_trafoParam, QString());

        verticalLayout_2->addWidget(tabWidget_views);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1081, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu_import = new QMenu(menuFile);
        menu_import->setObjectName(QStringLiteral("menu_import"));
        QIcon icon40;
        icon40.addFile(QStringLiteral(":/Images/icons/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_import->setIcon(icon40);
        menu_export = new QMenu(menuFile);
        menu_export->setObjectName(QStringLiteral("menu_export"));
        QIcon icon41;
        icon41.addFile(QStringLiteral(":/Images/icons/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_export->setIcon(icon41);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSensor = new QMenu(menuBar);
        menuSensor->setObjectName(QStringLiteral("menuSensor"));
        menuFunctions = new QMenu(menuBar);
        menuFunctions->setObjectName(QStringLiteral("menuFunctions"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QStringLiteral("menuPlugins"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuFeatures = new QMenu(menuBar);
        menuFeatures->setObjectName(QStringLiteral("menuFeatures"));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QStringLiteral("menuReport"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolbarCreateFeature = new QToolBar(MainWindow);
        toolbarCreateFeature->setObjectName(QStringLiteral("toolbarCreateFeature"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolbarCreateFeature->sizePolicy().hasHeightForWidth());
        toolbarCreateFeature->setSizePolicy(sizePolicy5);
        toolbarCreateFeature->setMaximumSize(QSize(16777215, 16777215));
        toolbarCreateFeature->setAllowedAreas(Qt::BottomToolBarArea|Qt::RightToolBarArea|Qt::TopToolBarArea);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarCreateFeature);
        MainWindow->insertToolBarBreak(toolbarCreateFeature);
        toolBar_controlPad = new QToolBar(MainWindow);
        toolBar_controlPad->setObjectName(QStringLiteral("toolBar_controlPad"));
        toolBar_controlPad->setEnabled(true);
        sizePolicy5.setHeightForWidth(toolBar_controlPad->sizePolicy().hasHeightForWidth());
        toolBar_controlPad->setSizePolicy(sizePolicy5);
        toolBar_controlPad->setMaximumSize(QSize(16777215, 16777215));
        toolBar_controlPad->setFloatable(true);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_controlPad);
        dockWidget_Console = new QDockWidget(MainWindow);
        dockWidget_Console->setObjectName(QStringLiteral("dockWidget_Console"));
        dockWidget_Console->setFloating(false);
        dockWidget_Console->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView_console = new QListView(dockWidgetContents);
        listView_console->setObjectName(QStringLiteral("listView_console"));
        listView_console->setEnabled(true);
        sizePolicy.setHeightForWidth(listView_console->sizePolicy().hasHeightForWidth());
        listView_console->setSizePolicy(sizePolicy);
        listView_console->setMinimumSize(QSize(0, 0));
        listView_console->setMaximumSize(QSize(16777215, 16777215));
        listView_console->setSizeIncrement(QSize(0, 0));
        listView_console->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(11);
        listView_console->setFont(font1);
        listView_console->setMouseTracking(false);
        listView_console->setFocusPolicy(Qt::WheelFocus);
        listView_console->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        listView_console->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView_console->setDragEnabled(true);
        listView_console->setSelectionMode(QAbstractItemView::MultiSelection);
        listView_console->setSelectionBehavior(QAbstractItemView::SelectRows);
        listView_console->setMovement(QListView::Static);
        listView_console->setResizeMode(QListView::Adjust);
        listView_console->setUniformItemSizes(false);

        verticalLayout->addWidget(listView_console);

        dockWidget_Console->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_Console);
        toolBar_features = new QToolBar(MainWindow);
        toolBar_features->setObjectName(QStringLiteral("toolBar_features"));
        sizePolicy5.setHeightForWidth(toolBar_features->sizePolicy().hasHeightForWidth());
        toolBar_features->setSizePolicy(sizePolicy5);
        toolBar_features->setIconSize(QSize(50, 50));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_features);
        MainWindow->insertToolBarBreak(toolBar_features);
        dockWidget_magnify = new QDockWidget(MainWindow);
        dockWidget_magnify->setObjectName(QStringLiteral("dockWidget_magnify"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_magnifyName = new QLabel(dockWidgetContents_3);
        label_magnifyName->setObjectName(QStringLiteral("label_magnifyName"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_magnifyName->sizePolicy().hasHeightForWidth());
        label_magnifyName->setSizePolicy(sizePolicy6);
        label_magnifyName->setFont(font);
        label_magnifyName->setScaledContents(true);
        label_magnifyName->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_magnifyName, 0, 0, 1, 1);

        label_magnifyActualNominal = new QLabel(dockWidgetContents_3);
        label_magnifyActualNominal->setObjectName(QStringLiteral("label_magnifyActualNominal"));
        sizePolicy6.setHeightForWidth(label_magnifyActualNominal->sizePolicy().hasHeightForWidth());
        label_magnifyActualNominal->setSizePolicy(sizePolicy6);
        label_magnifyActualNominal->setFont(font);
        label_magnifyActualNominal->setScaledContents(true);
        label_magnifyActualNominal->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_magnifyActualNominal, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 5);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 5);
        dockWidget_magnify->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_magnify);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuFeatures->menuAction());
        menuBar->addAction(menuSensor->menuAction());
        menuBar->addAction(menuFunctions->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(menu_import->menuAction());
        menuFile->addAction(menu_export->menuAction());
        menuFile->addAction(actionClose);
        menu_import->addAction(action_importNominals);
        menu_import->addAction(action_importMeasurementConfigs);
        menu_import->addAction(action_importSensorConfigs);
        menu_export->addAction(action_exportNominals);
        menu_export->addAction(action_exportMeasurementConfigs);
        menu_export->addAction(action_exportSensorConfigs);
        menuHelp->addAction(actionShow_help);
        menuHelp->addAction(actionAbout_OpenIndy);
        menuSensor->addAction(actionCreate_station);
        menuSensor->addAction(actionActivate_station);
        menuSensor->addAction(actionSet_sensor);
        menuSensor->addAction(actionMeasurement_Configuration);
        menuSensor->addAction(actionStationProperties);
        menuSensor->addAction(action_RunBundle);
        menuFunctions->addAction(actionSet_function);
        menuView->addAction(actionControl_pad);
        menuView->addAction(actionWatch_window);
        menuView->addAction(actionConsole);
        menuView->addAction(actionShow_hide_feature_toolbar);
        menuView->addAction(actionSimulation);
        menuView->addAction(actionSensor_real_time_data);
        menuView->addAction(actionMagnify);
        menuPlugins->addAction(actionLoad_plugins);
        menuPlugins->addAction(actionPlugin_manager);
        menuSettings->addAction(actionView_settings);
        menuFeatures->addAction(actionCreate_point);
        menuFeatures->addAction(actionCreate_line);
        menuFeatures->addAction(actionCreate_plane);
        menuFeatures->addAction(actionCreate_sphere);
        menuFeatures->addAction(actionCreate_station);
        menuFeatures->addAction(actionCreate_coordinatesystem);
        menuFeatures->addAction(actionCreate_trafoParam);
        menuFeatures->addAction(actionCreate_cylinder);
        menuFeatures->addAction(actionCreate_scalar_entity);
        menuFeatures->addAction(actionCreate_cone);
        menuFeatures->addAction(actionCreate_ellipsoid);
        menuFeatures->addAction(actionCreate_hyperboloid);
        menuFeatures->addAction(actionCreate_paraboloid);
        menuFeatures->addAction(actionCreate_nurbs);
        menuFeatures->addAction(actionCreate_pointcloud);
        menuFeatures->addAction(actionCreate_circle);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionShortcut_import);
        mainToolBar->addAction(actionControl_pad);
        mainToolBar->addAction(actionSet_sensor);
        mainToolBar->addAction(actionMeasurement_Configuration);
        mainToolBar->addAction(actionSet_function);
        mainToolBar->addAction(actionWatch_window);
        mainToolBar->addAction(actionShow_help);
        mainToolBar->addAction(actionSensor_real_time_data);
        mainToolBar->addAction(actionConsole);
        mainToolBar->addAction(actionRemoveObservations);
        toolBar_features->addAction(actionCreate_station);
        toolBar_features->addAction(actionCreate_trafoParam);
        toolBar_features->addAction(actionCreate_coordinatesystem);
        toolBar_features->addSeparator();
        toolBar_features->addAction(actionCreate_scalar_entity);
        toolBar_features->addSeparator();
        toolBar_features->addAction(actionCreate_point);
        toolBar_features->addAction(actionCreate_line);
        toolBar_features->addAction(actionCreate_plane);
        toolBar_features->addAction(actionCreate_circle);
        toolBar_features->addAction(actionCreate_sphere);
        toolBar_features->addAction(actionCreate_cylinder);
        toolBar_features->addAction(actionCreate_cone);
        toolBar_features->addAction(actionCreate_ellipse);
        toolBar_features->addAction(actionCreate_slotted_hole);
        toolBar_features->addSeparator();
        toolBar_features->addAction(actionCreate_paraboloid);
        toolBar_features->addAction(actionCreate_ellipsoid);
        toolBar_features->addAction(actionCreate_torus);
        toolBar_features->addAction(actionCreate_hyperboloid);
        toolBar_features->addSeparator();
        toolBar_features->addAction(actionCreate_nurbs);
        toolBar_features->addAction(actionCreate_pointcloud);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_runBundle, SIGNAL(clicked()), action_RunBundle, SLOT(trigger()));

        tabWidget_views->setCurrentIndex(0);
        tabWidget_bundle->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "openIndy", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "open project", 0));
        actionClose->setText(QApplication::translate("MainWindow", "close", 0));
        actionShow_help->setText(QApplication::translate("MainWindow", "Show Help", 0));
        actionShow_help->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionControl_pad->setText(QApplication::translate("MainWindow", "sensor control", 0));
#ifndef QT_NO_TOOLTIP
        actionControl_pad->setToolTip(QApplication::translate("MainWindow", "sensor control pad", 0));
#endif // QT_NO_TOOLTIP
        actionMeasurement_Configuration->setText(QApplication::translate("MainWindow", "measurement configuration", 0));
#ifndef QT_NO_TOOLTIP
        actionMeasurement_Configuration->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>edit the measurement configuration of the current selected feature. The changes only belong to this feature. At creating new features you can set new measurement configurations for the new ones.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionWatch_window->setText(QApplication::translate("MainWindow", "watch window", 0));
        actionWatch_window->setShortcut(QApplication::translate("MainWindow", "F4", 0));
        actionConsole->setText(QApplication::translate("MainWindow", "console", 0));
        actionLoad_plugins->setText(QApplication::translate("MainWindow", "load plugins", 0));
        actionCreate_point->setText(QApplication::translate("MainWindow", "create point", 0));
        actionCreate_line->setText(QApplication::translate("MainWindow", "create line", 0));
        actionCreate_plane->setText(QApplication::translate("MainWindow", "create plane", 0));
        actionCreate_sphere->setText(QApplication::translate("MainWindow", "create sphere", 0));
        actionCreate_station->setText(QApplication::translate("MainWindow", "create station", 0));
        actionCreate_coordinatesystem->setText(QApplication::translate("MainWindow", "create coordinatesystem", 0));
        actionShow_hide_feature_toolbar->setText(QApplication::translate("MainWindow", "show/ hide feature toolbar", 0));
        actionSet_sensor->setText(QApplication::translate("MainWindow", "set sensor", 0));
        actionSet_function->setText(QApplication::translate("MainWindow", "set function", 0));
        actionSave->setText(QApplication::translate("MainWindow", "save", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "save as", 0));
        actionView_settings->setText(QApplication::translate("MainWindow", "view settings", 0));
        actionCreate_scalar_entity->setText(QApplication::translate("MainWindow", "create scalar entity", 0));
        actionProject->setText(QApplication::translate("MainWindow", "project", 0));
        action_importNominals->setText(QApplication::translate("MainWindow", "nominals", 0));
        actionCreate_trafoParam->setText(QApplication::translate("MainWindow", "create transformation parameter", 0));
        actionActivate_station->setText(QApplication::translate("MainWindow", "activate station", 0));
#ifndef QT_NO_TOOLTIP
        actionActivate_station->setToolTip(QApplication::translate("MainWindow", "activates the current selected station and deactivates the old active station.", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_cone->setText(QApplication::translate("MainWindow", "create cone", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_cone->setToolTip(QApplication::translate("MainWindow", "create cone", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_cylinder->setText(QApplication::translate("MainWindow", "create cylinder", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_cylinder->setToolTip(QApplication::translate("MainWindow", "create cylinder", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_ellipsoid->setText(QApplication::translate("MainWindow", "create ellipsoid", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_ellipsoid->setToolTip(QApplication::translate("MainWindow", "create ellipsoid", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_hyperboloid->setText(QApplication::translate("MainWindow", "create hyperboloid", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_hyperboloid->setToolTip(QApplication::translate("MainWindow", "create hyperboloid", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_paraboloid->setText(QApplication::translate("MainWindow", "create paraboloid", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_paraboloid->setToolTip(QApplication::translate("MainWindow", "create paraboloid", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_nurbs->setText(QApplication::translate("MainWindow", "create nurbs", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_nurbs->setToolTip(QApplication::translate("MainWindow", "create nurbs", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_pointcloud->setText(QApplication::translate("MainWindow", "create pointcloud", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_pointcloud->setToolTip(QApplication::translate("MainWindow", "create pointcloud", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_circle->setText(QApplication::translate("MainWindow", "create circle", 0));
        actionPlugin_manager->setText(QApplication::translate("MainWindow", "plugin manager", 0));
        actionSimulation->setText(QApplication::translate("MainWindow", "simulation", 0));
        actionSensor_real_time_data->setText(QApplication::translate("MainWindow", "sensor_real_time_data", 0));
        action_importMeasurementConfigs->setText(QApplication::translate("MainWindow", "measurement configs", 0));
        action_importSensorConfigs->setText(QApplication::translate("MainWindow", "sensor configs", 0));
        action_exportNominals->setText(QApplication::translate("MainWindow", "nominals", 0));
        action_exportMeasurementConfigs->setText(QApplication::translate("MainWindow", "measurement configs", 0));
        action_exportSensorConfigs->setText(QApplication::translate("MainWindow", "sensor configs", 0));
        actionMagnify->setText(QApplication::translate("MainWindow", "magnify", 0));
        actionCreate_torus->setText(QApplication::translate("MainWindow", "create torus", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_torus->setToolTip(QApplication::translate("MainWindow", "create torus", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_slotted_hole->setText(QApplication::translate("MainWindow", "create slotted hole", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_slotted_hole->setToolTip(QApplication::translate("MainWindow", "create slotted hole", 0));
#endif // QT_NO_TOOLTIP
        actionCreate_ellipse->setText(QApplication::translate("MainWindow", "create ellipse", 0));
#ifndef QT_NO_TOOLTIP
        actionCreate_ellipse->setToolTip(QApplication::translate("MainWindow", "create ellipse", 0));
#endif // QT_NO_TOOLTIP
        actionRemoveObservations->setText(QApplication::translate("MainWindow", "removeObservations", 0));
        actionAbout_OpenIndy->setText(QApplication::translate("MainWindow", "About OpenIndy", 0));
        actionStationProperties->setText(QApplication::translate("MainWindow", "properties", 0));
#ifndef QT_NO_TOOLTIP
        actionStationProperties->setToolTip(QApplication::translate("MainWindow", "active station properties", 0));
#endif // QT_NO_TOOLTIP
        action_RunBundle->setText(QApplication::translate("MainWindow", "run bundle", 0));
        actionShortcut_import->setText(QApplication::translate("MainWindow", "import", 0));
#ifndef QT_NO_TOOLTIP
        actionShortcut_import->setToolTip(QApplication::translate("MainWindow", "opens the import nominals dialog", 0));
#endif // QT_NO_TOOLTIP
        tabWidget_views->setTabText(tabWidget_views->indexOf(tab_features), QApplication::translate("MainWindow", "features", 0));
        pushButton_removeBundle->setText(QString());
        pushButton_addBundle->setText(QString());
        pushButton_runBundle->setText(QApplication::translate("MainWindow", "run bundle", 0));
        label_bundleTemplate->setText(QApplication::translate("MainWindow", "template", 0));
        pushButton_loadBundleTemplate->setText(QApplication::translate("MainWindow", "load", 0));
        tabWidget_bundle->setTabText(tabWidget_bundle->indexOf(tab_bundleGeneralSettings), QApplication::translate("MainWindow", "general settings", 0));
        tabWidget_bundle->setTabText(tabWidget_bundle->indexOf(tab_bundleInputGeometries), QApplication::translate("MainWindow", "input geometries", 0));
        tabWidget_bundle->setTabText(tabWidget_bundle->indexOf(tab_bundleInputStations), QApplication::translate("MainWindow", "input stations", 0));
        tabWidget_bundle->setTabText(tabWidget_bundle->indexOf(tab_bundleResults), QApplication::translate("MainWindow", "results", 0));
        tabWidget_views->setTabText(tabWidget_views->indexOf(tab_bundle), QApplication::translate("MainWindow", "bundle", 0));
        tabWidget_views->setTabText(tabWidget_views->indexOf(tab_trafoParam), QApplication::translate("MainWindow", "transformation parameter", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menu_import->setTitle(QApplication::translate("MainWindow", "import", 0));
        menu_export->setTitle(QApplication::translate("MainWindow", "export", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuSensor->setTitle(QApplication::translate("MainWindow", "Station", 0));
        menuFunctions->setTitle(QApplication::translate("MainWindow", "Function", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuPlugins->setTitle(QApplication::translate("MainWindow", "Plugin", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuFeatures->setTitle(QApplication::translate("MainWindow", "Features", 0));
        menuReport->setTitle(QApplication::translate("MainWindow", "Report", 0));
        toolbarCreateFeature->setWindowTitle(QApplication::translate("MainWindow", "CreateFeature", 0));
#ifndef QT_NO_TOOLTIP
        toolbarCreateFeature->setToolTip(QApplication::translate("MainWindow", "toolbar for creating new features", 0));
#endif // QT_NO_TOOLTIP
        toolBar_controlPad->setWindowTitle(QApplication::translate("MainWindow", "sensor pad", 0));
        dockWidget_Console->setWindowTitle(QApplication::translate("MainWindow", "Console", 0));
        toolBar_features->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        dockWidget_magnify->setWindowTitle(QApplication::translate("MainWindow", "magnify", 0));
        label_magnifyName->setText(QApplication::translate("MainWindow", "featName", 0));
        label_magnifyActualNominal->setText(QApplication::translate("MainWindow", "featActNom", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
