#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //1.分配内存空间
    manager = new QNetworkAccessManager;
}

Widget::~Widget()
{
    delete ui;
}

//把中文的utf-8编码信息,转换为URL编码信息--武汉
void Widget::data_utf8_encode(QString &data)
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

void Widget::send_request_message(QString ct)
{
    QString http_url = "http://wthrcdn.etouch.cn/weather_mini?city=" + ct;

    //1.创建一个http请求类对象，填充到对应的数据中
    QNetworkRequest http_request(http_url);
    qDebug() << "air: request" << http_request.url();

    //2.向服务器发送http请求
    reply = manager->get(http_request);

    qDebug() << "air: reply...";

    //3.关联信号与槽函数，当云服务器向我们回复数据结束的时候，系统会触发一个叫做finish信号
    connect(reply,SIGNAL(finished()),this,SLOT(deal_reply_msg()));


}

//当用户按下按键的时候，准备发送天气信息
void Widget::on_pushButton_clicked()
{
    QString ct = ui->lineEdit->text();

    data_utf8_encode(ct);

    send_request_message(ct);
}

void Widget::deal_reply_msg()
{
     qDebug() << "air: reply...finished";
    //1.读取所有的数据----Json类型的数据
    QByteArray data = reply->readAll();

    //2.将QByteArray转为QJsonDocument对象
    QJsonDocument Joc = QJsonDocument::fromJson(data);

    //3.将QJsonDocument对象转换为QJsonObject对象
    QJsonObject  json_obj = Joc.object();

  //  qDebug() << json_obj;

    //4.获得服务器回复的data数据中的值
    QJsonObject dataobj = json_obj["data"].toObject();

    QJsonArray forecast = dataobj["forecast"].toArray();

    //获得今天的信息
    QJsonObject todayobj = forecast[0].toObject();

    this->wind = todayobj["fengxiang"].toString();

    ui->lab_wind->setText(wind);
}





