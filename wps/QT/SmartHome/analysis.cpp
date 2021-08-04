#include "analysis.h"
#include <QDebug>
#include <QMessageBox>
Analysis::Analysis(QObject* parent)
    :QObject(parent)
{

}

void Analysis::jsonAnalysis(QByteArray msg)
{
    //转换为QJsonDocument对象
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(msg, &err);

    if(err.error != QJsonParseError::NoError)
    {
        QMessageBox::warning(NULL,"json解析","解析失败",QMessageBox::Ok);
        return ;
    }

    //将QJsonDocument对象转换为QJsonObject对象
    QJsonObject json_obj = doc.object();

    //获得服务器回复的data数据中的值
    QJsonObject dataobj = json_obj["data"].toObject();

    QJsonArray forecast = dataobj["forecast"].toArray();
    //获得今天的信息
    QJsonObject todayobj = forecast[0].toObject();
    qDebug() << "analysis wind:" << todayobj["fengxiang"].toString();

    emit sendQJsonObject(todayobj);
}
