/********************************************************************************
** Form generated from reading UI file 'actualpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALPROPERTIESDIALOG_H
#define UI_ACTUALPROPERTIESDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActualPropertiesDialog
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_selectedFeature;
    QWidget *tab_observations;
    QGridLayout *gridLayout_2;
    QTableView *tableView_observation;
    QWidget *tab_readings;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_readings;
    QComboBox *comboBox_readings;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_readings;
    QWidget *tab_statistic;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_displayFunction;
    QComboBox *comboBox_displayedFunction;
    QTableView *tableView_displayedfunctionStatistic;
    QWidget *tab_protocol;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_protocol;

    void setupUi(QDialog *ActualPropertiesDialog)
    {
        if (ActualPropertiesDialog->objectName().isEmpty())
            ActualPropertiesDialog->setObjectName(QStringLiteral("ActualPropertiesDialog"));
        ActualPropertiesDialog->resize(1113, 550);
        ActualPropertiesDialog->setModal(true);
        gridLayout_3 = new QGridLayout(ActualPropertiesDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget_selectedFeature = new QTabWidget(ActualPropertiesDialog);
        tabWidget_selectedFeature->setObjectName(QStringLiteral("tabWidget_selectedFeature"));
        tab_observations = new QWidget();
        tab_observations->setObjectName(QStringLiteral("tab_observations"));
        gridLayout_2 = new QGridLayout(tab_observations);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView_observation = new QTableView(tab_observations);
        tableView_observation->setObjectName(QStringLiteral("tableView_observation"));

        gridLayout_2->addWidget(tableView_observation, 0, 0, 1, 1);

        tabWidget_selectedFeature->addTab(tab_observations, QString());
        tab_readings = new QWidget();
        tab_readings->setObjectName(QStringLiteral("tab_readings"));
        verticalLayout_3 = new QVBoxLayout(tab_readings);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_readings = new QLabel(tab_readings);
        label_readings->setObjectName(QStringLiteral("label_readings"));

        horizontalLayout_3->addWidget(label_readings);

        comboBox_readings = new QComboBox(tab_readings);
        comboBox_readings->setObjectName(QStringLiteral("comboBox_readings"));

        horizontalLayout_3->addWidget(comboBox_readings);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 8);

        verticalLayout_3->addLayout(horizontalLayout_3);

        tableView_readings = new QTableView(tab_readings);
        tableView_readings->setObjectName(QStringLiteral("tableView_readings"));

        verticalLayout_3->addWidget(tableView_readings);

        tabWidget_selectedFeature->addTab(tab_readings, QString());
        tab_statistic = new QWidget();
        tab_statistic->setObjectName(QStringLiteral("tab_statistic"));
        gridLayout = new QGridLayout(tab_statistic);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_displayFunction = new QLabel(tab_statistic);
        label_displayFunction->setObjectName(QStringLiteral("label_displayFunction"));

        horizontalLayout_2->addWidget(label_displayFunction);

        comboBox_displayedFunction = new QComboBox(tab_statistic);
        comboBox_displayedFunction->setObjectName(QStringLiteral("comboBox_displayedFunction"));

        horizontalLayout_2->addWidget(comboBox_displayedFunction);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        tableView_displayedfunctionStatistic = new QTableView(tab_statistic);
        tableView_displayedfunctionStatistic->setObjectName(QStringLiteral("tableView_displayedfunctionStatistic"));

        verticalLayout->addWidget(tableView_displayedfunctionStatistic);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget_selectedFeature->addTab(tab_statistic, QString());
        tab_protocol = new QWidget();
        tab_protocol->setObjectName(QStringLiteral("tab_protocol"));
        verticalLayout_5 = new QVBoxLayout(tab_protocol);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        textBrowser_protocol = new QTextBrowser(tab_protocol);
        textBrowser_protocol->setObjectName(QStringLiteral("textBrowser_protocol"));

        verticalLayout_5->addWidget(textBrowser_protocol);

        tabWidget_selectedFeature->addTab(tab_protocol, QString());

        gridLayout_3->addWidget(tabWidget_selectedFeature, 0, 0, 1, 1);


        retranslateUi(ActualPropertiesDialog);

        tabWidget_selectedFeature->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ActualPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *ActualPropertiesDialog)
    {
        ActualPropertiesDialog->setWindowTitle(QApplication::translate("ActualPropertiesDialog", "feature data", 0));
        tabWidget_selectedFeature->setTabText(tabWidget_selectedFeature->indexOf(tab_observations), QApplication::translate("ActualPropertiesDialog", "observations", 0));
        label_readings->setText(QApplication::translate("ActualPropertiesDialog", "used reading types:", 0));
        tabWidget_selectedFeature->setTabText(tabWidget_selectedFeature->indexOf(tab_readings), QApplication::translate("ActualPropertiesDialog", "readings", 0));
        label_displayFunction->setText(QApplication::translate("ActualPropertiesDialog", "function statistic:", 0));
        tabWidget_selectedFeature->setTabText(tabWidget_selectedFeature->indexOf(tab_statistic), QApplication::translate("ActualPropertiesDialog", "statistic", 0));
        tabWidget_selectedFeature->setTabText(tabWidget_selectedFeature->indexOf(tab_protocol), QApplication::translate("ActualPropertiesDialog", "protocol", 0));
    } // retranslateUi

};

namespace Ui {
    class ActualPropertiesDialog: public Ui_ActualPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALPROPERTIESDIALOG_H
