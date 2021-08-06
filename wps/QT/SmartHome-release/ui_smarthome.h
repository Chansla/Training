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
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_backLogin;
    QPushButton *pushButton_Device;
    QPushButton *pushButton_Weather;
    QPushButton *pushButton_Music;
    QPushButton *pushButton_Video;
    QLabel *label_SmartHome;
    QPushButton *pushButton_close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartHome)
    {
        if (SmartHome->objectName().isEmpty())
            SmartHome->setObjectName(QString::fromUtf8("SmartHome"));
        SmartHome->resize(640, 480);
        centralwidget = new QWidget(SmartHome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_backLogin = new QPushButton(centralwidget);
        pushButton_backLogin->setObjectName(QString::fromUtf8("pushButton_backLogin"));
        pushButton_backLogin->setGeometry(QRect(570, 10, 50, 50));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_backLogin->sizePolicy().hasHeightForWidth());
        pushButton_backLogin->setSizePolicy(sizePolicy);
        pushButton_backLogin->setMinimumSize(QSize(50, 50));
        pushButton_backLogin->setMaximumSize(QSize(50, 50));
        pushButton_Device = new QPushButton(centralwidget);
        pushButton_Device->setObjectName(QString::fromUtf8("pushButton_Device"));
        pushButton_Device->setGeometry(QRect(40, 160, 101, 101));
        pushButton_Weather = new QPushButton(centralwidget);
        pushButton_Weather->setObjectName(QString::fromUtf8("pushButton_Weather"));
        pushButton_Weather->setGeometry(QRect(180, 160, 101, 101));
        pushButton_Music = new QPushButton(centralwidget);
        pushButton_Music->setObjectName(QString::fromUtf8("pushButton_Music"));
        pushButton_Music->setGeometry(QRect(320, 160, 101, 101));
        pushButton_Video = new QPushButton(centralwidget);
        pushButton_Video->setObjectName(QString::fromUtf8("pushButton_Video"));
        pushButton_Video->setGeometry(QRect(460, 160, 101, 101));
        label_SmartHome = new QLabel(centralwidget);
        label_SmartHome->setObjectName(QString::fromUtf8("label_SmartHome"));
        label_SmartHome->setGeometry(QRect(180, 30, 260, 50));
        label_SmartHome->setAlignment(Qt::AlignCenter);
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        SmartHome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartHome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
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
        pushButton_backLogin->setText(QString());
        pushButton_Device->setText(QCoreApplication::translate("SmartHome", "\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        pushButton_Weather->setText(QCoreApplication::translate("SmartHome", "\345\244\251\346\260\224\346\237\245\350\257\242", nullptr));
        pushButton_Music->setText(QCoreApplication::translate("SmartHome", "\351\237\263\344\271\220\346\222\255\346\224\276", nullptr));
        pushButton_Video->setText(QCoreApplication::translate("SmartHome", "\350\247\206\351\242\221\347\233\221\346\216\247", nullptr));
        label_SmartHome->setText(QCoreApplication::translate("SmartHome", "\346\231\272\350\203\275\345\256\266\345\261\205\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SmartHome: public Ui_SmartHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_H
