/********************************************************************************
** Form generated from reading UI file 'stationpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONPROPERTIESDIALOG_H
#define UI_STATIONPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StationPropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget_stationProperties;
    QWidget *tab_connection;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sensorConfig1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_sensorConfig1;
    QPushButton *pushButton_sensorConfig1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_connectionType;
    QLineEdit *lineEdit_connectionType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ip;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_comPort;
    QLineEdit *lineEdit_comPort;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_baudrate;
    QLineEdit *lineEdit_baudrate;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_databits;
    QLineEdit *lineEdit_databits;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_flowcontrol;
    QLineEdit *lineEdit_flowcontrol;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_parity;
    QLineEdit *lineEdit_parity;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_stopbits;
    QLineEdit *lineEdit_stopbits;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_accuracy;
    QGridLayout *gridLayout_2;
    QTableView *tableView_accuracy;
    QWidget *tab_sensorParameters;
    QGridLayout *gridLayout_3;
    QTableView *tableView_sensorParameters;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StationPropertiesDialog)
    {
        if (StationPropertiesDialog->objectName().isEmpty())
            StationPropertiesDialog->setObjectName(QStringLiteral("StationPropertiesDialog"));
        StationPropertiesDialog->resize(646, 514);
        StationPropertiesDialog->setModal(true);
        gridLayout = new QGridLayout(StationPropertiesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget_stationProperties = new QTabWidget(StationPropertiesDialog);
        tabWidget_stationProperties->setObjectName(QStringLiteral("tabWidget_stationProperties"));
        tab_connection = new QWidget();
        tab_connection->setObjectName(QStringLiteral("tab_connection"));
        gridLayout_4 = new QGridLayout(tab_connection);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_sensorConfig1 = new QLabel(tab_connection);
        label_sensorConfig1->setObjectName(QStringLiteral("label_sensorConfig1"));

        horizontalLayout_2->addWidget(label_sensorConfig1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_sensorConfig1 = new QLineEdit(tab_connection);
        lineEdit_sensorConfig1->setObjectName(QStringLiteral("lineEdit_sensorConfig1"));
        lineEdit_sensorConfig1->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_sensorConfig1);

        pushButton_sensorConfig1 = new QPushButton(tab_connection);
        pushButton_sensorConfig1->setObjectName(QStringLiteral("pushButton_sensorConfig1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/toolbars/standard/Sensor Set.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sensorConfig1->setIcon(icon);

        horizontalLayout->addWidget(pushButton_sensorConfig1);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_connectionType = new QLabel(tab_connection);
        label_connectionType->setObjectName(QStringLiteral("label_connectionType"));

        horizontalLayout_3->addWidget(label_connectionType);

        lineEdit_connectionType = new QLineEdit(tab_connection);
        lineEdit_connectionType->setObjectName(QStringLiteral("lineEdit_connectionType"));
        lineEdit_connectionType->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_connectionType);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ip = new QLabel(tab_connection);
        label_ip->setObjectName(QStringLiteral("label_ip"));

        horizontalLayout_4->addWidget(label_ip);

        lineEdit_ip = new QLineEdit(tab_connection);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_ip);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_port = new QLabel(tab_connection);
        label_port->setObjectName(QStringLiteral("label_port"));

        horizontalLayout_5->addWidget(label_port);

        lineEdit_port = new QLineEdit(tab_connection);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_port);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_comPort = new QLabel(tab_connection);
        label_comPort->setObjectName(QStringLiteral("label_comPort"));

        horizontalLayout_6->addWidget(label_comPort);

        lineEdit_comPort = new QLineEdit(tab_connection);
        lineEdit_comPort->setObjectName(QStringLiteral("lineEdit_comPort"));
        lineEdit_comPort->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_comPort);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_baudrate = new QLabel(tab_connection);
        label_baudrate->setObjectName(QStringLiteral("label_baudrate"));

        horizontalLayout_7->addWidget(label_baudrate);

        lineEdit_baudrate = new QLineEdit(tab_connection);
        lineEdit_baudrate->setObjectName(QStringLiteral("lineEdit_baudrate"));
        lineEdit_baudrate->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_baudrate);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_databits = new QLabel(tab_connection);
        label_databits->setObjectName(QStringLiteral("label_databits"));

        horizontalLayout_8->addWidget(label_databits);

        lineEdit_databits = new QLineEdit(tab_connection);
        lineEdit_databits->setObjectName(QStringLiteral("lineEdit_databits"));
        lineEdit_databits->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_databits);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_flowcontrol = new QLabel(tab_connection);
        label_flowcontrol->setObjectName(QStringLiteral("label_flowcontrol"));

        horizontalLayout_9->addWidget(label_flowcontrol);

        lineEdit_flowcontrol = new QLineEdit(tab_connection);
        lineEdit_flowcontrol->setObjectName(QStringLiteral("lineEdit_flowcontrol"));
        lineEdit_flowcontrol->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_flowcontrol);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_parity = new QLabel(tab_connection);
        label_parity->setObjectName(QStringLiteral("label_parity"));

        horizontalLayout_10->addWidget(label_parity);

        lineEdit_parity = new QLineEdit(tab_connection);
        lineEdit_parity->setObjectName(QStringLiteral("lineEdit_parity"));
        lineEdit_parity->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_parity);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_stopbits = new QLabel(tab_connection);
        label_stopbits->setObjectName(QStringLiteral("label_stopbits"));

        horizontalLayout_11->addWidget(label_stopbits);

        lineEdit_stopbits = new QLineEdit(tab_connection);
        lineEdit_stopbits->setObjectName(QStringLiteral("lineEdit_stopbits"));
        lineEdit_stopbits->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_stopbits);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_12->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        horizontalLayout_12->setStretch(0, 2);
        horizontalLayout_12->setStretch(1, 1);

        gridLayout_4->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        tabWidget_stationProperties->addTab(tab_connection, QString());
        tab_accuracy = new QWidget();
        tab_accuracy->setObjectName(QStringLiteral("tab_accuracy"));
        gridLayout_2 = new QGridLayout(tab_accuracy);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView_accuracy = new QTableView(tab_accuracy);
        tableView_accuracy->setObjectName(QStringLiteral("tableView_accuracy"));

        gridLayout_2->addWidget(tableView_accuracy, 0, 0, 1, 1);

        tabWidget_stationProperties->addTab(tab_accuracy, QString());
        tab_sensorParameters = new QWidget();
        tab_sensorParameters->setObjectName(QStringLiteral("tab_sensorParameters"));
        gridLayout_3 = new QGridLayout(tab_sensorParameters);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView_sensorParameters = new QTableView(tab_sensorParameters);
        tableView_sensorParameters->setObjectName(QStringLiteral("tableView_sensorParameters"));

        gridLayout_3->addWidget(tableView_sensorParameters, 0, 0, 1, 1);

        tabWidget_stationProperties->addTab(tab_sensorParameters, QString());

        gridLayout->addWidget(tabWidget_stationProperties, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(StationPropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(StationPropertiesDialog);

        tabWidget_stationProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StationPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *StationPropertiesDialog)
    {
        StationPropertiesDialog->setWindowTitle(QApplication::translate("StationPropertiesDialog", "station properties", 0));
        label_sensorConfig1->setText(QApplication::translate("StationPropertiesDialog", "sensor configuration:", 0));
        pushButton_sensorConfig1->setText(QString());
        label_connectionType->setText(QApplication::translate("StationPropertiesDialog", "connection type:", 0));
        label_ip->setText(QApplication::translate("StationPropertiesDialog", "ip:", 0));
        label_port->setText(QApplication::translate("StationPropertiesDialog", "port:", 0));
        label_comPort->setText(QApplication::translate("StationPropertiesDialog", "com port:", 0));
        label_baudrate->setText(QApplication::translate("StationPropertiesDialog", "baudrate:", 0));
        label_databits->setText(QApplication::translate("StationPropertiesDialog", "databits:", 0));
        label_flowcontrol->setText(QApplication::translate("StationPropertiesDialog", "flowcontrol:", 0));
        label_parity->setText(QApplication::translate("StationPropertiesDialog", "parity:", 0));
        label_stopbits->setText(QApplication::translate("StationPropertiesDialog", "stopbits:", 0));
        tabWidget_stationProperties->setTabText(tabWidget_stationProperties->indexOf(tab_connection), QApplication::translate("StationPropertiesDialog", "connection", 0));
        tabWidget_stationProperties->setTabText(tabWidget_stationProperties->indexOf(tab_accuracy), QApplication::translate("StationPropertiesDialog", "accuracy", 0));
        tabWidget_stationProperties->setTabText(tabWidget_stationProperties->indexOf(tab_sensorParameters), QApplication::translate("StationPropertiesDialog", "sensor parameters", 0));
    } // retranslateUi

};

namespace Ui {
    class StationPropertiesDialog: public Ui_StationPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONPROPERTIESDIALOG_H
