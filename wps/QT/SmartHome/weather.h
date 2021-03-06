#ifndef WEATHER_H
#define WEATHER_H

#include <QWidget>
#include <QObject>
#include <QKeyEvent>
#include "http.h"
#include "analysis.h"
#include "thread.h"
namespace Ui {
class Weather;
}

class Weather : public QWidget
{
    Q_OBJECT

public:
    explicit Weather(QWidget *parent = nullptr);
    ~Weather();
    void keyPressEvent(QKeyEvent *event);
    void delayShwow();

signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_pushButton_back_clicked();

    void on_pushButton_query_clicked();

    void slotReceiveData(QJsonObject dataToday);

    void on_pushButton_close_clicked();

private:
    Ui::Weather *ui;
    Http* http;
    Analysis* analysis;
    Thread* mythread;

    QString city;
    QString date;
    QString weather;
    QString temperatureHigh;
    QString temperatureLow;
    QString wind;
    QString windPower;

};

#endif // WEATHER_H
