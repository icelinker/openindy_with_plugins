/********************************************************************************
** Form generated from reading UI file 'pluginmanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMANAGERDIALOG_H
#define UI_PLUGINMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginManagerDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView_plugins;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_description;
    QTextBrowser *txt_pluginDescription;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_author;
    QLineEdit *txt_pluginAuthor;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_version;
    QLineEdit *txt_pluginVersion;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_filePath;
    QLineEdit *txt_pluginFilePath;
    QWidget *widget_pluginInfo;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PluginManagerDialog)
    {
        if (PluginManagerDialog->objectName().isEmpty())
            PluginManagerDialog->setObjectName(QStringLiteral("PluginManagerDialog"));
        PluginManagerDialog->resize(800, 600);
        PluginManagerDialog->setMinimumSize(QSize(800, 600));
        gridLayout = new QGridLayout(PluginManagerDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView_plugins = new QTreeView(PluginManagerDialog);
        treeView_plugins->setObjectName(QStringLiteral("treeView_plugins"));
        treeView_plugins->setMinimumSize(QSize(220, 0));
        treeView_plugins->setAlternatingRowColors(false);
        treeView_plugins->setAutoExpandDelay(-1);
        treeView_plugins->setAnimated(false);

        horizontalLayout->addWidget(treeView_plugins);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_add = new QPushButton(PluginManagerDialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon);

        verticalLayout->addWidget(pushButton_add);

        pushButton_remove = new QPushButton(PluginManagerDialog);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/icons/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_remove->setIcon(icon1);

        verticalLayout->addWidget(pushButton_remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_description = new QLabel(PluginManagerDialog);
        label_description->setObjectName(QStringLiteral("label_description"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_description->sizePolicy().hasHeightForWidth());
        label_description->setSizePolicy(sizePolicy1);
        label_description->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        label_description->setFont(font);

        verticalLayout_3->addWidget(label_description);

        txt_pluginDescription = new QTextBrowser(PluginManagerDialog);
        txt_pluginDescription->setObjectName(QStringLiteral("txt_pluginDescription"));
        txt_pluginDescription->setMinimumSize(QSize(0, 70));
        txt_pluginDescription->setMaximumSize(QSize(16777215, 70));

        verticalLayout_3->addWidget(txt_pluginDescription);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_author = new QLabel(PluginManagerDialog);
        label_author->setObjectName(QStringLiteral("label_author"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_author->setFont(font1);

        horizontalLayout_8->addWidget(label_author);

        txt_pluginAuthor = new QLineEdit(PluginManagerDialog);
        txt_pluginAuthor->setObjectName(QStringLiteral("txt_pluginAuthor"));
        txt_pluginAuthor->setReadOnly(true);

        horizontalLayout_8->addWidget(txt_pluginAuthor);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 6);

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_version = new QLabel(PluginManagerDialog);
        label_version->setObjectName(QStringLiteral("label_version"));
        label_version->setFont(font1);

        horizontalLayout_9->addWidget(label_version);

        txt_pluginVersion = new QLineEdit(PluginManagerDialog);
        txt_pluginVersion->setObjectName(QStringLiteral("txt_pluginVersion"));
        txt_pluginVersion->setReadOnly(true);

        horizontalLayout_9->addWidget(txt_pluginVersion);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 6);

        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_filePath = new QLabel(PluginManagerDialog);
        label_filePath->setObjectName(QStringLiteral("label_filePath"));
        label_filePath->setFont(font1);

        horizontalLayout_10->addWidget(label_filePath);

        txt_pluginFilePath = new QLineEdit(PluginManagerDialog);
        txt_pluginFilePath->setObjectName(QStringLiteral("txt_pluginFilePath"));
        txt_pluginFilePath->setReadOnly(true);

        horizontalLayout_10->addWidget(txt_pluginFilePath);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 6);

        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout_3);

        widget_pluginInfo = new QWidget(PluginManagerDialog);
        widget_pluginInfo->setObjectName(QStringLiteral("widget_pluginInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_pluginInfo->sizePolicy().hasHeightForWidth());
        widget_pluginInfo->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget_pluginInfo);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 2);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(PluginManagerDialog);

        QMetaObject::connectSlotsByName(PluginManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginManagerDialog)
    {
        PluginManagerDialog->setWindowTitle(QApplication::translate("PluginManagerDialog", "settings", 0));
        pushButton_add->setText(QString());
        pushButton_remove->setText(QString());
        label_description->setText(QApplication::translate("PluginManagerDialog", "plugin description:", 0));
        label_author->setText(QApplication::translate("PluginManagerDialog", "author:", 0));
        label_version->setText(QApplication::translate("PluginManagerDialog", "version:", 0));
        label_filePath->setText(QApplication::translate("PluginManagerDialog", "file path:", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginManagerDialog: public Ui_PluginManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMANAGERDIALOG_H
