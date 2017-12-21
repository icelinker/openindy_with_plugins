/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_oiversionheader;
    QLabel *label_oiversion;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_oicoreversionheader;
    QLabel *label_oicoreversion;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_oimathversionheader;
    QLabel *label_oimathversion;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_oiBuildNumberHeader;
    QLabel *label_BuildNumber;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(420, 255);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_logo = new QLabel(AboutDialog);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_logo->sizePolicy().hasHeightForWidth());
        label_logo->setSizePolicy(sizePolicy);
        label_logo->setMaximumSize(QSize(150, 150));
        label_logo->setAutoFillBackground(false);
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/icons/openIndy.png")));
        label_logo->setScaledContents(true);
        label_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_logo);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_oiversionheader = new QLabel(AboutDialog);
        label_oiversionheader->setObjectName(QStringLiteral("label_oiversionheader"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_oiversionheader->setFont(font);

        verticalLayout->addWidget(label_oiversionheader);

        label_oiversion = new QLabel(AboutDialog);
        label_oiversion->setObjectName(QStringLiteral("label_oiversion"));

        verticalLayout->addWidget(label_oiversion);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label_oicoreversionheader = new QLabel(AboutDialog);
        label_oicoreversionheader->setObjectName(QStringLiteral("label_oicoreversionheader"));
        label_oicoreversionheader->setFont(font);

        verticalLayout->addWidget(label_oicoreversionheader);

        label_oicoreversion = new QLabel(AboutDialog);
        label_oicoreversion->setObjectName(QStringLiteral("label_oicoreversion"));

        verticalLayout->addWidget(label_oicoreversion);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        label_oimathversionheader = new QLabel(AboutDialog);
        label_oimathversionheader->setObjectName(QStringLiteral("label_oimathversionheader"));
        label_oimathversionheader->setFont(font);

        verticalLayout->addWidget(label_oimathversionheader);

        label_oimathversion = new QLabel(AboutDialog);
        label_oimathversion->setObjectName(QStringLiteral("label_oimathversion"));

        verticalLayout->addWidget(label_oimathversion);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_oiBuildNumberHeader = new QLabel(AboutDialog);
        label_oiBuildNumberHeader->setObjectName(QStringLiteral("label_oiBuildNumberHeader"));

        verticalLayout->addWidget(label_oiBuildNumberHeader);

        label_BuildNumber = new QLabel(AboutDialog);
        label_BuildNumber->setObjectName(QStringLiteral("label_BuildNumber"));

        verticalLayout->addWidget(label_BuildNumber);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About", 0));
        label_logo->setText(QString());
        label_oiversionheader->setText(QApplication::translate("AboutDialog", "OpenIndy version:", 0));
        label_oiversion->setText(QString());
        label_oicoreversionheader->setText(QApplication::translate("AboutDialog", "OpenIndy-Core version:", 0));
        label_oicoreversion->setText(QString());
        label_oimathversionheader->setText(QApplication::translate("AboutDialog", "OpenIndy-Math version:", 0));
        label_oimathversion->setText(QString());
        label_oiBuildNumberHeader->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-weight:600;\">OpenIndy-Build-number:</span></p></body></html>", 0));
        label_BuildNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
