#include "http.h"
#include <QEventLoop>
Http::Http(QObject* parent)
    :QObject(parent)
{
}

void Http::data_utf8_encode(QString &data)
{
    //1.创建一个utf-8编码格式的指针
    QTextCodec *codec = QTextCodec::codecForName("utf-8");

    //2.把中文字符填充到该类中
    QByteArray  by = codec->fromUnicode(data);

    //3.对汉字进行url编码
    QByteArray encoded = by.toPercentEncoding();

    //4.转换为QString相关的字符串信息
    data.clear();  //删除原来的数据
    data = encoded.data();
    qDebug() << "data = " << data ;
}

void Http::send_request_message(QString city_)
{
    data_utf8_encode(city_);
    QString http_url = "http://wthrcdn.etouch.cn/weather_mini?city=" + city_;
    qDebug() << "http:" << http_url;

    //创建一个http请求类对象，填充到对应的数据中
    QNetworkRequest http_request(http_url);
     qDebug() << "http: request" << http_request.url();

    //向服务器发送http请求
    manager = new QNetworkAccessManager;
    QEventLoop loop;
    connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);
    reply = manager->get(http_request);

    //关联信号与槽函数，当云服务器向我们回复数据结束的时候，系统会触发一个叫做finish信号
    connect(reply, SIGNAL(finished()),this, SLOT(send_reply_msg()));
    loop.exec();
}

void Http::send_reply_msg()
{
    if (reply->error() == QNetworkReply::NoError)
    {
        qDebug() << "http: send_reply_msg";
        QByteArray data = reply->readAll();
        emit sendQByteArray(data);
    }
    else
    {
        // 出现错误，打印出来，方便调试解决
        QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
        //statusCodeV是HTTP服务器的相应码，reply->error()是Qt定义的错误码，可以参考QT的文档
        qDebug( "found error ....code: %d %d\n", statusCodeV.toInt(), (int)reply->error());
//        qDebug(qPrintable(reply->errorString()));
     }
}

