/********************************************************************************
** Form generated from reading UI file 'sensortaskinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORTASKINFODIALOG_H
#define UI_SENSORTASKINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SensorTaskInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_info;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *SensorTaskInfoDialog)
    {
        if (SensorTaskInfoDialog->objectName().isEmpty())
            SensorTaskInfoDialog->setObjectName(QStringLiteral("SensorTaskInfoDialog"));
        SensorTaskInfoDialog->resize(200, 100);
        verticalLayout = new QVBoxLayout(SensorTaskInfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_info = new QLabel(SensorTaskInfoDialog);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_info);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(SensorTaskInfoDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 12);
        verticalLayout->setStretch(1, 1);

        retranslateUi(SensorTaskInfoDialog);

        QMetaObject::connectSlotsByName(SensorTaskInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *SensorTaskInfoDialog)
    {
        SensorTaskInfoDialog->setWindowTitle(QApplication::translate("SensorTaskInfoDialog", "sensor info", 0));
        label_info->setText(QApplication::translate("SensorTaskInfoDialog", "TextLabel", 0));
        pushButton_cancel->setText(QApplication::translate("SensorTaskInfoDialog", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SensorTaskInfoDialog: public Ui_SensorTaskInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORTASKINFODIALOG_H
