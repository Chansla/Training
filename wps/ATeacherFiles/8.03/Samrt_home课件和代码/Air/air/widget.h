#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QTextCodec>
//解析json相关数据包的类----------analysis.cpp analysis.h
//http网络相关的类 http.cpp  http.h

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void data_utf8_encode(QString &data);

    void send_request_message(QString ct);



private slots:
    void on_pushButton_clicked();
    void deal_reply_msg();
private:
    Ui::Widget *ui;
    QNetworkAccessManager *manager; //定义网络操作对象类
    QNetworkReply *reply;

    QString city;  //城市
    QString wind; //风向
};

#endif // WIDGET_H
