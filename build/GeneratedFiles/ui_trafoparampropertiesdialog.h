/********************************************************************************
** Form generated from reading UI file 'trafoparampropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAFOPARAMPROPERTIESDIALOG_H
#define UI_TRAFOPARAMPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrafoParamPropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_tx;
    QLineEdit *lineEdit_tx;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_ty;
    QLineEdit *lineEdit_ty;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_tz;
    QLineEdit *lineEdit_tz;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_rx;
    QLineEdit *lineEdit_rx;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_ry;
    QLineEdit *lineEdit_ry;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_rz;
    QLineEdit *lineEdit_rz;
    QCheckBox *checkBox_sxsysz;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_sx;
    QLineEdit *lineEdit_sx;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_sy;
    QLineEdit *lineEdit_sy;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_sz;
    QLineEdit *lineEdit_sz;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_cancel;
    QToolButton *toolButton_ok;

    void setupUi(QDialog *TrafoParamPropertiesDialog)
    {
        if (TrafoParamPropertiesDialog->objectName().isEmpty())
            TrafoParamPropertiesDialog->setObjectName(QStringLiteral("TrafoParamPropertiesDialog"));
        TrafoParamPropertiesDialog->resize(366, 337);
        gridLayout = new QGridLayout(TrafoParamPropertiesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_tx = new QLabel(TrafoParamPropertiesDialog);
        label_tx->setObjectName(QStringLiteral("label_tx"));

        horizontalLayout_2->addWidget(label_tx);

        lineEdit_tx = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_tx->setObjectName(QStringLiteral("lineEdit_tx"));

        horizontalLayout_2->addWidget(lineEdit_tx);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_ty = new QLabel(TrafoParamPropertiesDialog);
        label_ty->setObjectName(QStringLiteral("label_ty"));

        horizontalLayout_3->addWidget(label_ty);

        lineEdit_ty = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_ty->setObjectName(QStringLiteral("lineEdit_ty"));

        horizontalLayout_3->addWidget(lineEdit_ty);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_tz = new QLabel(TrafoParamPropertiesDialog);
        label_tz->setObjectName(QStringLiteral("label_tz"));

        horizontalLayout_4->addWidget(label_tz);

        lineEdit_tz = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_tz->setObjectName(QStringLiteral("lineEdit_tz"));

        horizontalLayout_4->addWidget(lineEdit_tz);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_rx = new QLabel(TrafoParamPropertiesDialog);
        label_rx->setObjectName(QStringLiteral("label_rx"));

        horizontalLayout_5->addWidget(label_rx);

        lineEdit_rx = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_rx->setObjectName(QStringLiteral("lineEdit_rx"));

        horizontalLayout_5->addWidget(lineEdit_rx);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_ry = new QLabel(TrafoParamPropertiesDialog);
        label_ry->setObjectName(QStringLiteral("label_ry"));

        horizontalLayout_6->addWidget(label_ry);

        lineEdit_ry = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_ry->setObjectName(QStringLiteral("lineEdit_ry"));

        horizontalLayout_6->addWidget(lineEdit_ry);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_rz = new QLabel(TrafoParamPropertiesDialog);
        label_rz->setObjectName(QStringLiteral("label_rz"));

        horizontalLayout_7->addWidget(label_rz);

        lineEdit_rz = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_rz->setObjectName(QStringLiteral("lineEdit_rz"));

        horizontalLayout_7->addWidget(lineEdit_rz);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        checkBox_sxsysz = new QCheckBox(TrafoParamPropertiesDialog);
        checkBox_sxsysz->setObjectName(QStringLiteral("checkBox_sxsysz"));

        verticalLayout->addWidget(checkBox_sxsysz);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_sx = new QLabel(TrafoParamPropertiesDialog);
        label_sx->setObjectName(QStringLiteral("label_sx"));

        horizontalLayout_8->addWidget(label_sx);

        lineEdit_sx = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_sx->setObjectName(QStringLiteral("lineEdit_sx"));

        horizontalLayout_8->addWidget(lineEdit_sx);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_sy = new QLabel(TrafoParamPropertiesDialog);
        label_sy->setObjectName(QStringLiteral("label_sy"));

        horizontalLayout_9->addWidget(label_sy);

        lineEdit_sy = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_sy->setObjectName(QStringLiteral("lineEdit_sy"));

        horizontalLayout_9->addWidget(lineEdit_sy);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_sz = new QLabel(TrafoParamPropertiesDialog);
        label_sz->setObjectName(QStringLiteral("label_sz"));

        horizontalLayout_10->addWidget(label_sz);

        lineEdit_sz = new QLineEdit(TrafoParamPropertiesDialog);
        lineEdit_sz->setObjectName(QStringLiteral("lineEdit_sz"));

        horizontalLayout_10->addWidget(lineEdit_sz);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_cancel = new QToolButton(TrafoParamPropertiesDialog);
        toolButton_cancel->setObjectName(QStringLiteral("toolButton_cancel"));

        horizontalLayout->addWidget(toolButton_cancel);

        toolButton_ok = new QToolButton(TrafoParamPropertiesDialog);
        toolButton_ok->setObjectName(QStringLiteral("toolButton_ok"));

        horizontalLayout->addWidget(toolButton_ok);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(TrafoParamPropertiesDialog);

        QMetaObject::connectSlotsByName(TrafoParamPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *TrafoParamPropertiesDialog)
    {
        TrafoParamPropertiesDialog->setWindowTitle(QApplication::translate("TrafoParamPropertiesDialog", "Transformation parameter", 0));
        label_tx->setText(QApplication::translate("TrafoParamPropertiesDialog", "translation tx:", 0));
        label_ty->setText(QApplication::translate("TrafoParamPropertiesDialog", "translation ty:", 0));
        label_tz->setText(QApplication::translate("TrafoParamPropertiesDialog", "translation tz:", 0));
        label_rx->setText(QApplication::translate("TrafoParamPropertiesDialog", "rotation rx:", 0));
        label_ry->setText(QApplication::translate("TrafoParamPropertiesDialog", "rotation ry:", 0));
        label_rz->setText(QApplication::translate("TrafoParamPropertiesDialog", "rotation rz:", 0));
        checkBox_sxsysz->setText(QApplication::translate("TrafoParamPropertiesDialog", "sx = sy = sz", 0));
        label_sx->setText(QApplication::translate("TrafoParamPropertiesDialog", "scale sx:", 0));
        label_sy->setText(QApplication::translate("TrafoParamPropertiesDialog", "scale sy:", 0));
        label_sz->setText(QApplication::translate("TrafoParamPropertiesDialog", "scale sz:", 0));
        toolButton_cancel->setText(QApplication::translate("TrafoParamPropertiesDialog", "cancel", 0));
        toolButton_ok->setText(QApplication::translate("TrafoParamPropertiesDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class TrafoParamPropertiesDialog: public Ui_TrafoParamPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAFOPARAMPROPERTIESDIALOG_H
