#ifndef THREAD_H
#define THREAD_H

#include <QObject>
#include <QThread>
#include "http.h"
class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(QObject *parent = nullptr);
    void setCity(QString city);

protected:
    void run() override;


signals:
    void sendQByteArray(QByteArray);

private:
    QString city_;
    Http* http;
};

#endif // THREAD_H
