/********************************************************************************
** Form generated from reading UI file 'measurementconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTCONFIGURATIONDIALOG_H
#define UI_MEASUREMENTCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementConfigurationDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_showAll;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_add;
    QListView *listView_measurementConfigs;
    QWidget *widget_measurementConfigValues;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_config;
    QLabel *label_configName;
    QFrame *line;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_numMeas;
    QLineEdit *lineEdit_numMeas;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_iterations;
    QLineEdit *lineEdit_iterations;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_readingType;
    QComboBox *comboBox_readingType;
    QCheckBox *checkBox_twoFace;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_timeDependent;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_timeInterval;
    QLineEdit *lineEdit_timeInterval;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_distanceDependent;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_distanceInterval;
    QLineEdit *lineEdit_distancInterval;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_set;

    void setupUi(QDialog *MeasurementConfigurationDialog)
    {
        if (MeasurementConfigurationDialog->objectName().isEmpty())
            MeasurementConfigurationDialog->setObjectName(QStringLiteral("MeasurementConfigurationDialog"));
        MeasurementConfigurationDialog->resize(638, 459);
        MeasurementConfigurationDialog->setMinimumSize(QSize(638, 459));
        MeasurementConfigurationDialog->setModal(true);
        gridLayout = new QGridLayout(MeasurementConfigurationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBox_showAll = new QCheckBox(MeasurementConfigurationDialog);
        checkBox_showAll->setObjectName(QStringLiteral("checkBox_showAll"));

        horizontalLayout_5->addWidget(checkBox_showAll);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_add = new QPushButton(MeasurementConfigurationDialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton_add);


        verticalLayout_5->addLayout(horizontalLayout_5);

        listView_measurementConfigs = new QListView(MeasurementConfigurationDialog);
        listView_measurementConfigs->setObjectName(QStringLiteral("listView_measurementConfigs"));
        listView_measurementConfigs->setEditTriggers(QAbstractItemView::DoubleClicked);

        verticalLayout_5->addWidget(listView_measurementConfigs);


        horizontalLayout_9->addLayout(verticalLayout_5);

        widget_measurementConfigValues = new QWidget(MeasurementConfigurationDialog);
        widget_measurementConfigValues->setObjectName(QStringLiteral("widget_measurementConfigValues"));
        verticalLayout_4 = new QVBoxLayout(widget_measurementConfigValues);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_config = new QLabel(widget_measurementConfigValues);
        label_config->setObjectName(QStringLiteral("label_config"));

        horizontalLayout_7->addWidget(label_config);

        label_configName = new QLabel(widget_measurementConfigValues);
        label_configName->setObjectName(QStringLiteral("label_configName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_configName->setFont(font);
        label_configName->setIndent(2);

        horizontalLayout_7->addWidget(label_configName);

        horizontalLayout_7->setStretch(0, 8);
        horizontalLayout_7->setStretch(1, 7);

        verticalLayout_4->addLayout(horizontalLayout_7);

        line = new QFrame(widget_measurementConfigValues);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_numMeas = new QLabel(widget_measurementConfigValues);
        label_numMeas->setObjectName(QStringLiteral("label_numMeas"));

        horizontalLayout_2->addWidget(label_numMeas);

        lineEdit_numMeas = new QLineEdit(widget_measurementConfigValues);
        lineEdit_numMeas->setObjectName(QStringLiteral("lineEdit_numMeas"));

        horizontalLayout_2->addWidget(lineEdit_numMeas);

        horizontalLayout_2->setStretch(0, 8);
        horizontalLayout_2->setStretch(1, 7);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_iterations = new QLabel(widget_measurementConfigValues);
        label_iterations->setObjectName(QStringLiteral("label_iterations"));

        horizontalLayout_3->addWidget(label_iterations);

        lineEdit_iterations = new QLineEdit(widget_measurementConfigValues);
        lineEdit_iterations->setObjectName(QStringLiteral("lineEdit_iterations"));

        horizontalLayout_3->addWidget(lineEdit_iterations);

        horizontalLayout_3->setStretch(0, 8);
        horizontalLayout_3->setStretch(1, 7);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_readingType = new QLabel(widget_measurementConfigValues);
        label_readingType->setObjectName(QStringLiteral("label_readingType"));

        horizontalLayout_4->addWidget(label_readingType);

        comboBox_readingType = new QComboBox(widget_measurementConfigValues);
        comboBox_readingType->setObjectName(QStringLiteral("comboBox_readingType"));

        horizontalLayout_4->addWidget(comboBox_readingType);

        horizontalLayout_4->setStretch(0, 8);
        horizontalLayout_4->setStretch(1, 7);

        verticalLayout_3->addLayout(horizontalLayout_4);

        checkBox_twoFace = new QCheckBox(widget_measurementConfigValues);
        checkBox_twoFace->setObjectName(QStringLiteral("checkBox_twoFace"));

        verticalLayout_3->addWidget(checkBox_twoFace);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_timeDependent = new QCheckBox(widget_measurementConfigValues);
        checkBox_timeDependent->setObjectName(QStringLiteral("checkBox_timeDependent"));

        verticalLayout_2->addWidget(checkBox_timeDependent);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_timeInterval = new QLabel(widget_measurementConfigValues);
        label_timeInterval->setObjectName(QStringLiteral("label_timeInterval"));

        horizontalLayout_6->addWidget(label_timeInterval);

        lineEdit_timeInterval = new QLineEdit(widget_measurementConfigValues);
        lineEdit_timeInterval->setObjectName(QStringLiteral("lineEdit_timeInterval"));

        horizontalLayout_6->addWidget(lineEdit_timeInterval);

        horizontalLayout_6->setStretch(0, 8);
        horizontalLayout_6->setStretch(1, 7);

        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_distanceDependent = new QCheckBox(widget_measurementConfigValues);
        checkBox_distanceDependent->setObjectName(QStringLiteral("checkBox_distanceDependent"));

        verticalLayout->addWidget(checkBox_distanceDependent);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_distanceInterval = new QLabel(widget_measurementConfigValues);
        label_distanceInterval->setObjectName(QStringLiteral("label_distanceInterval"));

        horizontalLayout_8->addWidget(label_distanceInterval);

        lineEdit_distancInterval = new QLineEdit(widget_measurementConfigValues);
        lineEdit_distancInterval->setObjectName(QStringLiteral("lineEdit_distancInterval"));

        horizontalLayout_8->addWidget(lineEdit_distancInterval);

        horizontalLayout_8->setStretch(0, 8);
        horizontalLayout_8->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_9->addWidget(widget_measurementConfigValues);


        gridLayout->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_set = new QPushButton(MeasurementConfigurationDialog);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));

        horizontalLayout->addWidget(pushButton_set);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(MeasurementConfigurationDialog);

        QMetaObject::connectSlotsByName(MeasurementConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *MeasurementConfigurationDialog)
    {
        MeasurementConfigurationDialog->setWindowTitle(QApplication::translate("MeasurementConfigurationDialog", "measurement configuration", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_showAll->setToolTip(QApplication::translate("MeasurementConfigurationDialog", "show project sensor configs", 0));
#endif // QT_NO_TOOLTIP
        checkBox_showAll->setText(QApplication::translate("MeasurementConfigurationDialog", "show all", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_add->setToolTip(QApplication::translate("MeasurementConfigurationDialog", "add new measurement configuration", 0));
#endif // QT_NO_TOOLTIP
        pushButton_add->setText(QString());
        label_config->setText(QApplication::translate("MeasurementConfigurationDialog", "selected config:", 0));
        label_configName->setText(QString());
        label_numMeas->setText(QApplication::translate("MeasurementConfigurationDialog", "number of measurements:", 0));
        lineEdit_numMeas->setText(QApplication::translate("MeasurementConfigurationDialog", "500", 0));
        label_iterations->setText(QApplication::translate("MeasurementConfigurationDialog", "iterations:", 0));
        lineEdit_iterations->setText(QApplication::translate("MeasurementConfigurationDialog", "1", 0));
        label_readingType->setText(QApplication::translate("MeasurementConfigurationDialog", "type of reading:", 0));
        checkBox_twoFace->setText(QApplication::translate("MeasurementConfigurationDialog", "two face measurement", 0));
        checkBox_timeDependent->setText(QApplication::translate("MeasurementConfigurationDialog", "time dependent measurement", 0));
        label_timeInterval->setText(QApplication::translate("MeasurementConfigurationDialog", "time interval [sec]:", 0));
        lineEdit_timeInterval->setText(QApplication::translate("MeasurementConfigurationDialog", "0", 0));
        checkBox_distanceDependent->setText(QApplication::translate("MeasurementConfigurationDialog", "distance dependent measurement", 0));
        label_distanceInterval->setText(QApplication::translate("MeasurementConfigurationDialog", "distance interval [m]:", 0));
        lineEdit_distancInterval->setText(QApplication::translate("MeasurementConfigurationDialog", "0", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_set->setToolTip(QApplication::translate("MeasurementConfigurationDialog", "set the selected config for the active feature", 0));
#endif // QT_NO_TOOLTIP
        pushButton_set->setText(QApplication::translate("MeasurementConfigurationDialog", "set", 0));
    } // retranslateUi

};

namespace Ui {
    class MeasurementConfigurationDialog: public Ui_MeasurementConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTCONFIGURATIONDIALOG_H
