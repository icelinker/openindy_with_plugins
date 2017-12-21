/********************************************************************************
** Form generated from reading UI file 'sensorconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCONFIGURATIONDIALOG_H
#define UI_SENSORCONFIGURATIONDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensorConfigurationDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_add;
    QListView *listView_sensorConfigs;
    QTabWidget *tabWidget_sensorConfig;
    QWidget *plugin;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_availableSensorTypes;
    QComboBox *comboBox_availableSensorTypes;
    QTableView *tableView_sensorPlugins;
    QVBoxLayout *verticalLayout;
    QLabel *label_pluginDescription;
    QTextBrowser *textBrowser_description;
    QWidget *connection;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_typeOfConnection;
    QComboBox *comboBox_typeOfConnection;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_ip;
    QComboBox *comboBox_ip;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_comPort;
    QComboBox *comboBox_comPort;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_baudRate;
    QComboBox *comboBox_baudrate;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_databits;
    QComboBox *comboBox_databits;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_flowControl;
    QComboBox *comboBox_flowcontrol;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_parity;
    QComboBox *comboBox_parity;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_stopBits;
    QComboBox *comboBox_stopbits;
    QSpacerItem *verticalSpacer;
    QWidget *tab_accuracy;
    QVBoxLayout *verticalLayout_12;
    QTableView *tableView_accuracy;
    QWidget *tab_sensorConfiguration;
    QGridLayout *gridLayout;
    QTableView *tableView_sensorParams;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_setAndConnect;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *SensorConfigurationDialog)
    {
        if (SensorConfigurationDialog->objectName().isEmpty())
            SensorConfigurationDialog->setObjectName(QStringLiteral("SensorConfigurationDialog"));
        SensorConfigurationDialog->resize(949, 602);
        SensorConfigurationDialog->setModal(true);
        gridLayout_2 = new QGridLayout(SensorConfigurationDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_remove = new QPushButton(SensorConfigurationDialog);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_remove->sizePolicy().hasHeightForWidth());
        pushButton_remove->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_remove->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton_remove);

        pushButton_add = new QPushButton(SensorConfigurationDialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/icons/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon1);

        horizontalLayout_5->addWidget(pushButton_add);


        verticalLayout_4->addLayout(horizontalLayout_5);

        listView_sensorConfigs = new QListView(SensorConfigurationDialog);
        listView_sensorConfigs->setObjectName(QStringLiteral("listView_sensorConfigs"));
        listView_sensorConfigs->setEditTriggers(QAbstractItemView::DoubleClicked);

        verticalLayout_4->addWidget(listView_sensorConfigs);


        horizontalLayout_7->addLayout(verticalLayout_4);

        tabWidget_sensorConfig = new QTabWidget(SensorConfigurationDialog);
        tabWidget_sensorConfig->setObjectName(QStringLiteral("tabWidget_sensorConfig"));
        plugin = new QWidget();
        plugin->setObjectName(QStringLiteral("plugin"));
        horizontalLayout_6 = new QHBoxLayout(plugin);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_availableSensorTypes = new QLabel(plugin);
        label_availableSensorTypes->setObjectName(QStringLiteral("label_availableSensorTypes"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_availableSensorTypes->setFont(font);

        horizontalLayout_2->addWidget(label_availableSensorTypes);

        comboBox_availableSensorTypes = new QComboBox(plugin);
        comboBox_availableSensorTypes->setObjectName(QStringLiteral("comboBox_availableSensorTypes"));

        horizontalLayout_2->addWidget(comboBox_availableSensorTypes);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableView_sensorPlugins = new QTableView(plugin);
        tableView_sensorPlugins->setObjectName(QStringLiteral("tableView_sensorPlugins"));

        verticalLayout_2->addWidget(tableView_sensorPlugins);


        verticalLayout_8->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_pluginDescription = new QLabel(plugin);
        label_pluginDescription->setObjectName(QStringLiteral("label_pluginDescription"));
        label_pluginDescription->setFont(font);

        verticalLayout->addWidget(label_pluginDescription);

        textBrowser_description = new QTextBrowser(plugin);
        textBrowser_description->setObjectName(QStringLiteral("textBrowser_description"));

        verticalLayout->addWidget(textBrowser_description);


        verticalLayout_8->addLayout(verticalLayout);

        verticalLayout_8->setStretch(0, 2);
        verticalLayout_8->setStretch(1, 1);

        horizontalLayout_6->addLayout(verticalLayout_8);

        tabWidget_sensorConfig->addTab(plugin, QString());
        connection = new QWidget();
        connection->setObjectName(QStringLiteral("connection"));
        gridLayout_3 = new QGridLayout(connection);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_typeOfConnection = new QLabel(connection);
        label_typeOfConnection->setObjectName(QStringLiteral("label_typeOfConnection"));

        horizontalLayout_22->addWidget(label_typeOfConnection);

        comboBox_typeOfConnection = new QComboBox(connection);
        comboBox_typeOfConnection->setObjectName(QStringLiteral("comboBox_typeOfConnection"));

        horizontalLayout_22->addWidget(comboBox_typeOfConnection);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_ip = new QLabel(connection);
        label_ip->setObjectName(QStringLiteral("label_ip"));

        horizontalLayout_23->addWidget(label_ip);

        comboBox_ip = new QComboBox(connection);
        comboBox_ip->setObjectName(QStringLiteral("comboBox_ip"));
        comboBox_ip->setEditable(true);

        horizontalLayout_23->addWidget(comboBox_ip);


        verticalLayout_3->addLayout(horizontalLayout_23);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_port = new QLabel(connection);
        label_port->setObjectName(QStringLiteral("label_port"));

        horizontalLayout_21->addWidget(label_port);

        lineEdit_port = new QLineEdit(connection);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));

        horizontalLayout_21->addWidget(lineEdit_port);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_comPort = new QLabel(connection);
        label_comPort->setObjectName(QStringLiteral("label_comPort"));

        horizontalLayout_20->addWidget(label_comPort);

        comboBox_comPort = new QComboBox(connection);
        comboBox_comPort->setObjectName(QStringLiteral("comboBox_comPort"));

        horizontalLayout_20->addWidget(comboBox_comPort);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_baudRate = new QLabel(connection);
        label_baudRate->setObjectName(QStringLiteral("label_baudRate"));

        horizontalLayout_19->addWidget(label_baudRate);

        comboBox_baudrate = new QComboBox(connection);
        comboBox_baudrate->setObjectName(QStringLiteral("comboBox_baudrate"));

        horizontalLayout_19->addWidget(comboBox_baudrate);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_databits = new QLabel(connection);
        label_databits->setObjectName(QStringLiteral("label_databits"));

        horizontalLayout_18->addWidget(label_databits);

        comboBox_databits = new QComboBox(connection);
        comboBox_databits->setObjectName(QStringLiteral("comboBox_databits"));

        horizontalLayout_18->addWidget(comboBox_databits);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_flowControl = new QLabel(connection);
        label_flowControl->setObjectName(QStringLiteral("label_flowControl"));

        horizontalLayout_17->addWidget(label_flowControl);

        comboBox_flowcontrol = new QComboBox(connection);
        comboBox_flowcontrol->setObjectName(QStringLiteral("comboBox_flowcontrol"));

        horizontalLayout_17->addWidget(comboBox_flowcontrol);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_parity = new QLabel(connection);
        label_parity->setObjectName(QStringLiteral("label_parity"));

        horizontalLayout_16->addWidget(label_parity);

        comboBox_parity = new QComboBox(connection);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        horizontalLayout_16->addWidget(comboBox_parity);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_stopBits = new QLabel(connection);
        label_stopBits->setObjectName(QStringLiteral("label_stopBits"));

        horizontalLayout_3->addWidget(label_stopBits);

        comboBox_stopbits = new QComboBox(connection);
        comboBox_stopbits->setObjectName(QStringLiteral("comboBox_stopbits"));

        horizontalLayout_3->addWidget(comboBox_stopbits);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget_sensorConfig->addTab(connection, QString());
        tab_accuracy = new QWidget();
        tab_accuracy->setObjectName(QStringLiteral("tab_accuracy"));
        verticalLayout_12 = new QVBoxLayout(tab_accuracy);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        tableView_accuracy = new QTableView(tab_accuracy);
        tableView_accuracy->setObjectName(QStringLiteral("tableView_accuracy"));

        verticalLayout_12->addWidget(tableView_accuracy);

        tabWidget_sensorConfig->addTab(tab_accuracy, QString());
        tab_sensorConfiguration = new QWidget();
        tab_sensorConfiguration->setObjectName(QStringLiteral("tab_sensorConfiguration"));
        gridLayout = new QGridLayout(tab_sensorConfiguration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView_sensorParams = new QTableView(tab_sensorConfiguration);
        tableView_sensorParams->setObjectName(QStringLiteral("tableView_sensorParams"));

        gridLayout->addWidget(tableView_sensorParams, 0, 0, 1, 1);

        tabWidget_sensorConfig->addTab(tab_sensorConfiguration, QString());

        horizontalLayout_7->addWidget(tabWidget_sensorConfig);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 3);

        verticalLayout_7->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_save = new QPushButton(SensorConfigurationDialog);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout->addWidget(pushButton_save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_setAndConnect = new QPushButton(SensorConfigurationDialog);
        pushButton_setAndConnect->setObjectName(QStringLiteral("pushButton_setAndConnect"));

        horizontalLayout->addWidget(pushButton_setAndConnect);

        pushButton_cancel = new QPushButton(SensorConfigurationDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(listView_sensorConfigs, pushButton_setAndConnect);
        QWidget::setTabOrder(pushButton_setAndConnect, pushButton_cancel);
        QWidget::setTabOrder(pushButton_cancel, tabWidget_sensorConfig);
        QWidget::setTabOrder(tabWidget_sensorConfig, pushButton_remove);
        QWidget::setTabOrder(pushButton_remove, comboBox_availableSensorTypes);
        QWidget::setTabOrder(comboBox_availableSensorTypes, tableView_sensorPlugins);
        QWidget::setTabOrder(tableView_sensorPlugins, textBrowser_description);
        QWidget::setTabOrder(textBrowser_description, pushButton_save);
        QWidget::setTabOrder(pushButton_save, comboBox_databits);
        QWidget::setTabOrder(comboBox_databits, comboBox_stopbits);
        QWidget::setTabOrder(comboBox_stopbits, comboBox_comPort);
        QWidget::setTabOrder(comboBox_comPort, tableView_sensorParams);
        QWidget::setTabOrder(tableView_sensorParams, comboBox_flowcontrol);
        QWidget::setTabOrder(comboBox_flowcontrol, comboBox_ip);
        QWidget::setTabOrder(comboBox_ip, comboBox_typeOfConnection);
        QWidget::setTabOrder(comboBox_typeOfConnection, lineEdit_port);
        QWidget::setTabOrder(lineEdit_port, tableView_accuracy);
        QWidget::setTabOrder(tableView_accuracy, comboBox_parity);
        QWidget::setTabOrder(comboBox_parity, comboBox_baudrate);

        retranslateUi(SensorConfigurationDialog);

        tabWidget_sensorConfig->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SensorConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *SensorConfigurationDialog)
    {
        SensorConfigurationDialog->setWindowTitle(QApplication::translate("SensorConfigurationDialog", "set sensor", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_remove->setToolTip(QApplication::translate("SensorConfigurationDialog", "remove selected sensor configuration", 0));
#endif // QT_NO_TOOLTIP
        pushButton_remove->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_add->setToolTip(QApplication::translate("SensorConfigurationDialog", "add new sensor configuration", 0));
#endif // QT_NO_TOOLTIP
        pushButton_add->setText(QString());
        label_availableSensorTypes->setText(QApplication::translate("SensorConfigurationDialog", "available sensor types:", 0));
        label_pluginDescription->setText(QApplication::translate("SensorConfigurationDialog", "description:", 0));
        tabWidget_sensorConfig->setTabText(tabWidget_sensorConfig->indexOf(plugin), QApplication::translate("SensorConfigurationDialog", "plugin", 0));
        label_typeOfConnection->setText(QApplication::translate("SensorConfigurationDialog", "connection type:", 0));
        label_ip->setText(QApplication::translate("SensorConfigurationDialog", "ip:", 0));
        label_port->setText(QApplication::translate("SensorConfigurationDialog", "port:", 0));
        label_comPort->setText(QApplication::translate("SensorConfigurationDialog", "com port:", 0));
        label_baudRate->setText(QApplication::translate("SensorConfigurationDialog", "baudrate:", 0));
        label_databits->setText(QApplication::translate("SensorConfigurationDialog", "databits:", 0));
        label_flowControl->setText(QApplication::translate("SensorConfigurationDialog", "flowcontrol:", 0));
        label_parity->setText(QApplication::translate("SensorConfigurationDialog", "parity:", 0));
        label_stopBits->setText(QApplication::translate("SensorConfigurationDialog", "stopbits:", 0));
        tabWidget_sensorConfig->setTabText(tabWidget_sensorConfig->indexOf(connection), QApplication::translate("SensorConfigurationDialog", "connection", 0));
        tabWidget_sensorConfig->setTabText(tabWidget_sensorConfig->indexOf(tab_accuracy), QApplication::translate("SensorConfigurationDialog", "accuracy", 0));
        tabWidget_sensorConfig->setTabText(tabWidget_sensorConfig->indexOf(tab_sensorConfiguration), QApplication::translate("SensorConfigurationDialog", "sensor parameters", 0));
        pushButton_save->setText(QApplication::translate("SensorConfigurationDialog", "save", 0));
        pushButton_setAndConnect->setText(QApplication::translate("SensorConfigurationDialog", "set", 0));
        pushButton_cancel->setText(QApplication::translate("SensorConfigurationDialog", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SensorConfigurationDialog: public Ui_SensorConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCONFIGURATIONDIALOG_H
