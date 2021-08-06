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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Music
{
public:
    QPushButton *pushButton_back;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_up;
    QSlider *verticalSlider_volume;
    QPushButton *pushButton_down;
    QLabel *label_Music;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_pre;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_play;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_next;
    QPushButton *pushButton_close;

    void setupUi(QWidget *Music)
    {
        if (Music->objectName().isEmpty())
            Music->setObjectName(QString::fromUtf8("Music"));
        Music->resize(640, 480);
        pushButton_back = new QPushButton(Music);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(580, 10, 50, 50));
        layoutWidget2 = new QWidget(Music);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(450, 80, 77, 351));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_up = new QPushButton(layoutWidget2);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));

        verticalLayout_2->addWidget(pushButton_up);

        verticalSlider_volume = new QSlider(layoutWidget2);
        verticalSlider_volume->setObjectName(QString::fromUtf8("verticalSlider_volume"));
        verticalSlider_volume->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSlider_volume, 0, Qt::AlignHCenter);

        pushButton_down = new QPushButton(layoutWidget2);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));

        verticalLayout_2->addWidget(pushButton_down);

        label_Music = new QLabel(Music);
        label_Music->setObjectName(QString::fromUtf8("label_Music"));
        label_Music->setGeometry(QRect(240, 10, 161, 41));
        label_Music->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(Music);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(31, 81, 400, 350));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(400, 350));
        listWidget->setMaximumSize(QSize(400, 350));
        layoutWidget = new QWidget(Music);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 440, 401, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_pre = new QPushButton(layoutWidget);
        pushButton_pre->setObjectName(QString::fromUtf8("pushButton_pre"));
        sizePolicy.setHeightForWidth(pushButton_pre->sizePolicy().hasHeightForWidth());
        pushButton_pre->setSizePolicy(sizePolicy);
        pushButton_pre->setMinimumSize(QSize(80, 20));
        pushButton_pre->setMaximumSize(QSize(80, 20));

        horizontalLayout->addWidget(pushButton_pre);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_play = new QPushButton(layoutWidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        sizePolicy.setHeightForWidth(pushButton_play->sizePolicy().hasHeightForWidth());
        pushButton_play->setSizePolicy(sizePolicy);
        pushButton_play->setMinimumSize(QSize(80, 20));
        pushButton_play->setMaximumSize(QSize(80, 20));

        horizontalLayout->addWidget(pushButton_play);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_next = new QPushButton(layoutWidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        sizePolicy.setHeightForWidth(pushButton_next->sizePolicy().hasHeightForWidth());
        pushButton_next->setSizePolicy(sizePolicy);
        pushButton_next->setMinimumSize(QSize(80, 20));
        pushButton_next->setMaximumSize(QSize(80, 20));

        horizontalLayout->addWidget(pushButton_next);

        pushButton_close = new QPushButton(Music);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);

        retranslateUi(Music);

        QMetaObject::connectSlotsByName(Music);
    } // setupUi

    void retranslateUi(QWidget *Music)
    {
        Music->setWindowTitle(QCoreApplication::translate("Music", "Form", nullptr));
        pushButton_up->setText(QCoreApplication::translate("Music", "+", nullptr));
        pushButton_down->setText(QCoreApplication::translate("Music", "-", nullptr));
        label_Music->setText(QCoreApplication::translate("Music", "\351\237\263\344\271\220\346\222\255\346\224\276\347\225\214\351\235\242", nullptr));
        pushButton_pre->setText(QCoreApplication::translate("Music", "\344\270\212\344\270\200\351\246\226", nullptr));
        pushButton_play->setText(QCoreApplication::translate("Music", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
        pushButton_next->setText(QCoreApplication::translate("Music", "\344\270\213\344\270\200\351\246\226", nullptr));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Music: public Ui_Music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
