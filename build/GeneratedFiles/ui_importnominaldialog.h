/********************************************************************************
** Form generated from reading UI file 'importnominaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTNOMINALDIALOG_H
#define UI_IMPORTNOMINALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportNominalDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget_import;
    QWidget *tab_specialFormats;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_file_sf;
    QPushButton *pushButton_file_sf;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_plugin_sf;
    QComboBox *comboBox_plugin_sf;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_coordSys_sf;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_filter_sf;
    QComboBox *comboBox_filter_sf;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_unitDistance_sf;
    QComboBox *comboBox_distance_sf;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_unitAngle_sf;
    QComboBox *comboBox_angle_sf;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_unitTemperature_sf;
    QComboBox *comboBox_temperature_sf;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_preview_sf;
    QTextBrowser *textBrowser_preview_sf;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancel_sf;
    QPushButton *pushButton_import_sf;
    QWidget *tab_simpleAscii;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_file_sa;
    QPushButton *pushButton_file_sa;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_plugin_sa;
    QComboBox *comboBox_plugin_sa;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_exchange_sa;
    QComboBox *comboBox_exchange_sa;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_coordSys_sa;
    QComboBox *comboBox_system_sa;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_geometry_sa;
    QComboBox *comboBox_geometry_sa;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_groups;
    QComboBox *comboBox_groupNames;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_separator_sa;
    QComboBox *comboBox_separator_sa;
    QCheckBox *checkBox_skipFirst_sa;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_distanceUnit_sa;
    QComboBox *comboBox_distance_sa;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_angleUnit_sa;
    QComboBox *comboBox_angle_sa;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_temperatureUnit_sa;
    QComboBox *comboBox_temperature_sa;
    QSpacerItem *verticalSpacer_10;
    QTableView *tableView_columns_sa;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_cancel_sa;
    QPushButton *pushButton_import_sa;

    void setupUi(QDialog *ImportNominalDialog)
    {
        if (ImportNominalDialog->objectName().isEmpty())
            ImportNominalDialog->setObjectName(QStringLiteral("ImportNominalDialog"));
        ImportNominalDialog->setWindowModality(Qt::ApplicationModal);
        ImportNominalDialog->resize(750, 521);
        ImportNominalDialog->setMinimumSize(QSize(400, 400));
        ImportNominalDialog->setMaximumSize(QSize(1000, 800));
        gridLayout = new QGridLayout(ImportNominalDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget_import = new QTabWidget(ImportNominalDialog);
        tabWidget_import->setObjectName(QStringLiteral("tabWidget_import"));
        tab_specialFormats = new QWidget();
        tab_specialFormats->setObjectName(QStringLiteral("tab_specialFormats"));
        gridLayout_2 = new QGridLayout(tab_specialFormats);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_file_sf = new QLineEdit(tab_specialFormats);
        lineEdit_file_sf->setObjectName(QStringLiteral("lineEdit_file_sf"));
        lineEdit_file_sf->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_file_sf);

        pushButton_file_sf = new QPushButton(tab_specialFormats);
        pushButton_file_sf->setObjectName(QStringLiteral("pushButton_file_sf"));
        pushButton_file_sf->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButton_file_sf);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_plugin_sf = new QLabel(tab_specialFormats);
        label_plugin_sf->setObjectName(QStringLiteral("label_plugin_sf"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_plugin_sf->setFont(font);

        horizontalLayout->addWidget(label_plugin_sf);

        comboBox_plugin_sf = new QComboBox(tab_specialFormats);
        comboBox_plugin_sf->setObjectName(QStringLiteral("comboBox_plugin_sf"));

        horizontalLayout->addWidget(comboBox_plugin_sf);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_11);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_coordSys_sf = new QLabel(tab_specialFormats);
        label_coordSys_sf->setObjectName(QStringLiteral("label_coordSys_sf"));
        label_coordSys_sf->setFont(font);

        horizontalLayout_15->addWidget(label_coordSys_sf);

        comboBox = new QComboBox(tab_specialFormats);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_15->addWidget(comboBox);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_filter_sf = new QLabel(tab_specialFormats);
        label_filter_sf->setObjectName(QStringLiteral("label_filter_sf"));
        label_filter_sf->setFont(font);

        horizontalLayout_14->addWidget(label_filter_sf);

        comboBox_filter_sf = new QComboBox(tab_specialFormats);
        comboBox_filter_sf->setObjectName(QStringLiteral("comboBox_filter_sf"));

        horizontalLayout_14->addWidget(comboBox_filter_sf);


        verticalLayout_2->addLayout(horizontalLayout_14);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_unitDistance_sf = new QLabel(tab_specialFormats);
        label_unitDistance_sf->setObjectName(QStringLiteral("label_unitDistance_sf"));
        label_unitDistance_sf->setFont(font);

        horizontalLayout_3->addWidget(label_unitDistance_sf);

        comboBox_distance_sf = new QComboBox(tab_specialFormats);
        comboBox_distance_sf->setObjectName(QStringLiteral("comboBox_distance_sf"));

        horizontalLayout_3->addWidget(comboBox_distance_sf);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_unitAngle_sf = new QLabel(tab_specialFormats);
        label_unitAngle_sf->setObjectName(QStringLiteral("label_unitAngle_sf"));
        label_unitAngle_sf->setFont(font);

        horizontalLayout_4->addWidget(label_unitAngle_sf);

        comboBox_angle_sf = new QComboBox(tab_specialFormats);
        comboBox_angle_sf->setObjectName(QStringLiteral("comboBox_angle_sf"));

        horizontalLayout_4->addWidget(comboBox_angle_sf);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_unitTemperature_sf = new QLabel(tab_specialFormats);
        label_unitTemperature_sf->setObjectName(QStringLiteral("label_unitTemperature_sf"));
        label_unitTemperature_sf->setFont(font);

        horizontalLayout_5->addWidget(label_unitTemperature_sf);

        comboBox_temperature_sf = new QComboBox(tab_specialFormats);
        comboBox_temperature_sf->setObjectName(QStringLiteral("comboBox_temperature_sf"));

        horizontalLayout_5->addWidget(comboBox_temperature_sf);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        horizontalLayout_18->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_preview_sf = new QLabel(tab_specialFormats);
        label_preview_sf->setObjectName(QStringLiteral("label_preview_sf"));
        label_preview_sf->setFont(font);

        verticalLayout->addWidget(label_preview_sf);

        textBrowser_preview_sf = new QTextBrowser(tab_specialFormats);
        textBrowser_preview_sf->setObjectName(QStringLiteral("textBrowser_preview_sf"));

        verticalLayout->addWidget(textBrowser_preview_sf);


        horizontalLayout_18->addLayout(verticalLayout);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 2);

        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_cancel_sf = new QPushButton(tab_specialFormats);
        pushButton_cancel_sf->setObjectName(QStringLiteral("pushButton_cancel_sf"));

        horizontalLayout_2->addWidget(pushButton_cancel_sf);

        pushButton_import_sf = new QPushButton(tab_specialFormats);
        pushButton_import_sf->setObjectName(QStringLiteral("pushButton_import_sf"));

        horizontalLayout_2->addWidget(pushButton_import_sf);


        verticalLayout_5->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget_import->addTab(tab_specialFormats, QString());
        tab_simpleAscii = new QWidget();
        tab_simpleAscii->setObjectName(QStringLiteral("tab_simpleAscii"));
        gridLayout_3 = new QGridLayout(tab_simpleAscii);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lineEdit_file_sa = new QLineEdit(tab_simpleAscii);
        lineEdit_file_sa->setObjectName(QStringLiteral("lineEdit_file_sa"));
        lineEdit_file_sa->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_file_sa);

        pushButton_file_sa = new QPushButton(tab_simpleAscii);
        pushButton_file_sa->setObjectName(QStringLiteral("pushButton_file_sa"));
        pushButton_file_sa->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_13->addWidget(pushButton_file_sa);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_plugin_sa = new QLabel(tab_simpleAscii);
        label_plugin_sa->setObjectName(QStringLiteral("label_plugin_sa"));
        label_plugin_sa->setFont(font);

        horizontalLayout_7->addWidget(label_plugin_sa);

        comboBox_plugin_sa = new QComboBox(tab_simpleAscii);
        comboBox_plugin_sa->setObjectName(QStringLiteral("comboBox_plugin_sa"));

        horizontalLayout_7->addWidget(comboBox_plugin_sa);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_exchange_sa = new QLabel(tab_simpleAscii);
        label_exchange_sa->setObjectName(QStringLiteral("label_exchange_sa"));
        label_exchange_sa->setFont(font);

        horizontalLayout_19->addWidget(label_exchange_sa);

        comboBox_exchange_sa = new QComboBox(tab_simpleAscii);
        comboBox_exchange_sa->setObjectName(QStringLiteral("comboBox_exchange_sa"));

        horizontalLayout_19->addWidget(comboBox_exchange_sa);


        verticalLayout_3->addLayout(horizontalLayout_19);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_coordSys_sa = new QLabel(tab_simpleAscii);
        label_coordSys_sa->setObjectName(QStringLiteral("label_coordSys_sa"));
        label_coordSys_sa->setFont(font);

        horizontalLayout_17->addWidget(label_coordSys_sa);

        comboBox_system_sa = new QComboBox(tab_simpleAscii);
        comboBox_system_sa->setObjectName(QStringLiteral("comboBox_system_sa"));

        horizontalLayout_17->addWidget(comboBox_system_sa);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_17);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_geometry_sa = new QLabel(tab_simpleAscii);
        label_geometry_sa->setObjectName(QStringLiteral("label_geometry_sa"));
        label_geometry_sa->setFont(font);

        horizontalLayout_8->addWidget(label_geometry_sa);

        comboBox_geometry_sa = new QComboBox(tab_simpleAscii);
        comboBox_geometry_sa->setObjectName(QStringLiteral("comboBox_geometry_sa"));

        horizontalLayout_8->addWidget(comboBox_geometry_sa);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_groups = new QLabel(tab_simpleAscii);
        label_groups->setObjectName(QStringLiteral("label_groups"));
        label_groups->setFont(font);

        horizontalLayout_20->addWidget(label_groups);

        comboBox_groupNames = new QComboBox(tab_simpleAscii);
        comboBox_groupNames->setObjectName(QStringLiteral("comboBox_groupNames"));
        comboBox_groupNames->setEditable(true);

        horizontalLayout_20->addWidget(comboBox_groupNames);


        verticalLayout_3->addLayout(horizontalLayout_20);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_separator_sa = new QLabel(tab_simpleAscii);
        label_separator_sa->setObjectName(QStringLiteral("label_separator_sa"));
        label_separator_sa->setFont(font);

        horizontalLayout_16->addWidget(label_separator_sa);

        comboBox_separator_sa = new QComboBox(tab_simpleAscii);
        comboBox_separator_sa->setObjectName(QStringLiteral("comboBox_separator_sa"));

        horizontalLayout_16->addWidget(comboBox_separator_sa);


        verticalLayout_3->addLayout(horizontalLayout_16);

        checkBox_skipFirst_sa = new QCheckBox(tab_simpleAscii);
        checkBox_skipFirst_sa->setObjectName(QStringLiteral("checkBox_skipFirst_sa"));
        checkBox_skipFirst_sa->setFont(font);

        verticalLayout_3->addWidget(checkBox_skipFirst_sa);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_distanceUnit_sa = new QLabel(tab_simpleAscii);
        label_distanceUnit_sa->setObjectName(QStringLiteral("label_distanceUnit_sa"));
        label_distanceUnit_sa->setFont(font);

        horizontalLayout_9->addWidget(label_distanceUnit_sa);

        comboBox_distance_sa = new QComboBox(tab_simpleAscii);
        comboBox_distance_sa->setObjectName(QStringLiteral("comboBox_distance_sa"));

        horizontalLayout_9->addWidget(comboBox_distance_sa);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_angleUnit_sa = new QLabel(tab_simpleAscii);
        label_angleUnit_sa->setObjectName(QStringLiteral("label_angleUnit_sa"));
        label_angleUnit_sa->setFont(font);

        horizontalLayout_10->addWidget(label_angleUnit_sa);

        comboBox_angle_sa = new QComboBox(tab_simpleAscii);
        comboBox_angle_sa->setObjectName(QStringLiteral("comboBox_angle_sa"));

        horizontalLayout_10->addWidget(comboBox_angle_sa);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_temperatureUnit_sa = new QLabel(tab_simpleAscii);
        label_temperatureUnit_sa->setObjectName(QStringLiteral("label_temperatureUnit_sa"));
        label_temperatureUnit_sa->setFont(font);

        horizontalLayout_11->addWidget(label_temperatureUnit_sa);

        comboBox_temperature_sa = new QComboBox(tab_simpleAscii);
        comboBox_temperature_sa->setObjectName(QStringLiteral("comboBox_temperature_sa"));

        horizontalLayout_11->addWidget(comboBox_temperature_sa);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_10 = new QSpacerItem(228, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);


        horizontalLayout_21->addLayout(verticalLayout_3);

        tableView_columns_sa = new QTableView(tab_simpleAscii);
        tableView_columns_sa->setObjectName(QStringLiteral("tableView_columns_sa"));

        horizontalLayout_21->addWidget(tableView_columns_sa);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_21);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        pushButton_cancel_sa = new QPushButton(tab_simpleAscii);
        pushButton_cancel_sa->setObjectName(QStringLiteral("pushButton_cancel_sa"));

        horizontalLayout_12->addWidget(pushButton_cancel_sa);

        pushButton_import_sa = new QPushButton(tab_simpleAscii);
        pushButton_import_sa->setObjectName(QStringLiteral("pushButton_import_sa"));

        horizontalLayout_12->addWidget(pushButton_import_sa);


        verticalLayout_4->addLayout(horizontalLayout_12);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget_import->addTab(tab_simpleAscii, QString());

        gridLayout->addWidget(tabWidget_import, 0, 0, 1, 1);


        retranslateUi(ImportNominalDialog);

        tabWidget_import->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ImportNominalDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportNominalDialog)
    {
        ImportNominalDialog->setWindowTitle(QApplication::translate("ImportNominalDialog", "import nominals", 0));
        pushButton_file_sf->setText(QApplication::translate("ImportNominalDialog", "...", 0));
        label_plugin_sf->setText(QApplication::translate("ImportNominalDialog", "plugin:", 0));
        label_coordSys_sf->setText(QApplication::translate("ImportNominalDialog", "coordinate system:", 0));
        label_filter_sf->setText(QApplication::translate("ImportNominalDialog", "filter:", 0));
        label_unitDistance_sf->setText(QApplication::translate("ImportNominalDialog", "distance unit:", 0));
        label_unitAngle_sf->setText(QApplication::translate("ImportNominalDialog", "angle unit:", 0));
        label_unitTemperature_sf->setText(QApplication::translate("ImportNominalDialog", "temperature unit", 0));
        label_preview_sf->setText(QApplication::translate("ImportNominalDialog", "preview:", 0));
        pushButton_cancel_sf->setText(QApplication::translate("ImportNominalDialog", "cancel", 0));
        pushButton_import_sf->setText(QApplication::translate("ImportNominalDialog", "import", 0));
        tabWidget_import->setTabText(tabWidget_import->indexOf(tab_specialFormats), QApplication::translate("ImportNominalDialog", "special formats", 0));
        pushButton_file_sa->setText(QApplication::translate("ImportNominalDialog", "...", 0));
        label_plugin_sa->setText(QApplication::translate("ImportNominalDialog", "plugin:", 0));
        label_exchange_sa->setText(QApplication::translate("ImportNominalDialog", "exchange method:", 0));
        label_coordSys_sa->setText(QApplication::translate("ImportNominalDialog", "coordinate system:", 0));
        label_geometry_sa->setText(QApplication::translate("ImportNominalDialog", "geometry type:", 0));
        label_groups->setText(QApplication::translate("ImportNominalDialog", "group name:", 0));
        label_separator_sa->setText(QApplication::translate("ImportNominalDialog", "separator:", 0));
        checkBox_skipFirst_sa->setText(QApplication::translate("ImportNominalDialog", "skip the first line", 0));
        label_distanceUnit_sa->setText(QApplication::translate("ImportNominalDialog", "distance unit:", 0));
        label_angleUnit_sa->setText(QApplication::translate("ImportNominalDialog", "angle unit:", 0));
        label_temperatureUnit_sa->setText(QApplication::translate("ImportNominalDialog", "temperature unit:", 0));
        pushButton_cancel_sa->setText(QApplication::translate("ImportNominalDialog", "cancel", 0));
        pushButton_import_sa->setText(QApplication::translate("ImportNominalDialog", "import", 0));
        tabWidget_import->setTabText(tabWidget_import->indexOf(tab_simpleAscii), QApplication::translate("ImportNominalDialog", "simple ascii", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportNominalDialog: public Ui_ImportNominalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTNOMINALDIALOG_H
