#include "filesystemwatcher.h"

FileSystemWatcher* FileSystemWatcher::m_pInstance = NULL;

FileSystemWatcher::FileSystemWatcher(QObject *parent)
    : QObject(parent)
{
}
FileSystemWatcher * FileSystemWatcher::addWatchPath(QString path)
{
    qDebug() << QString("Add to watch: %1").arg(path);

        if (m_pInstance == NULL)
        {
            m_pInstance = new FileSystemWatcher();
            m_pInstance->m_pSystemWatcher = new QFileSystemWatcher();

            // 连接QFileSystemWatcher的directoryChanged和fileChanged信号到相应的槽
            connect(m_pInstance->m_pSystemWatcher, SIGNAL(directoryChanged(QString)), m_pInstance, SLOT(directoryUpdated(QString)));
            connect(m_pInstance->m_pSystemWatcher, SIGNAL(fileChanged(QString)), m_pInstance, SLOT(fileUpdated(QString)));
        }

        // 添加监控路径
        m_pInstance->m_pSystemWatcher->addPath(path);

        // 如果添加路径是一个目录，保存当前内容列表
        QFileInfo file(path);
        if (file.isDir())
        {
            const QDir dirw(path);
            m_pInstance->m_currentContentsMap[path] = dirw.entryList(QDir::NoDotAndDotDot | QDir::AllDirs | QDir::Files, QDir::DirsFirst);
        }

        return m_pInstance;
}

QString FileSystemWatcher::change_unit(const qint64 &size)
{
    int integer = 0;  //整数位
    int decimal = 0;  //小数位，保留三位
    char unit ='K';
    qint64 standardSize = size;
    qint64 curSize = size;

    if(standardSize > 1024) {
        curSize = standardSize * 1000;
        curSize /= 1024;
        integer = curSize / 1000;
        decimal = curSize % 1000;
        standardSize /= 1024;
        unit = 'K';
        if(standardSize > 1024) {
            curSize = standardSize * 1000;
            curSize /= 1024;
            integer = curSize / 1000;
            decimal = curSize % 1000;
            standardSize /= 1024;
            unit = 'M';
            if(standardSize > 1024) {
                curSize = standardSize * 1000;
                curSize /= 1024;
                integer = curSize / 1000;
                decimal = curSize % 1000;
                unit = 'G';
            }
        }
    }

    return QString::number(integer) + unit + "B";
}

void FileSystemWatcher::directoryUpdated(const QString &path)
{
        qDebug() << QString("Directory updated: %1").arg(path);

        // 比较最新的内容和保存的内容找出区别(变化)
        QStringList currEntryList = m_currentContentsMap[path];
        const QDir dir(path);

        QStringList newEntryList = dir.entryList(QDir::NoDotAndDotDot  | QDir::AllDirs | QDir::Files, QDir::DirsFirst);

        QSet<QString> newDirSet = QSet<QString>::fromList(newEntryList);
        QSet<QString> currentDirSet = QSet<QString>::fromList(currEntryList);

        // 添加了文件
        QSet<QString> newFiles = newDirSet - currentDirSet;
        QStringList newFile = newFiles.toList();

        // 文件已被移除
        QSet<QString> deletedFiles = currentDirSet - newDirSet;
        QStringList deleteFile = deletedFiles.toList();

        //获得文件的信息
        QString name,pathinfo,size,time;
        QIcon icon;
        QFileIconProvider pro;
        QFileInfo  fi;

        // 更新当前设置
        m_currentContentsMap[path] = newEntryList;

        if (!newFile.isEmpty() && !deleteFile.isEmpty())
        {
            // 文件/目录重命名
            if ((newFile.count() == 1) && (deleteFile.count() == 1))
            {
                 qDebug() << QString("File Renamed from %1 to %2").arg(deleteFile.first()).arg(newFile.first());
                 //文件重命名,发送(老文件名,新文件名)
                 emit  rename_singal(deleteFile.first(),newFile.first());
            }
        }
        else
        {
            // 添加新文件/目录至Dir
            if (!newFile.isEmpty())
            {
                qDebug() << "New Files/Dirs added: " << newFile;

                foreach (QString file, newFile)
                {
                    fi.setFile((path  + file));
                    qDebug() << "new file = " << path + "/" + newFile.at(0);
                    icon = pro.icon(fi);
                    name = file;
                    QString time = fi.lastModified().toString("yyyy/M/d HH:mm");
                    QString size = change_unit(fi.size());
                    emit new_file_dir(icon,name,path,size,time);
                }
            }

            // 从Dir中删除文件/目录
            if (!deleteFile.isEmpty())
            {
                qDebug() << "Files/Dirs deleted: " << deleteFile;

                foreach(QString file, deleteFile)
                {
                    emit delete_file(file);
                }
            }
        }
}

void FileSystemWatcher::fileUpdated(const QString &path)
{
    QFileInfo file(path);
    QString strPath = file.absolutePath();
    QString strName = file.fileName();

    qDebug() << QString("The file %1 at path %2 is updated").arg(strName).arg(strPath);
}


