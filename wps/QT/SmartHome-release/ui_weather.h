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
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox_weather;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_city1;
    QLabel *label_city;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_weather1;
    QLabel *label_weather;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_temperature1;
    QLabel *label_temperature;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_wind1;
    QLabel *label_wind;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_inputCity;
    QLineEdit *lineEdit_input;
    QPushButton *pushButton_query;
    QLabel *label_Weather;
    QPushButton *pushButton_close;

    void setupUi(QWidget *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->resize(640, 480);
        pushButton_back = new QPushButton(Weather);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(580, 10, 50, 50));
        groupBox_weather = new QGroupBox(Weather);
        groupBox_weather->setObjectName(QString::fromUtf8("groupBox_weather"));
        groupBox_weather->setGeometry(QRect(40, 100, 541, 361));
        layoutWidget1 = new QWidget(groupBox_weather);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 501, 321));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_city1 = new QLabel(layoutWidget1);
        label_city1->setObjectName(QString::fromUtf8("label_city1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_city1->sizePolicy().hasHeightForWidth());
        label_city1->setSizePolicy(sizePolicy);
        label_city1->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_city1);

        label_city = new QLabel(layoutWidget1);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        horizontalLayout->addWidget(label_city);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_weather1 = new QLabel(layoutWidget1);
        label_weather1->setObjectName(QString::fromUtf8("label_weather1"));
        sizePolicy.setHeightForWidth(label_weather1->sizePolicy().hasHeightForWidth());
        label_weather1->setSizePolicy(sizePolicy);
        label_weather1->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_weather1);

        label_weather = new QLabel(layoutWidget1);
        label_weather->setObjectName(QString::fromUtf8("label_weather"));

        horizontalLayout_2->addWidget(label_weather);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_temperature1 = new QLabel(layoutWidget1);
        label_temperature1->setObjectName(QString::fromUtf8("label_temperature1"));
        sizePolicy.setHeightForWidth(label_temperature1->sizePolicy().hasHeightForWidth());
        label_temperature1->setSizePolicy(sizePolicy);
        label_temperature1->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(label_temperature1);

        label_temperature = new QLabel(layoutWidget1);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));

        horizontalLayout_3->addWidget(label_temperature);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_wind1 = new QLabel(layoutWidget1);
        label_wind1->setObjectName(QString::fromUtf8("label_wind1"));
        sizePolicy.setHeightForWidth(label_wind1->sizePolicy().hasHeightForWidth());
        label_wind1->setSizePolicy(sizePolicy);
        label_wind1->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(label_wind1);

        label_wind = new QLabel(layoutWidget1);
        label_wind->setObjectName(QString::fromUtf8("label_wind"));

        horizontalLayout_4->addWidget(label_wind);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(Weather);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 60, 501, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_inputCity = new QLabel(layoutWidget2);
        label_inputCity->setObjectName(QString::fromUtf8("label_inputCity"));

        horizontalLayout_5->addWidget(label_inputCity);

        lineEdit_input = new QLineEdit(layoutWidget2);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));

        horizontalLayout_5->addWidget(lineEdit_input);

        pushButton_query = new QPushButton(layoutWidget2);
        pushButton_query->setObjectName(QString::fromUtf8("pushButton_query"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_query->sizePolicy().hasHeightForWidth());
        pushButton_query->setSizePolicy(sizePolicy1);
        pushButton_query->setMinimumSize(QSize(90, 0));
        pushButton_query->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(pushButton_query);

        label_Weather = new QLabel(Weather);
        label_Weather->setObjectName(QString::fromUtf8("label_Weather"));
        label_Weather->setGeometry(QRect(240, 10, 160, 40));
        label_Weather->setAlignment(Qt::AlignCenter);
        pushButton_close = new QPushButton(Weather);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 10, 40, 40));
        sizePolicy1.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy1);

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QWidget *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "Form", nullptr));
        pushButton_back->setText(QString());
        groupBox_weather->setTitle(QString());
        label_city1->setText(QCoreApplication::translate("Weather", "\345\237\216\345\270\202\357\274\232", nullptr));
        label_city->setText(QString());
        label_weather1->setText(QCoreApplication::translate("Weather", "\345\244\251\346\260\224\357\274\232", nullptr));
        label_weather->setText(QString());
        label_temperature1->setText(QCoreApplication::translate("Weather", "\346\270\251\345\272\246\357\274\232", nullptr));
        label_temperature->setText(QString());
        label_wind1->setText(QCoreApplication::translate("Weather", "\351\243\216\345\220\221\357\274\232", nullptr));
        label_wind->setText(QString());
        label_inputCity->setText(QCoreApplication::translate("Weather", "\350\276\223\345\205\245\345\237\216\345\270\202\357\274\232", nullptr));
        pushButton_query->setText(QCoreApplication::translate("Weather", "\346\237\245\350\257\242", nullptr));
        label_Weather->setText(QCoreApplication::translate("Weather", "\345\244\251\346\260\224\346\237\245\350\257\242\347\225\214\351\235\242", nullptr));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
