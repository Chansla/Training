#include "myhash.h"

//1.初始化静态变量
Myhash *Myhash::hash = NULL;

//初始化静态空间
Myhash::DeleteSpace  Myhash::ds;


QMutex mutex;  //定义全局变量

Myhash::Myhash(QObject *parent) : QObject(parent)
{

}

Myhash *Myhash::get_instacnce()
{
    //防止多线程中抢占资源
    if(hash == NULL)
    {
         mutex.lock(); //上锁
         if(hash == NULL)
         {
            hash = new Myhash;
         }
          mutex.unlock(); //解锁
    }

    return hash;
}

void Myhash::insert_data(QString  str, QFileInfoList fileinfo)
{
    sh.insert(str,fileinfo);
}

QFileInfoList Myhash::get_data(QString  str)
{
    return sh[str];
}

void Myhash::find_data(QString str,QFileInfoList list)
{
    //在hash表中查找 str字符
    if(sh.find(str) == sh.end())
    {
        auto it=sh.begin();
        for(;it!=sh.end();it++){
            if(str.contains(it.key())){
                sh[str]=search(str,it.value());
                break;
            }
        }
        if(it==sh.end())
            sh[str]=search(str,list);
    }
    emit send_find_data(sh[str]);
}

QFileInfoList Myhash::search(const QString &str, QFileInfoList file)
{
    if(str == "")
        return file;//若是空字符串 ,直接返回

    QFileInfoList ret;
    QMultiMap<int,QFileInfo>m;//分类存储文件  ---QMap的子类

    QString strEng=getEnglish(str);
    for(int i=0;i<file.size();i++)
    {
        QString fileName=file[i].fileName().toLower();
        QString EngName=getEnglish(file[i].fileName());
        if(EngName==strEng){//第一类--完全匹配
            m.insert(1,file[i]);
        }
        else if(fileName.contains(QRegExp("[\\x4e00-\\x9fa5]+"))){//如果有中文
            QString Ch=getChinese(fileName);//提取中文字符
            QString jp=ZhToPY::Instance()->zhToJP(Ch).toLower();
            if(EngName.contains(str)||fileName.contains(str)||Ch.contains(str)){ //第二类--首字母匹配
                m.insert(2,file[i]);
            }
            else if(jp.contains(str)){
                m.insert(3,file[i]);
            }
            else if(findChar(strEng,EngName)){
                m.insert(4,file[i]);
            }
        }
        else if(fileName.contains(str)){//第三类--包含字符串
            m.insert(3,file[i]);
        }
        else if(findChar(str,fileName)){//第四类--模糊匹配
            m.insert(4,file[i]);
        }
    }

    //读取排序好的文件数据
    for(auto it=m.begin();it!=m.end();it++){
        ret<<it.value();
    }

    return ret;
}

QString Myhash::getEnglish(QString str)
{
    QString ret;
    //提供正则表达式的匹配模式，判断QString中是否有汉字, 汉字在unicode中的编码范围一般为0x4e00 ~ 0x9fa5
    if(!str.contains(QRegExp("[\\x4e00-\\x9fa5]+"))){
        ret=str;
    }
    else{
        QString Ch=getChinese(str);//提取中文字符
        QString jp=ZhToPY::Instance()->zhToJP(Ch).toLower();

        int k=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]==Ch[k]){
                ret.push_back(jp[k]);
                k++;
            }
            else
                ret.push_back(str[j]);
        }
    }

    return ret.toLower();
}

QString Myhash::getChinese(QString str)
{
    QString chineseStr;
    int nCount = str.count();
    for(int i = 0 ; i < nCount ; i++)
    {
        QChar cha = str.at(i);
        ushort uni = cha.unicode();
        if(uni >= 0x4E00 && uni <= 0x9FA5)
        {
            chineseStr.append(uni);
        }
    }
    return chineseStr;  //最后返回的这个字符串就是中文字符串
}
//wx =====> weixin
bool Myhash::findChar(const QString &str, const QString &name)
{
    int k=0;
    for(int j=0;j<name.size()&&k<str.size();j++){
        if(name[j]==str[k]){
            k++;
        }
    }
    if(k==str.size()){
        return true;
    }
    return false;
}

int Myhash::get_size(QString key)
{
    return sh[key].size();
}

QString Myhash::get_filename(QString key, int index)
{
    return sh[key].at(index).fileName();
}

QFileInfoList Myhash::delete_file(QString filename,QFileInfoList list)
{
    sh.clear();

    for(int i = 0;i < list.size();i++)
    {
        if(list[i].fileName() == filename)
        {
            list.removeAt(i);
        }
    }

    sh.insert("",list);

    emit send_find_data(list);

    return list;
}

QFileInfoList Myhash::insert_item_data(QFileInfoList list,QFileInfo file)
{
    sh.clear();
    list.append(file);
    sh.insert("",list);

    return list;
}


Myhash::DeleteSpace::DeleteSpace()
{

}

Myhash::DeleteSpace::~DeleteSpace()
{
     if(hash != NULL)
         delete hash;
}
