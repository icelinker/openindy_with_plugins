/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_settings;
    QWidget *tab_units;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_angleType;
    QComboBox *comboBox_angleType;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_distanceType;
    QComboBox *comboBox_distanceType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_temperatureType;
    QComboBox *comboBox_temperatureType;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_angleDigits;
    QLineEdit *lineEdit_angleDigits;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_distanceDigits;
    QLineEdit *lineEdit_distanceDigits;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_temperatureDigits;
    QLineEdit *lineEdit_temperatureDigits;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_others;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox_sounds;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(800, 600);
        SettingsDialog->setMinimumSize(QSize(800, 600));
        gridLayout_2 = new QGridLayout(SettingsDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget_settings = new QTabWidget(SettingsDialog);
        tabWidget_settings->setObjectName(QStringLiteral("tabWidget_settings"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget_settings->sizePolicy().hasHeightForWidth());
        tabWidget_settings->setSizePolicy(sizePolicy);
        tab_units = new QWidget();
        tab_units->setObjectName(QStringLiteral("tab_units"));
        gridLayout_4 = new QGridLayout(tab_units);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_angleType = new QLabel(tab_units);
        label_angleType->setObjectName(QStringLiteral("label_angleType"));

        horizontalLayout_2->addWidget(label_angleType);

        comboBox_angleType = new QComboBox(tab_units);
        comboBox_angleType->setObjectName(QStringLiteral("comboBox_angleType"));

        horizontalLayout_2->addWidget(comboBox_angleType);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_distanceType = new QLabel(tab_units);
        label_distanceType->setObjectName(QStringLiteral("label_distanceType"));

        horizontalLayout_3->addWidget(label_distanceType);

        comboBox_distanceType = new QComboBox(tab_units);
        comboBox_distanceType->setObjectName(QStringLiteral("comboBox_distanceType"));

        horizontalLayout_3->addWidget(comboBox_distanceType);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_temperatureType = new QLabel(tab_units);
        label_temperatureType->setObjectName(QStringLiteral("label_temperatureType"));

        horizontalLayout_4->addWidget(label_temperatureType);

        comboBox_temperatureType = new QComboBox(tab_units);
        comboBox_temperatureType->setObjectName(QStringLiteral("comboBox_temperatureType"));

        horizontalLayout_4->addWidget(comboBox_temperatureType);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_angleDigits = new QLabel(tab_units);
        label_angleDigits->setObjectName(QStringLiteral("label_angleDigits"));

        horizontalLayout_5->addWidget(label_angleDigits);

        lineEdit_angleDigits = new QLineEdit(tab_units);
        lineEdit_angleDigits->setObjectName(QStringLiteral("lineEdit_angleDigits"));

        horizontalLayout_5->addWidget(lineEdit_angleDigits);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_distanceDigits = new QLabel(tab_units);
        label_distanceDigits->setObjectName(QStringLiteral("label_distanceDigits"));

        horizontalLayout_6->addWidget(label_distanceDigits);

        lineEdit_distanceDigits = new QLineEdit(tab_units);
        lineEdit_distanceDigits->setObjectName(QStringLiteral("lineEdit_distanceDigits"));

        horizontalLayout_6->addWidget(lineEdit_distanceDigits);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_temperatureDigits = new QLabel(tab_units);
        label_temperatureDigits->setObjectName(QStringLiteral("label_temperatureDigits"));

        horizontalLayout_7->addWidget(label_temperatureDigits);

        lineEdit_temperatureDigits = new QLineEdit(tab_units);
        lineEdit_temperatureDigits->setObjectName(QStringLiteral("lineEdit_temperatureDigits"));

        horizontalLayout_7->addWidget(lineEdit_temperatureDigits);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget_settings->addTab(tab_units, QString());
        tab_others = new QWidget();
        tab_others->setObjectName(QStringLiteral("tab_others"));
        gridLayout_3 = new QGridLayout(tab_others);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        checkBox_sounds = new QCheckBox(tab_others);
        checkBox_sounds->setObjectName(QStringLiteral("checkBox_sounds"));
        checkBox_sounds->setChecked(true);

        gridLayout_3->addWidget(checkBox_sounds, 0, 0, 1, 1);

        tabWidget_settings->addTab(tab_others, QString());

        verticalLayout->addWidget(tabWidget_settings);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(SettingsDialog);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SettingsDialog);

        tabWidget_settings->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "settings", 0));
        label_angleType->setText(QApplication::translate("SettingsDialog", "angle display type", 0));
        label_distanceType->setText(QApplication::translate("SettingsDialog", "distance display type", 0));
        label_temperatureType->setText(QApplication::translate("SettingsDialog", "temperature display type", 0));
        label_angleDigits->setText(QApplication::translate("SettingsDialog", "angle display digits", 0));
        label_distanceDigits->setText(QApplication::translate("SettingsDialog", "distance display digits", 0));
        label_temperatureDigits->setText(QApplication::translate("SettingsDialog", "temperature display digits", 0));
        tabWidget_settings->setTabText(tabWidget_settings->indexOf(tab_units), QApplication::translate("SettingsDialog", "units", 0));
        checkBox_sounds->setText(QApplication::translate("SettingsDialog", "use sounds", 0));
        tabWidget_settings->setTabText(tabWidget_settings->indexOf(tab_others), QApplication::translate("SettingsDialog", "others", 0));
        pushButton_ok->setText(QApplication::translate("SettingsDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
