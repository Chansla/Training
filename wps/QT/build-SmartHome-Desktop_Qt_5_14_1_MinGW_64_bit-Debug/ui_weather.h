/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_input;
    QPushButton *pushButton_query;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_city;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_weather;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_temperature;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_wind;

    void setupUi(QWidget *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->resize(498, 421);
        pushButton_back = new QPushButton(Weather);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(424, 10, 61, 41));
        layoutWidget = new QWidget(Weather);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 30, 311, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_input = new QLineEdit(layoutWidget);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));

        horizontalLayout_5->addWidget(lineEdit_input);

        pushButton_query = new QPushButton(layoutWidget);
        pushButton_query->setObjectName(QString::fromUtf8("pushButton_query"));

        horizontalLayout_5->addWidget(pushButton_query);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_2);

        label_city = new QLabel(layoutWidget);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        horizontalLayout->addWidget(label_city);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_3);

        label_weather = new QLabel(layoutWidget);
        label_weather->setObjectName(QString::fromUtf8("label_weather"));

        horizontalLayout_2->addWidget(label_weather);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(label_4);

        label_temperature = new QLabel(layoutWidget);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));

        horizontalLayout_3->addWidget(label_temperature);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(label_5);

        label_wind = new QLabel(layoutWidget);
        label_wind->setObjectName(QString::fromUtf8("label_wind"));

        horizontalLayout_4->addWidget(label_wind);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QWidget *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "Form", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Weather", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Weather", "\350\276\223\345\205\245\345\237\216\345\270\202\357\274\232", nullptr));
        pushButton_query->setText(QCoreApplication::translate("Weather", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("Weather", "\345\237\216\345\270\202\357\274\232", nullptr));
        label_city->setText(QString());
        label_3->setText(QCoreApplication::translate("Weather", "\345\244\251\346\260\224\357\274\232", nullptr));
        label_weather->setText(QString());
        label_4->setText(QCoreApplication::translate("Weather", "\346\270\251\345\272\246\357\274\232", nullptr));
        label_temperature->setText(QString());
        label_5->setText(QCoreApplication::translate("Weather", "\351\243\216\345\220\221\357\274\232", nullptr));
        label_wind->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
