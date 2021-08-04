/********************************************************************************
** Form generated from reading UI file 'smarthome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOME_H
#define UI_SMARTHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHome
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_back;
    QPushButton *pushButton_device;
    QPushButton *pushButton_weather;
    QPushButton *pushButton_music;
    QPushButton *pushButton_video;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartHome)
    {
        if (SmartHome->objectName().isEmpty())
            SmartHome->setObjectName(QString::fromUtf8("SmartHome"));
        SmartHome->resize(630, 452);
        centralwidget = new QWidget(SmartHome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(530, 10, 75, 41));
        pushButton_device = new QPushButton(centralwidget);
        pushButton_device->setObjectName(QString::fromUtf8("pushButton_device"));
        pushButton_device->setGeometry(QRect(40, 160, 101, 101));
        pushButton_weather = new QPushButton(centralwidget);
        pushButton_weather->setObjectName(QString::fromUtf8("pushButton_weather"));
        pushButton_weather->setGeometry(QRect(180, 160, 101, 101));
        pushButton_music = new QPushButton(centralwidget);
        pushButton_music->setObjectName(QString::fromUtf8("pushButton_music"));
        pushButton_music->setGeometry(QRect(320, 160, 101, 101));
        pushButton_video = new QPushButton(centralwidget);
        pushButton_video->setObjectName(QString::fromUtf8("pushButton_video"));
        pushButton_video->setGeometry(QRect(460, 160, 101, 101));
        SmartHome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartHome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 21));
        SmartHome->setMenuBar(menubar);
        statusbar = new QStatusBar(SmartHome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SmartHome->setStatusBar(statusbar);

        retranslateUi(SmartHome);

        QMetaObject::connectSlotsByName(SmartHome);
    } // setupUi

    void retranslateUi(QMainWindow *SmartHome)
    {
        SmartHome->setWindowTitle(QCoreApplication::translate("SmartHome", "SmartHome", nullptr));
        pushButton_back->setText(QCoreApplication::translate("SmartHome", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        pushButton_device->setText(QCoreApplication::translate("SmartHome", "\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        pushButton_weather->setText(QCoreApplication::translate("SmartHome", "\345\244\251\346\260\224\346\237\245\350\257\242", nullptr));
        pushButton_music->setText(QCoreApplication::translate("SmartHome", "\351\237\263\344\271\220\346\222\255\346\224\276", nullptr));
        pushButton_video->setText(QCoreApplication::translate("SmartHome", "\350\247\206\351\242\221\347\233\221\346\216\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartHome: public Ui_SmartHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_H
