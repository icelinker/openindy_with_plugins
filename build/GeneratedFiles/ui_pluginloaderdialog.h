/********************************************************************************
** Form generated from reading UI file 'pluginloaderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINLOADERDIALOG_H
#define UI_PLUGINLOADERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginLoaderDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QToolBox *toolBox_Overview;
    QWidget *page_local;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_PluginType;
    QLabel *lbl_Name;
    QLabel *lbl_Path;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_pluginType;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_Path;
    QToolButton *toolButton_Path;
    QFrame *line;
    QGroupBox *groupBox_Description;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_description;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Ok;
    QWidget *page_2;

    void setupUi(QDialog *PluginLoaderDialog)
    {
        if (PluginLoaderDialog->objectName().isEmpty())
            PluginLoaderDialog->setObjectName(QStringLiteral("PluginLoaderDialog"));
        PluginLoaderDialog->setWindowModality(Qt::NonModal);
        PluginLoaderDialog->resize(613, 685);
        verticalLayout_5 = new QVBoxLayout(PluginLoaderDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        toolBox_Overview = new QToolBox(PluginLoaderDialog);
        toolBox_Overview->setObjectName(QStringLiteral("toolBox_Overview"));
        page_local = new QWidget();
        page_local->setObjectName(QStringLiteral("page_local"));
        page_local->setGeometry(QRect(0, 0, 595, 613));
        verticalLayout_3 = new QVBoxLayout(page_local);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbl_PluginType = new QLabel(page_local);
        lbl_PluginType->setObjectName(QStringLiteral("lbl_PluginType"));

        verticalLayout_2->addWidget(lbl_PluginType);

        lbl_Name = new QLabel(page_local);
        lbl_Name->setObjectName(QStringLiteral("lbl_Name"));

        verticalLayout_2->addWidget(lbl_Name);

        lbl_Path = new QLabel(page_local);
        lbl_Path->setObjectName(QStringLiteral("lbl_Path"));

        verticalLayout_2->addWidget(lbl_Path);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_pluginType = new QLineEdit(page_local);
        lineEdit_pluginType->setObjectName(QStringLiteral("lineEdit_pluginType"));
        lineEdit_pluginType->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_pluginType);

        lineEdit_Name = new QLineEdit(page_local);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_Name);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_Path = new QLineEdit(page_local);
        lineEdit_Path->setObjectName(QStringLiteral("lineEdit_Path"));
        lineEdit_Path->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_Path);

        toolButton_Path = new QToolButton(page_local);
        toolButton_Path->setObjectName(QStringLiteral("toolButton_Path"));

        horizontalLayout->addWidget(toolButton_Path);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(page_local);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        groupBox_Description = new QGroupBox(page_local);
        groupBox_Description->setObjectName(QStringLiteral("groupBox_Description"));
        verticalLayout_4 = new QVBoxLayout(groupBox_Description);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textBrowser_description = new QTextBrowser(groupBox_Description);
        textBrowser_description->setObjectName(QStringLiteral("textBrowser_description"));

        verticalLayout_4->addWidget(textBrowser_description);


        verticalLayout_3->addWidget(groupBox_Description);

        progressBar = new QProgressBar(page_local);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_3->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Cancel = new QPushButton(page_local);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout_3->addWidget(pushButton_Cancel);

        pushButton_Ok = new QPushButton(page_local);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_Ok);


        verticalLayout_3->addLayout(horizontalLayout_3);

        toolBox_Overview->addItem(page_local, QStringLiteral("local"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 28));
        toolBox_Overview->addItem(page_2, QStringLiteral("network"));

        verticalLayout_5->addWidget(toolBox_Overview);

        QWidget::setTabOrder(lineEdit_Name, lineEdit_Path);
        QWidget::setTabOrder(lineEdit_Path, toolButton_Path);

        retranslateUi(PluginLoaderDialog);

        toolBox_Overview->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PluginLoaderDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginLoaderDialog)
    {
        PluginLoaderDialog->setWindowTitle(QApplication::translate("PluginLoaderDialog", "load plugin", 0));
        lbl_PluginType->setText(QApplication::translate("PluginLoaderDialog", "plugin type", 0));
        lbl_Name->setText(QApplication::translate("PluginLoaderDialog", "name", 0));
        lbl_Path->setText(QApplication::translate("PluginLoaderDialog", "path", 0));
        toolButton_Path->setText(QApplication::translate("PluginLoaderDialog", "...", 0));
        groupBox_Description->setTitle(QApplication::translate("PluginLoaderDialog", "description", 0));
        pushButton_Cancel->setText(QApplication::translate("PluginLoaderDialog", "Cancel", 0));
        pushButton_Ok->setText(QApplication::translate("PluginLoaderDialog", "Ok", 0));
        toolBox_Overview->setItemText(toolBox_Overview->indexOf(page_local), QApplication::translate("PluginLoaderDialog", "local", 0));
        toolBox_Overview->setItemText(toolBox_Overview->indexOf(page_2), QApplication::translate("PluginLoaderDialog", "network", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginLoaderDialog: public Ui_PluginLoaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINLOADERDIALOG_H
