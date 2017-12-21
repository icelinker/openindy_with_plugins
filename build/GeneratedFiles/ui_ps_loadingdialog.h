/********************************************************************************
** Form generated from reading UI file 'ps_loadingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PS_LOADINGDIALOG_H
#define UI_PS_LOADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PS_LoadingDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listwidget_msg;
    QProgressBar *progressBar_status;

    void setupUi(QDialog *PS_LoadingDialog)
    {
        if (PS_LoadingDialog->objectName().isEmpty())
            PS_LoadingDialog->setObjectName(QStringLiteral("PS_LoadingDialog"));
        PS_LoadingDialog->resize(400, 300);
        PS_LoadingDialog->setModal(true);
        gridLayout = new QGridLayout(PS_LoadingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listwidget_msg = new QListWidget(PS_LoadingDialog);
        listwidget_msg->setObjectName(QStringLiteral("listwidget_msg"));

        verticalLayout->addWidget(listwidget_msg);

        progressBar_status = new QProgressBar(PS_LoadingDialog);
        progressBar_status->setObjectName(QStringLiteral("progressBar_status"));
        progressBar_status->setValue(0);

        verticalLayout->addWidget(progressBar_status);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(PS_LoadingDialog);

        QMetaObject::connectSlotsByName(PS_LoadingDialog);
    } // setupUi

    void retranslateUi(QDialog *PS_LoadingDialog)
    {
        PS_LoadingDialog->setWindowTitle(QApplication::translate("PS_LoadingDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class PS_LoadingDialog: public Ui_PS_LoadingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PS_LOADINGDIALOG_H
