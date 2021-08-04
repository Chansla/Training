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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Video
{
public:
    QPushButton *pushButton_back;

    void setupUi(QWidget *Video)
    {
        if (Video->objectName().isEmpty())
            Video->setObjectName(QString::fromUtf8("Video"));
        Video->resize(443, 362);
        pushButton_back = new QPushButton(Video);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(374, 10, 61, 41));

        retranslateUi(Video);

        QMetaObject::connectSlotsByName(Video);
    } // setupUi

    void retranslateUi(QWidget *Video)
    {
        Video->setWindowTitle(QCoreApplication::translate("Video", "Form", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Video", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Video: public Ui_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
