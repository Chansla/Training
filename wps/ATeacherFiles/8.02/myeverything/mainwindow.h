#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include "MyGlobalShortCut/MyGlobalShortCut.h"
#include "MyGlobalShortCut/MyWinEventFilter.h"
#include "thread.h"
#include <QDebug>
#include <QMetaType>
#include <QMenu>
#include <QAction>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include "filesystemwatcher.h"
#include <QList>
#include <QLabel>
#include <myhash.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init_table();
    void int_shortcut_key();

    void insert_data_test();

    void create_menu();


private slots:
    void showHide();
    void ShowFiles(QFileInfoList list);
    void show_menu(QPoint point);
    void open_file(bool flag);
    void del_file(bool flag);
    void change_data(QString old_file,QString new_file);
    void clear_table_data(QString name);
    void on_lineEdit_textChanged(const QString &arg1);
    QString change_unit(const qint64 &size);
    //icon,name,path,size,time
    void insert_new_data(QIcon icon,QString name,QString path,QString size, QString time);

    void set_color();

private:
    Ui::MainWindow *ui;
    MyGlobalShortCut *my_key;
    bool show_flag;
    Thread *mythread;
    QAction *act_open;
    QAction *act_del;
    QMenu *menu;
    QString file_info;
    FileSystemWatcher *watch;
    Myhash *sh;
    QFileInfoList list;
    int flag;
};

#endif // MAINWINDOW_H
