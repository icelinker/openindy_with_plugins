/********************************************************************************
** Form generated from reading UI file 'featurefunctionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATUREFUNCTIONSDIALOG_H
#define UI_FEATUREFUNCTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeatureFunctionsDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget_functionSetter;
    QWidget *tab_function;
    QGridLayout *gridLayout_4;
    QTreeView *treeView_functions;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_description;
    QTextBrowser *textBrowser_description;
    QTabWidget *tabWidget_functionParameter;
    QWidget *tab_settings;
    QGridLayout *gridLayout_2;
    QWidget *widget_customParameter;
    QWidget *tab_elements;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_groups;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_element;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *treeView_availableElements;
    QVBoxLayout *verticalLayout;
    QToolButton *cmd_addElement;
    QToolButton *cmd_removeElement;
    QTreeView *treeView_usedElements;
    QWidget *tab_weights;
    QGridLayout *gridLayout_5;
    QTableView *tableView_weights;
    QWidget *widget_filter;
    QGridLayout *gridLayout_3;
    QWidget *tab_newFunction;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableView_functionPlugins;
    QLabel *label;
    QTextBrowser *textBrowser_description_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmd_ok;

    void setupUi(QDialog *FeatureFunctionsDialog)
    {
        if (FeatureFunctionsDialog->objectName().isEmpty())
            FeatureFunctionsDialog->setObjectName(QStringLiteral("FeatureFunctionsDialog"));
        FeatureFunctionsDialog->resize(800, 600);
        FeatureFunctionsDialog->setMinimumSize(QSize(800, 600));
        FeatureFunctionsDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons/function.png"), QSize(), QIcon::Normal, QIcon::Off);
        FeatureFunctionsDialog->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(FeatureFunctionsDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget_functionSetter = new QTabWidget(FeatureFunctionsDialog);
        tabWidget_functionSetter->setObjectName(QStringLiteral("tabWidget_functionSetter"));
        tabWidget_functionSetter->setEnabled(true);
        tabWidget_functionSetter->setTabShape(QTabWidget::Rounded);
        tab_function = new QWidget();
        tab_function->setObjectName(QStringLiteral("tab_function"));
        gridLayout_4 = new QGridLayout(tab_function);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        treeView_functions = new QTreeView(tab_function);
        treeView_functions->setObjectName(QStringLiteral("treeView_functions"));
        treeView_functions->setMinimumSize(QSize(220, 0));
        treeView_functions->setMaximumSize(QSize(220, 16777215));
        treeView_functions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_functions->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout_4->addWidget(treeView_functions, 0, 0, 3, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_description = new QLabel(tab_function);
        label_description->setObjectName(QStringLiteral("label_description"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_description->setFont(font);

        verticalLayout_2->addWidget(label_description);

        textBrowser_description = new QTextBrowser(tab_function);
        textBrowser_description->setObjectName(QStringLiteral("textBrowser_description"));

        verticalLayout_2->addWidget(textBrowser_description);


        verticalLayout_6->addLayout(verticalLayout_2);

        tabWidget_functionParameter = new QTabWidget(tab_function);
        tabWidget_functionParameter->setObjectName(QStringLiteral("tabWidget_functionParameter"));
        tab_settings = new QWidget();
        tab_settings->setObjectName(QStringLiteral("tab_settings"));
        gridLayout_2 = new QGridLayout(tab_settings);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_customParameter = new QWidget(tab_settings);
        widget_customParameter->setObjectName(QStringLiteral("widget_customParameter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_customParameter->sizePolicy().hasHeightForWidth());
        widget_customParameter->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(widget_customParameter, 0, 0, 1, 1);

        tabWidget_functionParameter->addTab(tab_settings, QString());
        tab_elements = new QWidget();
        tab_elements->setObjectName(QStringLiteral("tab_elements"));
        verticalLayout_3 = new QVBoxLayout(tab_elements);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        comboBox_groups = new QComboBox(tab_elements);
        comboBox_groups->setObjectName(QStringLiteral("comboBox_groups"));

        horizontalLayout_4->addWidget(comboBox_groups);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        widget_element = new QWidget(tab_elements);
        widget_element->setObjectName(QStringLiteral("widget_element"));
        widget_element->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_element->sizePolicy().hasHeightForWidth());
        widget_element->setSizePolicy(sizePolicy);
        widget_element->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(widget_element);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeView_availableElements = new QTreeView(widget_element);
        treeView_availableElements->setObjectName(QStringLiteral("treeView_availableElements"));
        treeView_availableElements->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView_availableElements->sizePolicy().hasHeightForWidth());
        treeView_availableElements->setSizePolicy(sizePolicy1);
        treeView_availableElements->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_availableElements->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout_2->addWidget(treeView_availableElements);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cmd_addElement = new QToolButton(widget_element);
        cmd_addElement->setObjectName(QStringLiteral("cmd_addElement"));
        cmd_addElement->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/icons/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmd_addElement->setIcon(icon1);

        verticalLayout->addWidget(cmd_addElement);

        cmd_removeElement = new QToolButton(widget_element);
        cmd_removeElement->setObjectName(QStringLiteral("cmd_removeElement"));
        cmd_removeElement->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/icons/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmd_removeElement->setIcon(icon2);

        verticalLayout->addWidget(cmd_removeElement);


        horizontalLayout_2->addLayout(verticalLayout);

        treeView_usedElements = new QTreeView(widget_element);
        treeView_usedElements->setObjectName(QStringLiteral("treeView_usedElements"));
        treeView_usedElements->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout_2->addWidget(treeView_usedElements);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(widget_element);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget_functionParameter->addTab(tab_elements, QString());
        tab_weights = new QWidget();
        tab_weights->setObjectName(QStringLiteral("tab_weights"));
        gridLayout_5 = new QGridLayout(tab_weights);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tableView_weights = new QTableView(tab_weights);
        tableView_weights->setObjectName(QStringLiteral("tableView_weights"));

        gridLayout_5->addWidget(tableView_weights, 0, 0, 1, 1);

        tabWidget_functionParameter->addTab(tab_weights, QString());

        verticalLayout_6->addWidget(tabWidget_functionParameter);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 4);

        gridLayout_4->addLayout(verticalLayout_6, 0, 1, 1, 1);

        widget_filter = new QWidget(tab_function);
        widget_filter->setObjectName(QStringLiteral("widget_filter"));
        sizePolicy.setHeightForWidth(widget_filter->sizePolicy().hasHeightForWidth());
        widget_filter->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(widget_filter);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);

        gridLayout_4->addWidget(widget_filter, 1, 1, 1, 1);

        tabWidget_functionSetter->addTab(tab_function, QString());
        tab_newFunction = new QWidget();
        tab_newFunction->setObjectName(QStringLiteral("tab_newFunction"));
        verticalLayout_4 = new QVBoxLayout(tab_newFunction);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableView_functionPlugins = new QTableView(tab_newFunction);
        tableView_functionPlugins->setObjectName(QStringLiteral("tableView_functionPlugins"));

        verticalLayout_4->addWidget(tableView_functionPlugins);

        label = new QLabel(tab_newFunction);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        textBrowser_description_2 = new QTextBrowser(tab_newFunction);
        textBrowser_description_2->setObjectName(QStringLiteral("textBrowser_description_2"));

        verticalLayout_4->addWidget(textBrowser_description_2);

        verticalLayout_4->setStretch(0, 4);
        verticalLayout_4->setStretch(2, 1);
        tabWidget_functionSetter->addTab(tab_newFunction, QString());

        verticalLayout_5->addWidget(tabWidget_functionSetter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmd_ok = new QPushButton(FeatureFunctionsDialog);
        cmd_ok->setObjectName(QStringLiteral("cmd_ok"));

        horizontalLayout->addWidget(cmd_ok);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(FeatureFunctionsDialog);

        tabWidget_functionSetter->setCurrentIndex(0);
        tabWidget_functionParameter->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(FeatureFunctionsDialog);
    } // setupUi

    void retranslateUi(QDialog *FeatureFunctionsDialog)
    {
        FeatureFunctionsDialog->setWindowTitle(QApplication::translate("FeatureFunctionsDialog", "function plugin loader", 0));
        label_description->setText(QApplication::translate("FeatureFunctionsDialog", "description:", 0));
        tabWidget_functionParameter->setTabText(tabWidget_functionParameter->indexOf(tab_settings), QApplication::translate("FeatureFunctionsDialog", "settings", 0));
        cmd_addElement->setText(QApplication::translate("FeatureFunctionsDialog", "...", 0));
        cmd_removeElement->setText(QApplication::translate("FeatureFunctionsDialog", "...", 0));
        tabWidget_functionParameter->setTabText(tabWidget_functionParameter->indexOf(tab_elements), QApplication::translate("FeatureFunctionsDialog", "elements", 0));
        tabWidget_functionParameter->setTabText(tabWidget_functionParameter->indexOf(tab_weights), QApplication::translate("FeatureFunctionsDialog", "weights", 0));
        tabWidget_functionSetter->setTabText(tabWidget_functionSetter->indexOf(tab_function), QApplication::translate("FeatureFunctionsDialog", "function configuration", 0));
        label->setText(QApplication::translate("FeatureFunctionsDialog", "description:", 0));
        tabWidget_functionSetter->setTabText(tabWidget_functionSetter->indexOf(tab_newFunction), QApplication::translate("FeatureFunctionsDialog", "new function", 0));
        cmd_ok->setText(QApplication::translate("FeatureFunctionsDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class FeatureFunctionsDialog: public Ui_FeatureFunctionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATUREFUNCTIONSDIALOG_H
