#include "thread.h"

Thread::Thread(QObject *parent) : QThread(parent)
{
    sh = Myhash::get_instacnce();
}

void Thread::run()
{
    QString startDir="C:/Users/wps/Desktop/";
    QString name;
    QDateTime last_time;
    QDir dir(startDir);
    //列出所有的目录,跳过"."和".."
    dir.setFilter(QDir::AllEntries|QDir::NoDotAndDotDot);

    if(!dir.exists())
    {
        return;
    }
    //返回的是当前目录下所有的文件名
    QFileInfoList list = dir.entryInfoList();


    sh->insert_data("",list);

    emit send_file_info(list); //默认信号与槽-----> int, float,double QString

//    for(int i = 0;i < list.count();i++)
//    {
//        fi = list.at(i);

//        if(fi.fileName() == "." || fi.fileName() == "..")
//            continue;

//        name = fi.fileName();
//        last_time = fi.lastModified();
//        QString time = last_time.toString("yyyy/M/d HH:mm");
//        QIcon icon = pro.icon(fi);
//        QString size = change_unit(fi.size());


//    }

    return ;
}


















