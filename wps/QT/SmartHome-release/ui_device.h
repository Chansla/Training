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
#include <QtWidgets/QGroupBox>
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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_monitor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_temperature;
    QLineEdit *lineEdit_temperature;
    QLabel *label;
    QPushButton *pushButton_clear;
    QTextBrowser *textBrowser_log;
    QPushButton *pushButton_back;
    QGroupBox *groupBox_1;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QLabel *label_lightHost;
    QHBoxLayout *horizontalLayout_c1;
    QSlider *horizontalSlider_lightHost;
    QPushButton *pushButton_lightHost;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_lightSpot;
    QHBoxLayout *horizontalLayout_c2;
    QSlider *horizontalSlider_lightSpot;
    QPushButton *pushButton_lightSpot;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_sound;
    QHBoxLayout *horizontalLayout_c3;
    QSlider *horizontalSlider_sound;
    QPushButton *pushButton_sound;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *label_airConditioner;
    QHBoxLayout *horizontalLayout_c4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_TempUp;
    QPushButton *pushButton_TempDown;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_airConditioner;
    QLabel *label_Device;
    QPushButton *pushButton_close;

    void setupUi(QWidget *Device)
    {
        if (Device->objectName().isEmpty())
            Device->setObjectName(QString::fromUtf8("Device"));
        Device->resize(640, 480);
        Device->setStyleSheet(QString::fromUtf8(""));
        label_control = new QLabel(Device);
        label_control->setObjectName(QString::fromUtf8("label_control"));
        label_control->setGeometry(QRect(360, 60, 121, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_control->sizePolicy().hasHeightForWidth());
        label_control->setSizePolicy(sizePolicy);
        label_control->setMinimumSize(QSize(0, 30));
        label_control->setMaximumSize(QSize(16777215, 30));
        label_control->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(Device);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 60, 201, 401));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_monitor = new QLabel(layoutWidget1);
        label_monitor->setObjectName(QString::fromUtf8("label_monitor"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_monitor->sizePolicy().hasHeightForWidth());
        label_monitor->setSizePolicy(sizePolicy1);
        label_monitor->setMinimumSize(QSize(0, 30));
        label_monitor->setMaximumSize(QSize(16777215, 30));
        label_monitor->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_monitor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_temperature = new QLabel(layoutWidget1);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_temperature->sizePolicy().hasHeightForWidth());
        label_temperature->setSizePolicy(sizePolicy2);
        label_temperature->setMinimumSize(QSize(40, 40));
        label_temperature->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(label_temperature);

        lineEdit_temperature = new QLineEdit(layoutWidget1);
        lineEdit_temperature->setObjectName(QString::fromUtf8("lineEdit_temperature"));
        sizePolicy2.setHeightForWidth(lineEdit_temperature->sizePolicy().hasHeightForWidth());
        lineEdit_temperature->setSizePolicy(sizePolicy2);
        lineEdit_temperature->setMaximumSize(QSize(120, 40));
        lineEdit_temperature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_temperature);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 40));
        label->setMaximumSize(QSize(30, 40));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_clear = new QPushButton(layoutWidget1);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy1.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy1);
        pushButton_clear->setMinimumSize(QSize(0, 20));
        pushButton_clear->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(pushButton_clear);

        textBrowser_log = new QTextBrowser(layoutWidget1);
        textBrowser_log->setObjectName(QString::fromUtf8("textBrowser_log"));

        verticalLayout->addWidget(textBrowser_log);

        pushButton_back = new QPushButton(Device);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(580, 10, 50, 50));
        sizePolicy2.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy2);
        pushButton_back->setMinimumSize(QSize(50, 50));
        pushButton_back->setMaximumSize(QSize(50, 50));
        groupBox_1 = new QGroupBox(Device);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        groupBox_1->setGeometry(QRect(260, 110, 360, 80));
        sizePolicy2.setHeightForWidth(groupBox_1->sizePolicy().hasHeightForWidth());
        groupBox_1->setSizePolicy(sizePolicy2);
        layoutWidget2 = new QWidget(groupBox_1);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 341, 44));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(layoutWidget2);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        sizePolicy2.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy2);
        label_1->setMinimumSize(QSize(40, 40));
        label_1->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(label_1);

        label_lightHost = new QLabel(layoutWidget2);
        label_lightHost->setObjectName(QString::fromUtf8("label_lightHost"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_lightHost->sizePolicy().hasHeightForWidth());
        label_lightHost->setSizePolicy(sizePolicy3);
        label_lightHost->setMinimumSize(QSize(40, 0));
        label_lightHost->setMaximumSize(QSize(40, 16777215));
        label_lightHost->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_lightHost);

        horizontalLayout_c1 = new QHBoxLayout();
        horizontalLayout_c1->setObjectName(QString::fromUtf8("horizontalLayout_c1"));
        horizontalSlider_lightHost = new QSlider(layoutWidget2);
        horizontalSlider_lightHost->setObjectName(QString::fromUtf8("horizontalSlider_lightHost"));
        horizontalSlider_lightHost->setOrientation(Qt::Horizontal);

        horizontalLayout_c1->addWidget(horizontalSlider_lightHost);

        pushButton_lightHost = new QPushButton(layoutWidget2);
        pushButton_lightHost->setObjectName(QString::fromUtf8("pushButton_lightHost"));
        sizePolicy2.setHeightForWidth(pushButton_lightHost->sizePolicy().hasHeightForWidth());
        pushButton_lightHost->setSizePolicy(sizePolicy2);
        pushButton_lightHost->setMinimumSize(QSize(60, 30));
        pushButton_lightHost->setMaximumSize(QSize(60, 30));
        pushButton_lightHost->setStyleSheet(QString::fromUtf8(""));
        pushButton_lightHost->setCheckable(true);

        horizontalLayout_c1->addWidget(pushButton_lightHost);


        horizontalLayout_2->addLayout(horizontalLayout_c1);

        groupBox_2 = new QGroupBox(Device);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 200, 360, 80));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 341, 44));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(label_2);

        label_lightSpot = new QLabel(layoutWidget3);
        label_lightSpot->setObjectName(QString::fromUtf8("label_lightSpot"));
        sizePolicy3.setHeightForWidth(label_lightSpot->sizePolicy().hasHeightForWidth());
        label_lightSpot->setSizePolicy(sizePolicy3);
        label_lightSpot->setMinimumSize(QSize(40, 0));
        label_lightSpot->setMaximumSize(QSize(40, 16777215));
        label_lightSpot->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_lightSpot);

        horizontalLayout_c2 = new QHBoxLayout();
        horizontalLayout_c2->setObjectName(QString::fromUtf8("horizontalLayout_c2"));
        horizontalSlider_lightSpot = new QSlider(layoutWidget3);
        horizontalSlider_lightSpot->setObjectName(QString::fromUtf8("horizontalSlider_lightSpot"));
        horizontalSlider_lightSpot->setOrientation(Qt::Horizontal);

        horizontalLayout_c2->addWidget(horizontalSlider_lightSpot);

        pushButton_lightSpot = new QPushButton(layoutWidget3);
        pushButton_lightSpot->setObjectName(QString::fromUtf8("pushButton_lightSpot"));
        sizePolicy2.setHeightForWidth(pushButton_lightSpot->sizePolicy().hasHeightForWidth());
        pushButton_lightSpot->setSizePolicy(sizePolicy2);
        pushButton_lightSpot->setMinimumSize(QSize(60, 30));
        pushButton_lightSpot->setMaximumSize(QSize(60, 30));
        pushButton_lightSpot->setCheckable(true);

        horizontalLayout_c2->addWidget(pushButton_lightSpot);


        horizontalLayout_3->addLayout(horizontalLayout_c2);

        groupBox_3 = new QGroupBox(Device);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(260, 290, 360, 80));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 341, 44));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(40, 40));
        label_3->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(label_3);

        label_sound = new QLabel(layoutWidget4);
        label_sound->setObjectName(QString::fromUtf8("label_sound"));
        sizePolicy3.setHeightForWidth(label_sound->sizePolicy().hasHeightForWidth());
        label_sound->setSizePolicy(sizePolicy3);
        label_sound->setMinimumSize(QSize(40, 0));
        label_sound->setMaximumSize(QSize(40, 16777215));
        label_sound->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_sound);

        horizontalLayout_c3 = new QHBoxLayout();
        horizontalLayout_c3->setObjectName(QString::fromUtf8("horizontalLayout_c3"));
        horizontalSlider_sound = new QSlider(layoutWidget4);
        horizontalSlider_sound->setObjectName(QString::fromUtf8("horizontalSlider_sound"));
        horizontalSlider_sound->setOrientation(Qt::Horizontal);

        horizontalLayout_c3->addWidget(horizontalSlider_sound);

        pushButton_sound = new QPushButton(layoutWidget4);
        pushButton_sound->setObjectName(QString::fromUtf8("pushButton_sound"));
        sizePolicy2.setHeightForWidth(pushButton_sound->sizePolicy().hasHeightForWidth());
        pushButton_sound->setSizePolicy(sizePolicy2);
        pushButton_sound->setMinimumSize(QSize(60, 30));
        pushButton_sound->setMaximumSize(QSize(60, 30));
        pushButton_sound->setCheckable(true);

        horizontalLayout_c3->addWidget(pushButton_sound);


        horizontalLayout_4->addLayout(horizontalLayout_c3);

        groupBox_4 = new QGroupBox(Device);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(260, 380, 360, 80));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        layoutWidget5 = new QWidget(groupBox_4);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 341, 52));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(40, 40));
        label_4->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(label_4);

        label_airConditioner = new QLabel(layoutWidget5);
        label_airConditioner->setObjectName(QString::fromUtf8("label_airConditioner"));
        sizePolicy3.setHeightForWidth(label_airConditioner->sizePolicy().hasHeightForWidth());
        label_airConditioner->setSizePolicy(sizePolicy3);
        label_airConditioner->setMinimumSize(QSize(40, 0));
        label_airConditioner->setMaximumSize(QSize(40, 16777215));
        label_airConditioner->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_airConditioner);

        horizontalLayout_c4 = new QHBoxLayout();
        horizontalLayout_c4->setObjectName(QString::fromUtf8("horizontalLayout_c4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_c4->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_TempUp = new QPushButton(layoutWidget5);
        pushButton_TempUp->setObjectName(QString::fromUtf8("pushButton_TempUp"));
        sizePolicy2.setHeightForWidth(pushButton_TempUp->sizePolicy().hasHeightForWidth());
        pushButton_TempUp->setSizePolicy(sizePolicy2);
        pushButton_TempUp->setMinimumSize(QSize(30, 20));
        pushButton_TempUp->setMaximumSize(QSize(30, 20));

        verticalLayout_2->addWidget(pushButton_TempUp);

        pushButton_TempDown = new QPushButton(layoutWidget5);
        pushButton_TempDown->setObjectName(QString::fromUtf8("pushButton_TempDown"));
        sizePolicy2.setHeightForWidth(pushButton_TempDown->sizePolicy().hasHeightForWidth());
        pushButton_TempDown->setSizePolicy(sizePolicy2);
        pushButton_TempDown->setMinimumSize(QSize(30, 20));
        pushButton_TempDown->setMaximumSize(QSize(30, 20));

        verticalLayout_2->addWidget(pushButton_TempDown);


        horizontalLayout_c4->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_c4->addItem(horizontalSpacer);

        pushButton_airConditioner = new QPushButton(layoutWidget5);
        pushButton_airConditioner->setObjectName(QString::fromUtf8("pushButton_airConditioner"));
        sizePolicy2.setHeightForWidth(pushButton_airConditioner->sizePolicy().hasHeightForWidth());
        pushButton_airConditioner->setSizePolicy(sizePolicy2);
        pushButton_airConditioner->setMinimumSize(QSize(60, 30));
        pushButton_airConditioner->setMaximumSize(QSize(60, 30));
        pushButton_airConditioner->setCheckable(true);

        horizontalLayout_c4->addWidget(pushButton_airConditioner);


        horizontalLayout_5->addLayout(horizontalLayout_c4);

        label_Device = new QLabel(Device);
        label_Device->setObjectName(QString::fromUtf8("label_Device"));
        label_Device->setGeometry(QRect(240, 10, 161, 41));
        label_Device->setAlignment(Qt::AlignCenter);
        pushButton_close = new QPushButton(Device);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy2.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy2);

        retranslateUi(Device);

        QMetaObject::connectSlotsByName(Device);
    } // setupUi

    void retranslateUi(QWidget *Device)
    {
        Device->setWindowTitle(QCoreApplication::translate("Device", "Form", nullptr));
        label_control->setText(QCoreApplication::translate("Device", "\346\216\247\345\210\266\345\217\260", nullptr));
        label_monitor->setText(QCoreApplication::translate("Device", "\346\230\276\347\244\272\345\231\250", nullptr));
        label_temperature->setText(QCoreApplication::translate("Device", "\346\270\251\345\272\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Device", "\342\204\203", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Device", "\346\270\205\351\233\266", nullptr));
        pushButton_back->setText(QString());
        groupBox_1->setTitle(QString());
        label_1->setText(QString());
        label_lightHost->setText(QCoreApplication::translate("Device", "\344\270\273\347\201\257", nullptr));
        pushButton_lightHost->setText(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QString());
        label_lightSpot->setText(QCoreApplication::translate("Device", "\345\260\204\347\201\257", nullptr));
        pushButton_lightSpot->setText(QString());
        groupBox_3->setTitle(QString());
        label_3->setText(QString());
        label_sound->setText(QCoreApplication::translate("Device", "\351\237\263\345\223\215", nullptr));
        pushButton_sound->setText(QString());
        groupBox_4->setTitle(QString());
        label_4->setText(QString());
        label_airConditioner->setText(QCoreApplication::translate("Device", "\347\251\272\350\260\203", nullptr));
        pushButton_TempUp->setText(QString());
        pushButton_TempDown->setText(QString());
        pushButton_airConditioner->setText(QString());
        label_Device->setText(QCoreApplication::translate("Device", "\350\256\276\345\244\207\346\216\247\345\210\266\347\225\214\351\235\242", nullptr));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Device: public Ui_Device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_H
