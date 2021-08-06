/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Video
{
public:
    QPushButton *pushButton_back;
    QLabel *label_Video;
    QGroupBox *groupBox_video;
    QGroupBox *groupBox_screenshoot;
    QLabel *label_screenshoot;
    QListWidget *listWidget_video;
    QGroupBox *groupBox_videocontrol;
    QPushButton *pushButton_snipaste;
    QPushButton *pushButton_video;
    QPushButton *pushButton_open;
    QLabel *label_log;
    QPushButton *pushButton_close;

    void setupUi(QWidget *Video)
    {
        if (Video->objectName().isEmpty())
            Video->setObjectName(QString::fromUtf8("Video"));
        Video->resize(640, 480);
        pushButton_back = new QPushButton(Video);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(580, 10, 50, 50));
        label_Video = new QLabel(Video);
        label_Video->setObjectName(QString::fromUtf8("label_Video"));
        label_Video->setGeometry(QRect(240, 10, 160, 40));
        label_Video->setAlignment(Qt::AlignCenter);
        groupBox_video = new QGroupBox(Video);
        groupBox_video->setObjectName(QString::fromUtf8("groupBox_video"));
        groupBox_video->setGeometry(QRect(20, 70, 400, 390));
        groupBox_screenshoot = new QGroupBox(Video);
        groupBox_screenshoot->setObjectName(QString::fromUtf8("groupBox_screenshoot"));
        groupBox_screenshoot->setGeometry(QRect(430, 70, 200, 200));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_screenshoot->sizePolicy().hasHeightForWidth());
        groupBox_screenshoot->setSizePolicy(sizePolicy);
        label_screenshoot = new QLabel(groupBox_screenshoot);
        label_screenshoot->setObjectName(QString::fromUtf8("label_screenshoot"));
        label_screenshoot->setGeometry(QRect(5, 5, 190, 190));
        sizePolicy.setHeightForWidth(label_screenshoot->sizePolicy().hasHeightForWidth());
        label_screenshoot->setSizePolicy(sizePolicy);
        listWidget_video = new QListWidget(Video);
        listWidget_video->setObjectName(QString::fromUtf8("listWidget_video"));
        listWidget_video->setGeometry(QRect(430, 272, 200, 75));
        sizePolicy.setHeightForWidth(listWidget_video->sizePolicy().hasHeightForWidth());
        listWidget_video->setSizePolicy(sizePolicy);
        groupBox_videocontrol = new QGroupBox(Video);
        groupBox_videocontrol->setObjectName(QString::fromUtf8("groupBox_videocontrol"));
        groupBox_videocontrol->setGeometry(QRect(430, 350, 200, 120));
        pushButton_snipaste = new QPushButton(groupBox_videocontrol);
        pushButton_snipaste->setObjectName(QString::fromUtf8("pushButton_snipaste"));
        pushButton_snipaste->setGeometry(QRect(130, 5, 55, 55));
        sizePolicy.setHeightForWidth(pushButton_snipaste->sizePolicy().hasHeightForWidth());
        pushButton_snipaste->setSizePolicy(sizePolicy);
        pushButton_video = new QPushButton(groupBox_videocontrol);
        pushButton_video->setObjectName(QString::fromUtf8("pushButton_video"));
        pushButton_video->setGeometry(QRect(70, 5, 55, 55));
        sizePolicy.setHeightForWidth(pushButton_video->sizePolicy().hasHeightForWidth());
        pushButton_video->setSizePolicy(sizePolicy);
        pushButton_open = new QPushButton(groupBox_videocontrol);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(10, 5, 55, 55));
        sizePolicy.setHeightForWidth(pushButton_open->sizePolicy().hasHeightForWidth());
        pushButton_open->setSizePolicy(sizePolicy);
        label_log = new QLabel(groupBox_videocontrol);
        label_log->setObjectName(QString::fromUtf8("label_log"));
        label_log->setGeometry(QRect(10, 65, 180, 50));
        sizePolicy.setHeightForWidth(label_log->sizePolicy().hasHeightForWidth());
        label_log->setSizePolicy(sizePolicy);
        pushButton_close = new QPushButton(Video);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);

        retranslateUi(Video);

        QMetaObject::connectSlotsByName(Video);
    } // setupUi

    void retranslateUi(QWidget *Video)
    {
        Video->setWindowTitle(QCoreApplication::translate("Video", "Form", nullptr));
        pushButton_back->setText(QString());
        label_Video->setText(QCoreApplication::translate("Video", "\350\247\206\351\242\221\347\233\221\346\216\247\347\225\214\351\235\242", nullptr));
        groupBox_video->setTitle(QString());
        groupBox_screenshoot->setTitle(QString());
        label_screenshoot->setText(QString());
        groupBox_videocontrol->setTitle(QString());
        pushButton_snipaste->setText(QString());
        pushButton_video->setText(QString());
        pushButton_open->setText(QString());
        label_log->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Video: public Ui_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
