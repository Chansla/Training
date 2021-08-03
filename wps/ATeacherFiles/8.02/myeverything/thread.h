#ifndef THREAD_H
#define THREAD_H

#include <QObject>
#include <QThread>
#include <QStack>
#include <QDir>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <QFileIconProvider>
#include <QFileInfoList>
#include <QDateTime>
#include <QMetaType>
#include <QIcon>
#include "myhash.h"
class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(QObject *parent = nullptr);
protected:
    void run();
    QString  change_unit(const qint64 &size);
signals:
     void send_file_info(QFileInfoList list);

public slots:
private:
     Myhash *sh;
};

#endif // THREAD_H
