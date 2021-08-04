/********************************************************************************
** Form generated from reading UI file 'music.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_H
#define UI_MUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Music
{
public:
    QPushButton *pushButton_back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_pre;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_play;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_next;

    void setupUi(QWidget *Music)
    {
        if (Music->objectName().isEmpty())
            Music->setObjectName(QString::fromUtf8("Music"));
        Music->resize(513, 416);
        pushButton_back = new QPushButton(Music);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(400, 30, 80, 41));
        widget = new QWidget(Music);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 321, 361));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_pre = new QPushButton(widget);
        pushButton_pre->setObjectName(QString::fromUtf8("pushButton_pre"));

        horizontalLayout->addWidget(pushButton_pre);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_play = new QPushButton(widget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));

        horizontalLayout->addWidget(pushButton_play);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_next = new QPushButton(widget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));

        horizontalLayout->addWidget(pushButton_next);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Music);

        QMetaObject::connectSlotsByName(Music);
    } // setupUi

    void retranslateUi(QWidget *Music)
    {
        Music->setWindowTitle(QCoreApplication::translate("Music", "Form", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Music", "\350\277\224\345\233\236", nullptr));
        pushButton_pre->setText(QCoreApplication::translate("Music", "\344\270\212\344\270\200\351\246\226", nullptr));
        pushButton_play->setText(QCoreApplication::translate("Music", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
        pushButton_next->setText(QCoreApplication::translate("Music", "\344\270\213\344\270\200\351\246\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Music: public Ui_Music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
