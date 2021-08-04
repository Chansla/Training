/********************************************************************************
** Form generated from reading UI file 'device.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_H
#define UI_DEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Device
{
public:
    QLabel *label_control;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_monitor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_temperature;
    QLineEdit *lineEdit_temperature;
    QPushButton *pushButton_clear;
    QTextBrowser *textBrowser_log;
    QLabel *label_lightHost;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_c2;
    QSlider *horizontalSlider_lightSpot;
    QPushButton *pushButton_lightSpot;
    QLabel *label_lightSpot;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_c3;
    QSlider *horizontalSlider_sound;
    QPushButton *pushButton_sound;
    QLabel *label_sound;
    QLabel *label_airConditioner;
    QWidget *layoutWidget_1;
    QHBoxLayout *horizontalLayout_c1;
    QSlider *horizontalSlider_lightHost;
    QPushButton *pushButton_lightHost;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_c4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_TempUP;
    QPushButton *pushButton_TempDown;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_airConditioner;

    void setupUi(QWidget *Device)
    {
        if (Device->objectName().isEmpty())
            Device->setObjectName(QString::fromUtf8("Device"));
        Device->resize(614, 490);
        label_control = new QLabel(Device);
        label_control->setObjectName(QString::fromUtf8("label_control"));
        label_control->setGeometry(QRect(410, 40, 54, 12));
        label_control->setAlignment(Qt::AlignCenter);
        pushButton_back = new QPushButton(Device);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(534, 10, 51, 41));
        layoutWidget = new QWidget(Device);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 201, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_monitor = new QLabel(layoutWidget);
        label_monitor->setObjectName(QString::fromUtf8("label_monitor"));
        label_monitor->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_monitor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_temperature = new QLabel(layoutWidget);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));

        horizontalLayout->addWidget(label_temperature);

        lineEdit_temperature = new QLineEdit(layoutWidget);
        lineEdit_temperature->setObjectName(QString::fromUtf8("lineEdit_temperature"));

        horizontalLayout->addWidget(lineEdit_temperature);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        verticalLayout->addWidget(pushButton_clear);

        textBrowser_log = new QTextBrowser(layoutWidget);
        textBrowser_log->setObjectName(QString::fromUtf8("textBrowser_log"));

        verticalLayout->addWidget(textBrowser_log);

        label_lightHost = new QLabel(Device);
        label_lightHost->setObjectName(QString::fromUtf8("label_lightHost"));
        label_lightHost->setGeometry(QRect(320, 70, 51, 41));
        layoutWidget_2 = new QWidget(Device);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(390, 140, 191, 25));
        horizontalLayout_c2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_c2->setObjectName(QString::fromUtf8("horizontalLayout_c2"));
        horizontalLayout_c2->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_lightSpot = new QSlider(layoutWidget_2);
        horizontalSlider_lightSpot->setObjectName(QString::fromUtf8("horizontalSlider_lightSpot"));
        horizontalSlider_lightSpot->setOrientation(Qt::Horizontal);

        horizontalLayout_c2->addWidget(horizontalSlider_lightSpot);

        pushButton_lightSpot = new QPushButton(layoutWidget_2);
        pushButton_lightSpot->setObjectName(QString::fromUtf8("pushButton_lightSpot"));

        horizontalLayout_c2->addWidget(pushButton_lightSpot);

        label_lightSpot = new QLabel(Device);
        label_lightSpot->setObjectName(QString::fromUtf8("label_lightSpot"));
        label_lightSpot->setGeometry(QRect(320, 130, 51, 41));
        layoutWidget_3 = new QWidget(Device);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(390, 200, 191, 25));
        horizontalLayout_c3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_c3->setObjectName(QString::fromUtf8("horizontalLayout_c3"));
        horizontalLayout_c3->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_sound = new QSlider(layoutWidget_3);
        horizontalSlider_sound->setObjectName(QString::fromUtf8("horizontalSlider_sound"));
        horizontalSlider_sound->setOrientation(Qt::Horizontal);

        horizontalLayout_c3->addWidget(horizontalSlider_sound);

        pushButton_sound = new QPushButton(layoutWidget_3);
        pushButton_sound->setObjectName(QString::fromUtf8("pushButton_sound"));

        horizontalLayout_c3->addWidget(pushButton_sound);

        label_sound = new QLabel(Device);
        label_sound->setObjectName(QString::fromUtf8("label_sound"));
        label_sound->setGeometry(QRect(320, 190, 41, 41));
        label_airConditioner = new QLabel(Device);
        label_airConditioner->setObjectName(QString::fromUtf8("label_airConditioner"));
        label_airConditioner->setGeometry(QRect(320, 260, 61, 41));
        layoutWidget_1 = new QWidget(Device);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        layoutWidget_1->setGeometry(QRect(390, 80, 191, 25));
        horizontalLayout_c1 = new QHBoxLayout(layoutWidget_1);
        horizontalLayout_c1->setObjectName(QString::fromUtf8("horizontalLayout_c1"));
        horizontalLayout_c1->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_lightHost = new QSlider(layoutWidget_1);
        horizontalSlider_lightHost->setObjectName(QString::fromUtf8("horizontalSlider_lightHost"));
        horizontalSlider_lightHost->setOrientation(Qt::Horizontal);

        horizontalLayout_c1->addWidget(horizontalSlider_lightHost);

        pushButton_lightHost = new QPushButton(layoutWidget_1);
        pushButton_lightHost->setObjectName(QString::fromUtf8("pushButton_lightHost"));

        horizontalLayout_c1->addWidget(pushButton_lightHost);

        layoutWidget_4 = new QWidget(Device);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(390, 250, 191, 56));
        horizontalLayout_c4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_c4->setObjectName(QString::fromUtf8("horizontalLayout_c4"));
        horizontalLayout_c4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_c4->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_TempUP = new QPushButton(layoutWidget_4);
        pushButton_TempUP->setObjectName(QString::fromUtf8("pushButton_TempUP"));
        pushButton_TempUP->setMinimumSize(QSize(0, 15));
        pushButton_TempUP->setMaximumSize(QSize(16777215, 15));

        verticalLayout_2->addWidget(pushButton_TempUP);

        pushButton_TempDown = new QPushButton(layoutWidget_4);
        pushButton_TempDown->setObjectName(QString::fromUtf8("pushButton_TempDown"));
        pushButton_TempDown->setMinimumSize(QSize(0, 15));
        pushButton_TempDown->setMaximumSize(QSize(16777215, 15));

        verticalLayout_2->addWidget(pushButton_TempDown);


        horizontalLayout_c4->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_c4->addItem(horizontalSpacer);

        pushButton_airConditioner = new QPushButton(layoutWidget_4);
        pushButton_airConditioner->setObjectName(QString::fromUtf8("pushButton_airConditioner"));

        horizontalLayout_c4->addWidget(pushButton_airConditioner);

        layoutWidget_1->raise();
        layoutWidget_4->raise();
        label_lightHost->raise();
        label_airConditioner->raise();
        label_lightSpot->raise();
        label_sound->raise();
        label_control->raise();
        pushButton_back->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        layoutWidget->raise();

        retranslateUi(Device);

        QMetaObject::connectSlotsByName(Device);
    } // setupUi

    void retranslateUi(QWidget *Device)
    {
        Device->setWindowTitle(QCoreApplication::translate("Device", "Form", nullptr));
        label_control->setText(QCoreApplication::translate("Device", "\346\216\247\345\210\266\345\217\260", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Device", "\350\277\224\345\233\236", nullptr));
        label_monitor->setText(QCoreApplication::translate("Device", "\346\230\276\347\244\272\345\231\250", nullptr));
        label_temperature->setText(QCoreApplication::translate("Device", "\346\270\251\345\272\246\357\274\232", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Device", "\346\270\205\351\233\266", nullptr));
        label_lightHost->setText(QCoreApplication::translate("Device", "\344\270\273\347\201\257", nullptr));
        pushButton_lightSpot->setText(QString());
        label_lightSpot->setText(QCoreApplication::translate("Device", "\345\260\204\347\201\257", nullptr));
        pushButton_sound->setText(QString());
        label_sound->setText(QCoreApplication::translate("Device", "\351\237\263\345\223\215", nullptr));
        label_airConditioner->setText(QCoreApplication::translate("Device", "\347\251\272\350\260\203", nullptr));
        pushButton_lightHost->setText(QString());
        pushButton_TempUP->setText(QString());
        pushButton_TempDown->setText(QString());
        pushButton_airConditioner->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Device: public Ui_Device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_H
