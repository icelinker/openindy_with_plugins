/********************************************************************************
** Form generated from reading UI file 'watchwindowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHWINDOWDIALOG_H
#define UI_WATCHWINDOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchWindowDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QToolBox *toolBox;
    QWidget *pageWatchWindow;
    QWidget *pageWatchWindowSettings;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_decimalDigits;
    QSpinBox *spinBox_decimalDigits;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_suppReadings;
    QComboBox *comboBox_readingTypes;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_polarMode;
    QComboBox *comboBox_polarMode;
    QGroupBox *groupBox_reference;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_actnom;
    QRadioButton *radioButton_nomact;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_displayValues;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_x;
    QSpacerItem *horizontalSpacer;
    QLabel *label_x;
    QLineEdit *lineEdit_x;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_y;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_y;
    QLineEdit *lineEdit_y;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_z;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_z;
    QLineEdit *lineEdit_z;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_d3d;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_d3d;
    QLineEdit *lineEdit_d3d;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_azimuth;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_azimuth;
    QLineEdit *lineEdit_azimuth;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_zenith;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_zenith;
    QLineEdit *lineEdit_zenith;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_distance;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_distance;
    QLineEdit *lineEdit_distance;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *WatchWindowDialog)
    {
        if (WatchWindowDialog->objectName().isEmpty())
            WatchWindowDialog->setObjectName(QStringLiteral("WatchWindowDialog"));
        WatchWindowDialog->setWindowModality(Qt::WindowModal);
        WatchWindowDialog->resize(600, 400);
        WatchWindowDialog->setMinimumSize(QSize(600, 400));
        verticalLayout_4 = new QVBoxLayout(WatchWindowDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        toolBox = new QToolBox(WatchWindowDialog);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        pageWatchWindow = new QWidget();
        pageWatchWindow->setObjectName(QStringLiteral("pageWatchWindow"));
        pageWatchWindow->setGeometry(QRect(0, 0, 578, 316));
        toolBox->addItem(pageWatchWindow, QStringLiteral("Watchwindow"));
        pageWatchWindowSettings = new QWidget();
        pageWatchWindowSettings->setObjectName(QStringLiteral("pageWatchWindowSettings"));
        pageWatchWindowSettings->setGeometry(QRect(0, 0, 578, 316));
        gridLayout_3 = new QGridLayout(pageWatchWindowSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_decimalDigits = new QLabel(pageWatchWindowSettings);
        label_decimalDigits->setObjectName(QStringLiteral("label_decimalDigits"));

        horizontalLayout_8->addWidget(label_decimalDigits);

        spinBox_decimalDigits = new QSpinBox(pageWatchWindowSettings);
        spinBox_decimalDigits->setObjectName(QStringLiteral("spinBox_decimalDigits"));
        spinBox_decimalDigits->setMinimum(1);
        spinBox_decimalDigits->setMaximum(6);
        spinBox_decimalDigits->setValue(2);

        horizontalLayout_8->addWidget(spinBox_decimalDigits);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_suppReadings = new QLabel(pageWatchWindowSettings);
        label_suppReadings->setObjectName(QStringLiteral("label_suppReadings"));

        horizontalLayout_9->addWidget(label_suppReadings);

        comboBox_readingTypes = new QComboBox(pageWatchWindowSettings);
        comboBox_readingTypes->setObjectName(QStringLiteral("comboBox_readingTypes"));

        horizontalLayout_9->addWidget(comboBox_readingTypes);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_polarMode = new QLabel(pageWatchWindowSettings);
        label_polarMode->setObjectName(QStringLiteral("label_polarMode"));

        horizontalLayout_10->addWidget(label_polarMode);

        comboBox_polarMode = new QComboBox(pageWatchWindowSettings);
        comboBox_polarMode->setObjectName(QStringLiteral("comboBox_polarMode"));

        horizontalLayout_10->addWidget(comboBox_polarMode);


        verticalLayout_3->addLayout(horizontalLayout_10);

        groupBox_reference = new QGroupBox(pageWatchWindowSettings);
        groupBox_reference->setObjectName(QStringLiteral("groupBox_reference"));
        gridLayout_2 = new QGridLayout(groupBox_reference);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_actnom = new QRadioButton(groupBox_reference);
        radioButton_actnom->setObjectName(QStringLiteral("radioButton_actnom"));
        radioButton_actnom->setChecked(true);

        verticalLayout_2->addWidget(radioButton_actnom);

        radioButton_nomact = new QRadioButton(groupBox_reference);
        radioButton_nomact->setObjectName(QStringLiteral("radioButton_nomact"));

        verticalLayout_2->addWidget(radioButton_nomact);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_reference);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_11->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_displayValues = new QGroupBox(pageWatchWindowSettings);
        groupBox_displayValues->setObjectName(QStringLiteral("groupBox_displayValues"));
        gridLayout = new QGridLayout(groupBox_displayValues);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox_x = new QCheckBox(groupBox_displayValues);
        checkBox_x->setObjectName(QStringLiteral("checkBox_x"));
        checkBox_x->setChecked(true);

        horizontalLayout->addWidget(checkBox_x);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_x = new QLabel(groupBox_displayValues);
        label_x->setObjectName(QStringLiteral("label_x"));

        horizontalLayout->addWidget(label_x);

        lineEdit_x = new QLineEdit(groupBox_displayValues);
        lineEdit_x->setObjectName(QStringLiteral("lineEdit_x"));

        horizontalLayout->addWidget(lineEdit_x);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_y = new QCheckBox(groupBox_displayValues);
        checkBox_y->setObjectName(QStringLiteral("checkBox_y"));
        checkBox_y->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_y);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_y = new QLabel(groupBox_displayValues);
        label_y->setObjectName(QStringLiteral("label_y"));

        horizontalLayout_2->addWidget(label_y);

        lineEdit_y = new QLineEdit(groupBox_displayValues);
        lineEdit_y->setObjectName(QStringLiteral("lineEdit_y"));

        horizontalLayout_2->addWidget(lineEdit_y);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox_z = new QCheckBox(groupBox_displayValues);
        checkBox_z->setObjectName(QStringLiteral("checkBox_z"));
        checkBox_z->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_z);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_z = new QLabel(groupBox_displayValues);
        label_z->setObjectName(QStringLiteral("label_z"));

        horizontalLayout_3->addWidget(label_z);

        lineEdit_z = new QLineEdit(groupBox_displayValues);
        lineEdit_z->setObjectName(QStringLiteral("lineEdit_z"));

        horizontalLayout_3->addWidget(lineEdit_z);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_d3d = new QCheckBox(groupBox_displayValues);
        checkBox_d3d->setObjectName(QStringLiteral("checkBox_d3d"));
        checkBox_d3d->setChecked(true);

        horizontalLayout_4->addWidget(checkBox_d3d);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_d3d = new QLabel(groupBox_displayValues);
        label_d3d->setObjectName(QStringLiteral("label_d3d"));

        horizontalLayout_4->addWidget(label_d3d);

        lineEdit_d3d = new QLineEdit(groupBox_displayValues);
        lineEdit_d3d->setObjectName(QStringLiteral("lineEdit_d3d"));

        horizontalLayout_4->addWidget(lineEdit_d3d);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBox_azimuth = new QCheckBox(groupBox_displayValues);
        checkBox_azimuth->setObjectName(QStringLiteral("checkBox_azimuth"));
        checkBox_azimuth->setChecked(true);

        horizontalLayout_5->addWidget(checkBox_azimuth);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_azimuth = new QLabel(groupBox_displayValues);
        label_azimuth->setObjectName(QStringLiteral("label_azimuth"));

        horizontalLayout_5->addWidget(label_azimuth);

        lineEdit_azimuth = new QLineEdit(groupBox_displayValues);
        lineEdit_azimuth->setObjectName(QStringLiteral("lineEdit_azimuth"));

        horizontalLayout_5->addWidget(lineEdit_azimuth);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBox_zenith = new QCheckBox(groupBox_displayValues);
        checkBox_zenith->setObjectName(QStringLiteral("checkBox_zenith"));
        checkBox_zenith->setChecked(true);

        horizontalLayout_6->addWidget(checkBox_zenith);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_zenith = new QLabel(groupBox_displayValues);
        label_zenith->setObjectName(QStringLiteral("label_zenith"));

        horizontalLayout_6->addWidget(label_zenith);

        lineEdit_zenith = new QLineEdit(groupBox_displayValues);
        lineEdit_zenith->setObjectName(QStringLiteral("lineEdit_zenith"));

        horizontalLayout_6->addWidget(lineEdit_zenith);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        checkBox_distance = new QCheckBox(groupBox_displayValues);
        checkBox_distance->setObjectName(QStringLiteral("checkBox_distance"));
        checkBox_distance->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_distance);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_distance = new QLabel(groupBox_displayValues);
        label_distance->setObjectName(QStringLiteral("label_distance"));

        horizontalLayout_7->addWidget(label_distance);

        lineEdit_distance = new QLineEdit(groupBox_displayValues);
        lineEdit_distance->setObjectName(QStringLiteral("lineEdit_distance"));

        horizontalLayout_7->addWidget(lineEdit_distance);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_displayValues);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout_11->addLayout(verticalLayout_5);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);

        gridLayout_3->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        toolBox->addItem(pageWatchWindowSettings, QStringLiteral("settings"));

        verticalLayout_4->addWidget(toolBox);


        retranslateUi(WatchWindowDialog);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WatchWindowDialog);
    } // setupUi

    void retranslateUi(QDialog *WatchWindowDialog)
    {
        WatchWindowDialog->setWindowTitle(QApplication::translate("WatchWindowDialog", "watch window", 0));
        toolBox->setItemText(toolBox->indexOf(pageWatchWindow), QApplication::translate("WatchWindowDialog", "Watchwindow", 0));
        label_decimalDigits->setText(QApplication::translate("WatchWindowDialog", "decimal digits:", 0));
        label_suppReadings->setText(QApplication::translate("WatchWindowDialog", "supported reading types:", 0));
        label_polarMode->setText(QApplication::translate("WatchWindowDialog", "polar mode:", 0));
        groupBox_reference->setTitle(QApplication::translate("WatchWindowDialog", "reference", 0));
        radioButton_actnom->setText(QApplication::translate("WatchWindowDialog", "actual - nominal", 0));
        radioButton_nomact->setText(QApplication::translate("WatchWindowDialog", "nominal - actual", 0));
        groupBox_displayValues->setTitle(QApplication::translate("WatchWindowDialog", "display values", 0));
        checkBox_x->setText(QApplication::translate("WatchWindowDialog", "x", 0));
        label_x->setText(QApplication::translate("WatchWindowDialog", "tolerance [mm]", 0));
        lineEdit_x->setText(QApplication::translate("WatchWindowDialog", "0.1", 0));
        checkBox_y->setText(QApplication::translate("WatchWindowDialog", "y", 0));
        label_y->setText(QApplication::translate("WatchWindowDialog", "tolerance [mm]", 0));
        lineEdit_y->setText(QApplication::translate("WatchWindowDialog", "0.1", 0));
        checkBox_z->setText(QApplication::translate("WatchWindowDialog", "z", 0));
        label_z->setText(QApplication::translate("WatchWindowDialog", "tolerance [mm]", 0));
        lineEdit_z->setText(QApplication::translate("WatchWindowDialog", "0.1", 0));
        checkBox_d3d->setText(QApplication::translate("WatchWindowDialog", "d3D", 0));
        label_d3d->setText(QApplication::translate("WatchWindowDialog", "tolerance [mm]", 0));
        lineEdit_d3d->setText(QApplication::translate("WatchWindowDialog", "0.1", 0));
        checkBox_azimuth->setText(QApplication::translate("WatchWindowDialog", "azimuth", 0));
        label_azimuth->setText(QApplication::translate("WatchWindowDialog", "tolerance [\302\260]", 0));
        lineEdit_azimuth->setText(QApplication::translate("WatchWindowDialog", "1.0", 0));
        checkBox_zenith->setText(QApplication::translate("WatchWindowDialog", "zenith", 0));
        label_zenith->setText(QApplication::translate("WatchWindowDialog", "tolerance [\302\260]", 0));
        lineEdit_zenith->setText(QApplication::translate("WatchWindowDialog", "1.0", 0));
        checkBox_distance->setText(QApplication::translate("WatchWindowDialog", "distance", 0));
        label_distance->setText(QApplication::translate("WatchWindowDialog", "tolerance [mm]", 0));
        lineEdit_distance->setText(QApplication::translate("WatchWindowDialog", "0.1", 0));
        toolBox->setItemText(toolBox->indexOf(pageWatchWindowSettings), QApplication::translate("WatchWindowDialog", "settings", 0));
    } // retranslateUi

};

namespace Ui {
    class WatchWindowDialog: public Ui_WatchWindowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHWINDOWDIALOG_H
