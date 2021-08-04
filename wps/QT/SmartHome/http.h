#ifndef HTTP_H
#define HTTP_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QTextCodec>
class Http : public QObject
{
    Q_OBJECT
public:
    explicit Http(QObject* parent = nullptr);

    void send_request_message(QString city_);

signals:
    void sendQByteArray(QByteArray data);

private slots:
    void data_utf8_encode(QString &data);

    void send_reply_msg();

private:
    QNetworkAccessManager *manager; //定义网络操作对象类
    QNetworkReply *reply;


};

#endif // HTTP_H
