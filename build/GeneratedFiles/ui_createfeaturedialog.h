/********************************************************************************
** Form generated from reading UI file 'createfeaturedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFEATUREDIALOG_H
#define UI_CREATEFEATUREDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateFeatureDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_entityType;
    QComboBox *comboBox_entityType;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_group;
    QComboBox *comboBox_group;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_count;
    QSpinBox *spinBox_count;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_function;
    QComboBox *comboBox_function;
    QCheckBox *checkBox_common;
    QCheckBox *checkBox_actual;
    QCheckBox *checkBox_nominal;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_mConfig;
    QComboBox *comboBox_mConfig;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nominalSystem;
    QComboBox *comboBox_nominalSystem;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_startSystem;
    QComboBox *comboBox_startSystem;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_destinationSystem;
    QComboBox *comboBox_destinationSystem;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_cancel;
    QToolButton *toolButton_ok;

    void setupUi(QDialog *CreateFeatureDialog)
    {
        if (CreateFeatureDialog->objectName().isEmpty())
            CreateFeatureDialog->setObjectName(QStringLiteral("CreateFeatureDialog"));
        CreateFeatureDialog->resize(350, 474);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateFeatureDialog->sizePolicy().hasHeightForWidth());
        CreateFeatureDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CreateFeatureDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_entityType = new QLabel(CreateFeatureDialog);
        label_entityType->setObjectName(QStringLiteral("label_entityType"));

        horizontalLayout_9->addWidget(label_entityType);

        comboBox_entityType = new QComboBox(CreateFeatureDialog);
        comboBox_entityType->setObjectName(QStringLiteral("comboBox_entityType"));

        horizontalLayout_9->addWidget(comboBox_entityType);

        horizontalLayout_9->setStretch(0, 2);
        horizontalLayout_9->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_name = new QLabel(CreateFeatureDialog);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_2->addWidget(label_name);

        lineEdit_name = new QLineEdit(CreateFeatureDialog);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_group = new QLabel(CreateFeatureDialog);
        label_group->setObjectName(QStringLiteral("label_group"));

        horizontalLayout_7->addWidget(label_group);

        comboBox_group = new QComboBox(CreateFeatureDialog);
        comboBox_group->setObjectName(QStringLiteral("comboBox_group"));
        comboBox_group->setEditable(true);

        horizontalLayout_7->addWidget(comboBox_group);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_count = new QLabel(CreateFeatureDialog);
        label_count->setObjectName(QStringLiteral("label_count"));

        horizontalLayout_3->addWidget(label_count);

        spinBox_count = new QSpinBox(CreateFeatureDialog);
        spinBox_count->setObjectName(QStringLiteral("spinBox_count"));
        spinBox_count->setMinimum(1);
        spinBox_count->setMaximum(1000);

        horizontalLayout_3->addWidget(spinBox_count);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_function = new QLabel(CreateFeatureDialog);
        label_function->setObjectName(QStringLiteral("label_function"));

        horizontalLayout_8->addWidget(label_function);

        comboBox_function = new QComboBox(CreateFeatureDialog);
        comboBox_function->setObjectName(QStringLiteral("comboBox_function"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_function->sizePolicy().hasHeightForWidth());
        comboBox_function->setSizePolicy(sizePolicy1);
        comboBox_function->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_8->addWidget(comboBox_function);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox_common = new QCheckBox(CreateFeatureDialog);
        checkBox_common->setObjectName(QStringLiteral("checkBox_common"));

        verticalLayout_2->addWidget(checkBox_common);

        checkBox_actual = new QCheckBox(CreateFeatureDialog);
        checkBox_actual->setObjectName(QStringLiteral("checkBox_actual"));
        checkBox_actual->setChecked(true);

        verticalLayout_2->addWidget(checkBox_actual);

        checkBox_nominal = new QCheckBox(CreateFeatureDialog);
        checkBox_nominal->setObjectName(QStringLiteral("checkBox_nominal"));

        verticalLayout_2->addWidget(checkBox_nominal);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_mConfig = new QLabel(CreateFeatureDialog);
        label_mConfig->setObjectName(QStringLiteral("label_mConfig"));

        horizontalLayout_10->addWidget(label_mConfig);

        comboBox_mConfig = new QComboBox(CreateFeatureDialog);
        comboBox_mConfig->setObjectName(QStringLiteral("comboBox_mConfig"));

        horizontalLayout_10->addWidget(comboBox_mConfig);

        horizontalLayout_10->setStretch(0, 2);
        horizontalLayout_10->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_nominalSystem = new QLabel(CreateFeatureDialog);
        label_nominalSystem->setObjectName(QStringLiteral("label_nominalSystem"));

        horizontalLayout_4->addWidget(label_nominalSystem);

        comboBox_nominalSystem = new QComboBox(CreateFeatureDialog);
        comboBox_nominalSystem->setObjectName(QStringLiteral("comboBox_nominalSystem"));

        horizontalLayout_4->addWidget(comboBox_nominalSystem);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_startSystem = new QLabel(CreateFeatureDialog);
        label_startSystem->setObjectName(QStringLiteral("label_startSystem"));

        horizontalLayout_5->addWidget(label_startSystem);

        comboBox_startSystem = new QComboBox(CreateFeatureDialog);
        comboBox_startSystem->setObjectName(QStringLiteral("comboBox_startSystem"));

        horizontalLayout_5->addWidget(comboBox_startSystem);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 3);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_destinationSystem = new QLabel(CreateFeatureDialog);
        label_destinationSystem->setObjectName(QStringLiteral("label_destinationSystem"));

        horizontalLayout_6->addWidget(label_destinationSystem);

        comboBox_destinationSystem = new QComboBox(CreateFeatureDialog);
        comboBox_destinationSystem->setObjectName(QStringLiteral("comboBox_destinationSystem"));

        horizontalLayout_6->addWidget(comboBox_destinationSystem);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 3);

        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_cancel = new QToolButton(CreateFeatureDialog);
        toolButton_cancel->setObjectName(QStringLiteral("toolButton_cancel"));

        horizontalLayout->addWidget(toolButton_cancel);

        toolButton_ok = new QToolButton(CreateFeatureDialog);
        toolButton_ok->setObjectName(QStringLiteral("toolButton_ok"));

        horizontalLayout->addWidget(toolButton_ok);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(CreateFeatureDialog);

        QMetaObject::connectSlotsByName(CreateFeatureDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateFeatureDialog)
    {
        CreateFeatureDialog->setWindowTitle(QApplication::translate("CreateFeatureDialog", "Dialog", 0));
        label_entityType->setText(QApplication::translate("CreateFeatureDialog", "type:", 0));
        label_name->setText(QApplication::translate("CreateFeatureDialog", "name:", 0));
        lineEdit_name->setPlaceholderText(QString());
        label_group->setText(QApplication::translate("CreateFeatureDialog", "group: ", 0));
        label_count->setText(QApplication::translate("CreateFeatureDialog", "count:", 0));
        label_function->setText(QApplication::translate("CreateFeatureDialog", "function:", 0));
        checkBox_common->setText(QApplication::translate("CreateFeatureDialog", "common", 0));
        checkBox_actual->setText(QApplication::translate("CreateFeatureDialog", "actual", 0));
        checkBox_nominal->setText(QApplication::translate("CreateFeatureDialog", "nominal", 0));
        label_mConfig->setText(QApplication::translate("CreateFeatureDialog", "measurement config:", 0));
        label_nominalSystem->setText(QApplication::translate("CreateFeatureDialog", "nominal system", 0));
        label_startSystem->setText(QApplication::translate("CreateFeatureDialog", "start system", 0));
        label_destinationSystem->setText(QApplication::translate("CreateFeatureDialog", "destination system", 0));
        toolButton_cancel->setText(QApplication::translate("CreateFeatureDialog", "cancel", 0));
        toolButton_ok->setText(QApplication::translate("CreateFeatureDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateFeatureDialog: public Ui_CreateFeatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFEATUREDIALOG_H
