#ifndef MYHASH_H
#define MYHASH_H

#include <QObject>
#include <QHash>
#include <QFileInfo>
#include <QFileInfoList>
#include <QDir>
#include <QFile>
#include <QString>
#include <QRect>
#include <QMultiMap>
#include <QMutex>
#include "ZhToPY.h"
#include <QMutex>

//设置为单例模式
class Myhash : public QObject
{
    Q_OBJECT
private:
    explicit Myhash(QObject *parent = nullptr);

    static Myhash *hash;

    QHash<QString,QFileInfoList> sh;

    class DeleteSpace{
    public:
        DeleteSpace();
        ~DeleteSpace();

    };

    static DeleteSpace ds; //释放堆区的空间

public:
    static  Myhash * get_instacnce();

    void insert_data(QString str,QFileInfoList  fileinfo);
    QFileInfoList get_data(QString str);

    void find_data(QString str,QFileInfoList list);
    QFileInfoList search(const QString &str,QFileInfoList file);

    QString getEnglish(QString str);
    QString getChinese(QString str);
    bool findChar(const QString &str, const QString &name);

    //得到文件的个数
    int  get_size(QString key);

    //得到文件名字
    QString get_filename(QString key,int index);
    QFileInfoList delete_file(QString filename,QFileInfoList list);
    QFileInfoList insert_item_data(QFileInfoList list, QFileInfo file);

signals:
    void send_find_data(QFileInfoList file);

public slots:
};

#endif // MYHASH_H
