#ifndef FILESYSTEMWATCHER_H
#define FILESYSTEMWATCHER_H

#include <QMainWindow>
#include <QObject>
#include <QMap>
#include <QFileSystemWatcher>
#include <QDir>
#include <QFileInfo>
#include <qDebug>
#include <QFileIconProvider>
#include <QIcon>
#include <QDateTime>
//使用单例模式
class FileSystemWatcher : public QObject
{
    Q_OBJECT

public:
    static FileSystemWatcher * addWatchPath(QString path);
    QString  change_unit(const qint64 &size);
public slots:
    void directoryUpdated(const QString &path);  // 目录更新时调用，path是监控的路径
    void fileUpdated(const QString &path);   // 文件被修改时调用，path是监控的路径

signals:
    void rename_singal(QString old_file,QString new_file);
    void new_file_dir(QIcon icon,QString name,QString path,QString size,QString time);
    void delete_file(QString file);

private:
    explicit FileSystemWatcher(QObject *parent = 0);

private:
    static FileSystemWatcher *m_pInstance; // 单例
    QFileSystemWatcher *m_pSystemWatcher;  // QFileSystemWatcher变量
    QMap<QString, QStringList> m_currentContentsMap; // 当前每个监控的内容目录列表

};

#endif // FILESYSTEMWATCHER_H
