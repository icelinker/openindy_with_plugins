/********************************************************************************
** Form generated from reading UI file 'nominalpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOMINALPROPERTIESDIALOG_H
#define UI_NOMINALPROPERTIESDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NominalPropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nominalX;
    QLineEdit *lineEdit_nominalX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_nominalY;
    QLineEdit *lineEdit_nominalY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_nominalZ;
    QLineEdit *lineEdit_nominalZ;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nominalI1;
    QLineEdit *lineEdit_nominalI1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_nominalJ1;
    QLineEdit *lineEdit_nominalJ1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_nominalK1;
    QLineEdit *lineEdit_nominalK1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_nominalR1;
    QLineEdit *lineEdit_nominalR1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_nominalR2;
    QLineEdit *lineEdit_nominalR2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_nominalI2;
    QLineEdit *lineEdit_nominalI2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_nominalJ2;
    QLineEdit *lineEdit_nominalJ2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_nominalK2;
    QLineEdit *lineEdit_nominalK2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_nominalAperture;
    QLineEdit *lineEdit_nominalAperture;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_nominalA;
    QLineEdit *lineEdit_nominalA;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_nominalB;
    QLineEdit *lineEdit_nominalB;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_nominalC;
    QLineEdit *lineEdit_nominalC;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_nominalAngle;
    QLineEdit *lineEdit_nominalAngle;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_nominalDistance;
    QLineEdit *lineEdit_nominalDistance;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_nominalMeasurementSeries;
    QLineEdit *lineEdit_nominalMeasurementSeries;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_nominalTemperature;
    QLineEdit *lineEdit_nominalTemperature;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_nominalLength;
    QLineEdit *lineEdit_nominalLength;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_cancel;
    QToolButton *toolButton_ok;

    void setupUi(QDialog *NominalPropertiesDialog)
    {
        if (NominalPropertiesDialog->objectName().isEmpty())
            NominalPropertiesDialog->setObjectName(QStringLiteral("NominalPropertiesDialog"));
        NominalPropertiesDialog->resize(455, 602);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NominalPropertiesDialog->sizePolicy().hasHeightForWidth());
        NominalPropertiesDialog->setSizePolicy(sizePolicy);
        NominalPropertiesDialog->setMinimumSize(QSize(455, 100));
        NominalPropertiesDialog->setModal(true);
        gridLayout = new QGridLayout(NominalPropertiesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_nominalX = new QLabel(NominalPropertiesDialog);
        label_nominalX->setObjectName(QStringLiteral("label_nominalX"));

        horizontalLayout->addWidget(label_nominalX);

        lineEdit_nominalX = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalX->setObjectName(QStringLiteral("lineEdit_nominalX"));

        horizontalLayout->addWidget(lineEdit_nominalX);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_nominalY = new QLabel(NominalPropertiesDialog);
        label_nominalY->setObjectName(QStringLiteral("label_nominalY"));

        horizontalLayout_2->addWidget(label_nominalY);

        lineEdit_nominalY = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalY->setObjectName(QStringLiteral("lineEdit_nominalY"));

        horizontalLayout_2->addWidget(lineEdit_nominalY);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_nominalZ = new QLabel(NominalPropertiesDialog);
        label_nominalZ->setObjectName(QStringLiteral("label_nominalZ"));

        horizontalLayout_3->addWidget(label_nominalZ);

        lineEdit_nominalZ = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalZ->setObjectName(QStringLiteral("lineEdit_nominalZ"));

        horizontalLayout_3->addWidget(lineEdit_nominalZ);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_nominalI1 = new QLabel(NominalPropertiesDialog);
        label_nominalI1->setObjectName(QStringLiteral("label_nominalI1"));

        horizontalLayout_4->addWidget(label_nominalI1);

        lineEdit_nominalI1 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalI1->setObjectName(QStringLiteral("lineEdit_nominalI1"));

        horizontalLayout_4->addWidget(lineEdit_nominalI1);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_nominalJ1 = new QLabel(NominalPropertiesDialog);
        label_nominalJ1->setObjectName(QStringLiteral("label_nominalJ1"));

        horizontalLayout_5->addWidget(label_nominalJ1);

        lineEdit_nominalJ1 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalJ1->setObjectName(QStringLiteral("lineEdit_nominalJ1"));

        horizontalLayout_5->addWidget(lineEdit_nominalJ1);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_nominalK1 = new QLabel(NominalPropertiesDialog);
        label_nominalK1->setObjectName(QStringLiteral("label_nominalK1"));

        horizontalLayout_6->addWidget(label_nominalK1);

        lineEdit_nominalK1 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalK1->setObjectName(QStringLiteral("lineEdit_nominalK1"));

        horizontalLayout_6->addWidget(lineEdit_nominalK1);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nominalR1 = new QLabel(NominalPropertiesDialog);
        label_nominalR1->setObjectName(QStringLiteral("label_nominalR1"));

        horizontalLayout_7->addWidget(label_nominalR1);

        lineEdit_nominalR1 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalR1->setObjectName(QStringLiteral("lineEdit_nominalR1"));

        horizontalLayout_7->addWidget(lineEdit_nominalR1);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_nominalR2 = new QLabel(NominalPropertiesDialog);
        label_nominalR2->setObjectName(QStringLiteral("label_nominalR2"));

        horizontalLayout_8->addWidget(label_nominalR2);

        lineEdit_nominalR2 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalR2->setObjectName(QStringLiteral("lineEdit_nominalR2"));

        horizontalLayout_8->addWidget(lineEdit_nominalR2);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_nominalI2 = new QLabel(NominalPropertiesDialog);
        label_nominalI2->setObjectName(QStringLiteral("label_nominalI2"));

        horizontalLayout_9->addWidget(label_nominalI2);

        lineEdit_nominalI2 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalI2->setObjectName(QStringLiteral("lineEdit_nominalI2"));

        horizontalLayout_9->addWidget(lineEdit_nominalI2);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_nominalJ2 = new QLabel(NominalPropertiesDialog);
        label_nominalJ2->setObjectName(QStringLiteral("label_nominalJ2"));

        horizontalLayout_11->addWidget(label_nominalJ2);

        lineEdit_nominalJ2 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalJ2->setObjectName(QStringLiteral("lineEdit_nominalJ2"));

        horizontalLayout_11->addWidget(lineEdit_nominalJ2);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_nominalK2 = new QLabel(NominalPropertiesDialog);
        label_nominalK2->setObjectName(QStringLiteral("label_nominalK2"));

        horizontalLayout_12->addWidget(label_nominalK2);

        lineEdit_nominalK2 = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalK2->setObjectName(QStringLiteral("lineEdit_nominalK2"));

        horizontalLayout_12->addWidget(lineEdit_nominalK2);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_nominalAperture = new QLabel(NominalPropertiesDialog);
        label_nominalAperture->setObjectName(QStringLiteral("label_nominalAperture"));

        horizontalLayout_18->addWidget(label_nominalAperture);

        lineEdit_nominalAperture = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalAperture->setObjectName(QStringLiteral("lineEdit_nominalAperture"));

        horizontalLayout_18->addWidget(lineEdit_nominalAperture);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_nominalA = new QLabel(NominalPropertiesDialog);
        label_nominalA->setObjectName(QStringLiteral("label_nominalA"));

        horizontalLayout_13->addWidget(label_nominalA);

        lineEdit_nominalA = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalA->setObjectName(QStringLiteral("lineEdit_nominalA"));

        horizontalLayout_13->addWidget(lineEdit_nominalA);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_nominalB = new QLabel(NominalPropertiesDialog);
        label_nominalB->setObjectName(QStringLiteral("label_nominalB"));

        horizontalLayout_14->addWidget(label_nominalB);

        lineEdit_nominalB = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalB->setObjectName(QStringLiteral("lineEdit_nominalB"));

        horizontalLayout_14->addWidget(lineEdit_nominalB);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_nominalC = new QLabel(NominalPropertiesDialog);
        label_nominalC->setObjectName(QStringLiteral("label_nominalC"));

        horizontalLayout_15->addWidget(label_nominalC);

        lineEdit_nominalC = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalC->setObjectName(QStringLiteral("lineEdit_nominalC"));

        horizontalLayout_15->addWidget(lineEdit_nominalC);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_nominalAngle = new QLabel(NominalPropertiesDialog);
        label_nominalAngle->setObjectName(QStringLiteral("label_nominalAngle"));

        horizontalLayout_16->addWidget(label_nominalAngle);

        lineEdit_nominalAngle = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalAngle->setObjectName(QStringLiteral("lineEdit_nominalAngle"));

        horizontalLayout_16->addWidget(lineEdit_nominalAngle);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_nominalDistance = new QLabel(NominalPropertiesDialog);
        label_nominalDistance->setObjectName(QStringLiteral("label_nominalDistance"));

        horizontalLayout_17->addWidget(label_nominalDistance);

        lineEdit_nominalDistance = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalDistance->setObjectName(QStringLiteral("lineEdit_nominalDistance"));

        horizontalLayout_17->addWidget(lineEdit_nominalDistance);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_nominalMeasurementSeries = new QLabel(NominalPropertiesDialog);
        label_nominalMeasurementSeries->setObjectName(QStringLiteral("label_nominalMeasurementSeries"));

        horizontalLayout_19->addWidget(label_nominalMeasurementSeries);

        lineEdit_nominalMeasurementSeries = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalMeasurementSeries->setObjectName(QStringLiteral("lineEdit_nominalMeasurementSeries"));

        horizontalLayout_19->addWidget(lineEdit_nominalMeasurementSeries);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_nominalTemperature = new QLabel(NominalPropertiesDialog);
        label_nominalTemperature->setObjectName(QStringLiteral("label_nominalTemperature"));

        horizontalLayout_20->addWidget(label_nominalTemperature);

        lineEdit_nominalTemperature = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalTemperature->setObjectName(QStringLiteral("lineEdit_nominalTemperature"));

        horizontalLayout_20->addWidget(lineEdit_nominalTemperature);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_nominalLength = new QLabel(NominalPropertiesDialog);
        label_nominalLength->setObjectName(QStringLiteral("label_nominalLength"));

        horizontalLayout_21->addWidget(label_nominalLength);

        lineEdit_nominalLength = new QLineEdit(NominalPropertiesDialog);
        lineEdit_nominalLength->setObjectName(QStringLiteral("lineEdit_nominalLength"));

        horizontalLayout_21->addWidget(lineEdit_nominalLength);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_21);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        toolButton_cancel = new QToolButton(NominalPropertiesDialog);
        toolButton_cancel->setObjectName(QStringLiteral("toolButton_cancel"));

        horizontalLayout_10->addWidget(toolButton_cancel);

        toolButton_ok = new QToolButton(NominalPropertiesDialog);
        toolButton_ok->setObjectName(QStringLiteral("toolButton_ok"));

        horizontalLayout_10->addWidget(toolButton_ok);

        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NominalPropertiesDialog);

        QMetaObject::connectSlotsByName(NominalPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *NominalPropertiesDialog)
    {
        NominalPropertiesDialog->setWindowTitle(QString());
        label_nominalX->setText(QApplication::translate("NominalPropertiesDialog", "nominal X:", 0));
        label_nominalY->setText(QApplication::translate("NominalPropertiesDialog", "nominal Y:", 0));
        label_nominalZ->setText(QApplication::translate("NominalPropertiesDialog", "nominal Z:", 0));
        label_nominalI1->setText(QApplication::translate("NominalPropertiesDialog", "nominal I1:", 0));
        label_nominalJ1->setText(QApplication::translate("NominalPropertiesDialog", "nominal J1:", 0));
        label_nominalK1->setText(QApplication::translate("NominalPropertiesDialog", "nominal K1:", 0));
        label_nominalR1->setText(QApplication::translate("NominalPropertiesDialog", "nominal radius1:", 0));
        label_nominalR2->setText(QApplication::translate("NominalPropertiesDialog", "nominal radius2:", 0));
        label_nominalI2->setText(QApplication::translate("NominalPropertiesDialog", "nominal I2:", 0));
        label_nominalJ2->setText(QApplication::translate("NominalPropertiesDialog", "nominal J2:", 0));
        label_nominalK2->setText(QApplication::translate("NominalPropertiesDialog", "nominal K2:", 0));
        label_nominalAperture->setText(QApplication::translate("NominalPropertiesDialog", "nominal aperture:", 0));
        label_nominalA->setText(QApplication::translate("NominalPropertiesDialog", "nominal A:", 0));
        label_nominalB->setText(QApplication::translate("NominalPropertiesDialog", "nominal B:", 0));
        label_nominalC->setText(QApplication::translate("NominalPropertiesDialog", "nominal C:", 0));
        label_nominalAngle->setText(QApplication::translate("NominalPropertiesDialog", "nominal angle:", 0));
        label_nominalDistance->setText(QApplication::translate("NominalPropertiesDialog", "nominal distance:", 0));
        label_nominalMeasurementSeries->setText(QApplication::translate("NominalPropertiesDialog", "nominal measurement series:", 0));
        label_nominalTemperature->setText(QApplication::translate("NominalPropertiesDialog", "nominal temperature:", 0));
        label_nominalLength->setText(QApplication::translate("NominalPropertiesDialog", "nominal length:", 0));
        toolButton_cancel->setText(QApplication::translate("NominalPropertiesDialog", "cancel", 0));
        toolButton_ok->setText(QApplication::translate("NominalPropertiesDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class NominalPropertiesDialog: public Ui_NominalPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOMINALPROPERTIESDIALOG_H
