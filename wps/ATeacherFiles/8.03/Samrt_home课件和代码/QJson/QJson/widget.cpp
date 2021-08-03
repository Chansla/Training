#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    json_package();
    qDebug() << "write data is successful!";
    json_analysis();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::json_package()
{
    //1.封装JSON数据

    QJsonObject  JsonPacket;

    JsonPacket.insert("enable",true);
    JsonPacket["length"] = 10;
    JsonPacket.insert("precision",0.1);
    JsonPacket.insert("name","Car");

    //2.添加json数组的信息
    QJsonArray  new_array;
    new_array.append(1);
    new_array.append(2);
    new_array.append(3);
    JsonPacket.insert("array",new_array);

    //3.封装JSON对象
    QJsonObject  city_data;
    city_data.insert("city","黑龙江");

    JsonPacket["province"] = city_data;

    JsonPacket.insert("what",QJsonValue::Null);


    //输出观察一下JSON数据
    qDebug() << JsonPacket;

    //4.把JSON数据转换为QByteArray数据
    QJsonDocument doc;
    doc.setObject(JsonPacket);
    QByteArray msg = doc.toJson();


    //5.数据可能会经常使用,吧数据封装到一个xx.json文件中
    QFile file;
    file.setFileName("./config.json");

    bool ret = file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);

    if(!ret)
    {
       QMessageBox::warning(NULL,"文件操作","打开文件失败",QMessageBox::Ok);
       return ;
    }

    file.write(msg);
    file.close();
}

void Widget::json_analysis()
{
    //1.从文件中读取数据
    QFile file;
    file.setFileName("./config.json");

    bool ret = file.open(QIODevice::ReadOnly);

    if(!ret)
    {
       QMessageBox::warning(NULL,"文件操作","打开文件失败",QMessageBox::Ok);
       return ;
    }

    //2.读取文件信息
    QByteArray msg = file.readAll();

    //3.转换为QJsonDocument对象
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(msg,&err);

    if(err.error != QJsonParseError::NoError)
    {
        QMessageBox::warning(NULL,"文件操作","解析文件失败",QMessageBox::Ok);
        return ;
    }

    //4.重新转换为QJson对象，进行解析
    QJsonObject packet = doc.object();

    int array[3];
    bool enable;
    int length;
    QString name;
    double precision;
    QString city;
    int what;

    //5.解析数组
    QJsonArray  data = packet.value("array").toArray();

    for(int i = 0;i < data.size();i++)
    {
        array[i] = data[i].toInt();
        qDebug() << "array[" << i << "] = " << array[i];
    }

    enable = packet.value("enable").toBool();
    length = packet.value("length").toInt();
    name = packet.value("name").toString();
    precision = packet.value("precision").toDouble();

    QJsonObject  obj = packet["province"].toObject();
    city = obj["city"].toString();

    QJsonValue value = packet["what"];
    if(value.type() == QJsonValue::Null)
    {
        what = 0;
    }

    qDebug() << "enable = " << enable;
    qDebug() << "length = " << length;
    qDebug() << "precision = " << precision;
    qDebug() << "name = " << name;
    qDebug() << "city = " << city;
    qDebug() << "what = " << what;
}
