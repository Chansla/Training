/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_Login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usr;
    QLineEdit *lineEdit_usr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pwd;
    QLineEdit *lineEdit_pwd;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_reg;
    QPushButton *pushButton_lg;
    QPushButton *pushButton_close;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        label_Login = new QLabel(Login);
        label_Login->setObjectName(QString::fromUtf8("label_Login"));
        label_Login->setGeometry(QRect(219, 10, 201, 40));
        sizePolicy.setHeightForWidth(label_Login->sizePolicy().hasHeightForWidth());
        label_Login->setSizePolicy(sizePolicy);
        label_Login->setMaximumSize(QSize(16777215, 40));
        label_Login->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 100, 415, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_usr = new QLabel(layoutWidget);
        label_usr->setObjectName(QString::fromUtf8("label_usr"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_usr->sizePolicy().hasHeightForWidth());
        label_usr->setSizePolicy(sizePolicy1);
        label_usr->setMinimumSize(QSize(40, 0));
        label_usr->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_usr);

        lineEdit_usr = new QLineEdit(layoutWidget);
        lineEdit_usr->setObjectName(QString::fromUtf8("lineEdit_usr"));
        sizePolicy.setHeightForWidth(lineEdit_usr->sizePolicy().hasHeightForWidth());
        lineEdit_usr->setSizePolicy(sizePolicy);
        lineEdit_usr->setMinimumSize(QSize(330, 30));
        lineEdit_usr->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(lineEdit_usr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_pwd = new QLabel(layoutWidget);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));
        sizePolicy1.setHeightForWidth(label_pwd->sizePolicy().hasHeightForWidth());
        label_pwd->setSizePolicy(sizePolicy1);
        label_pwd->setMinimumSize(QSize(40, 0));
        label_pwd->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(label_pwd);

        lineEdit_pwd = new QLineEdit(layoutWidget);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));
        sizePolicy.setHeightForWidth(lineEdit_pwd->sizePolicy().hasHeightForWidth());
        lineEdit_pwd->setSizePolicy(sizePolicy);
        lineEdit_pwd->setMinimumSize(QSize(330, 30));
        lineEdit_pwd->setMaximumSize(QSize(330, 30));

        horizontalLayout_2->addWidget(lineEdit_pwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_reg = new QPushButton(layoutWidget);
        pushButton_reg->setObjectName(QString::fromUtf8("pushButton_reg"));
        sizePolicy.setHeightForWidth(pushButton_reg->sizePolicy().hasHeightForWidth());
        pushButton_reg->setSizePolicy(sizePolicy);
        pushButton_reg->setMinimumSize(QSize(40, 30));
        pushButton_reg->setMaximumSize(QSize(40, 30));

        horizontalLayout_3->addWidget(pushButton_reg);

        pushButton_lg = new QPushButton(layoutWidget);
        pushButton_lg->setObjectName(QString::fromUtf8("pushButton_lg"));
        sizePolicy.setHeightForWidth(pushButton_lg->sizePolicy().hasHeightForWidth());
        pushButton_lg->setSizePolicy(sizePolicy);
        pushButton_lg->setMinimumSize(QSize(330, 30));
        pushButton_lg->setMaximumSize(QSize(295, 16777215));

        horizontalLayout_3->addWidget(pushButton_lg);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_close = new QPushButton(Login);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label_Login->setText(QCoreApplication::translate("Login", "\346\231\272\350\203\275\345\256\266\345\261\205\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_usr->setText(QCoreApplication::translate("Login", "\350\264\246\346\210\267\357\274\232", nullptr));
        label_pwd->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_reg->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        pushButton_lg->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
