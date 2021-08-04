#include "thread.h"

Thread::Thread(QObject *parent) : QThread(parent)
{
    http = new Http;
}

void Thread::setCity(QString city)
{
    this->city_ = city;
}

void Thread::run()
{
    http->send_request_message(city_);
    QObject::connect(http, SIGNAL(sendQByteArray(QByteArray)), this, SIGNAL(sendQByteArray(QByteArray)));
}


