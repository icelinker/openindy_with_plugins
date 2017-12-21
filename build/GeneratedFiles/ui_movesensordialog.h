/********************************************************************************
** Form generated from reading UI file 'movesensordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVESENSORDIALOG_H
#define UI_MOVESENSORDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MoveSensorDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_type;
    QComboBox *comboBox_typeOfReading;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_azimuth;
    QLineEdit *lineEdit_azimuth;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_zenith;
    QLineEdit *lineEdit_zenith;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_distance;
    QLineEdit *lineEdit_distance;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_x;
    QLineEdit *lineEdit_x;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_y;
    QLineEdit *lineEdit_y;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_z;
    QLineEdit *lineEdit_z;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_move;

    void setupUi(QDialog *MoveSensorDialog)
    {
        if (MoveSensorDialog->objectName().isEmpty())
            MoveSensorDialog->setObjectName(QStringLiteral("MoveSensorDialog"));
        MoveSensorDialog->resize(310, 286);
        MoveSensorDialog->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(MoveSensorDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_type = new QLabel(MoveSensorDialog);
        label_type->setObjectName(QStringLiteral("label_type"));

        horizontalLayout->addWidget(label_type);

        comboBox_typeOfReading = new QComboBox(MoveSensorDialog);
        comboBox_typeOfReading->setObjectName(QStringLiteral("comboBox_typeOfReading"));

        horizontalLayout->addWidget(comboBox_typeOfReading);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_azimuth = new QLabel(MoveSensorDialog);
        label_azimuth->setObjectName(QStringLiteral("label_azimuth"));

        horizontalLayout_2->addWidget(label_azimuth);

        lineEdit_azimuth = new QLineEdit(MoveSensorDialog);
        lineEdit_azimuth->setObjectName(QStringLiteral("lineEdit_azimuth"));
        lineEdit_azimuth->setEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_azimuth);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_zenith = new QLabel(MoveSensorDialog);
        label_zenith->setObjectName(QStringLiteral("label_zenith"));

        horizontalLayout_3->addWidget(label_zenith);

        lineEdit_zenith = new QLineEdit(MoveSensorDialog);
        lineEdit_zenith->setObjectName(QStringLiteral("lineEdit_zenith"));
        lineEdit_zenith->setEnabled(true);

        horizontalLayout_3->addWidget(lineEdit_zenith);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_distance = new QLabel(MoveSensorDialog);
        label_distance->setObjectName(QStringLiteral("label_distance"));

        horizontalLayout_4->addWidget(label_distance);

        lineEdit_distance = new QLineEdit(MoveSensorDialog);
        lineEdit_distance->setObjectName(QStringLiteral("lineEdit_distance"));
        lineEdit_distance->setEnabled(true);

        horizontalLayout_4->addWidget(lineEdit_distance);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_x = new QLabel(MoveSensorDialog);
        label_x->setObjectName(QStringLiteral("label_x"));

        horizontalLayout_5->addWidget(label_x);

        lineEdit_x = new QLineEdit(MoveSensorDialog);
        lineEdit_x->setObjectName(QStringLiteral("lineEdit_x"));
        lineEdit_x->setEnabled(true);

        horizontalLayout_5->addWidget(lineEdit_x);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_y = new QLabel(MoveSensorDialog);
        label_y->setObjectName(QStringLiteral("label_y"));

        horizontalLayout_6->addWidget(label_y);

        lineEdit_y = new QLineEdit(MoveSensorDialog);
        lineEdit_y->setObjectName(QStringLiteral("lineEdit_y"));
        lineEdit_y->setEnabled(true);

        horizontalLayout_6->addWidget(lineEdit_y);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_z = new QLabel(MoveSensorDialog);
        label_z->setObjectName(QStringLiteral("label_z"));

        horizontalLayout_7->addWidget(label_z);

        lineEdit_z = new QLineEdit(MoveSensorDialog);
        lineEdit_z->setObjectName(QStringLiteral("lineEdit_z"));
        lineEdit_z->setEnabled(true);

        horizontalLayout_7->addWidget(lineEdit_z);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_move = new QPushButton(MoveSensorDialog);
        pushButton_move->setObjectName(QStringLiteral("pushButton_move"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_move->sizePolicy().hasHeightForWidth());
        pushButton_move->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(pushButton_move);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MoveSensorDialog);

        QMetaObject::connectSlotsByName(MoveSensorDialog);
    } // setupUi

    void retranslateUi(QDialog *MoveSensorDialog)
    {
        MoveSensorDialog->setWindowTitle(QApplication::translate("MoveSensorDialog", "Dialog", 0));
        label_type->setText(QApplication::translate("MoveSensorDialog", "type", 0));
        label_azimuth->setText(QApplication::translate("MoveSensorDialog", "azimuth [dec. degree]", 0));
        lineEdit_azimuth->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        label_zenith->setText(QApplication::translate("MoveSensorDialog", "zenith [dec. degree]", 0));
        lineEdit_zenith->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        label_distance->setText(QApplication::translate("MoveSensorDialog", "distance [m]", 0));
        lineEdit_distance->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        label_x->setText(QApplication::translate("MoveSensorDialog", "x [m]", 0));
        lineEdit_x->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        label_y->setText(QApplication::translate("MoveSensorDialog", "y [m]", 0));
        lineEdit_y->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        label_z->setText(QApplication::translate("MoveSensorDialog", "z [m]", 0));
        lineEdit_z->setText(QApplication::translate("MoveSensorDialog", "0.0", 0));
        pushButton_move->setText(QApplication::translate("MoveSensorDialog", "move", 0));
    } // retranslateUi

};

namespace Ui {
    class MoveSensorDialog: public Ui_MoveSensorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVESENSORDIALOG_H
