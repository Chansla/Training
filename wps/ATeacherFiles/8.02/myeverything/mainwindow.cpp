#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //若是要在信号与槽中，使用自定义的类型,则需要用qRegisterMetaType把自己的类型进行注册
    qRegisterMetaType<QFileInfoList>("QFileInfoList");

    //初始化table表格信息
    init_table();
    //初始化按钮隐藏,窗口信息
    int_shortcut_key();
  //  insert_data_test();

    //1.添加监控类对象.
    watch = FileSystemWatcher::addWatchPath("C:/Users/wps/Desktop/");

    mythread = new Thread;
    sh = Myhash::get_instacnce();


    connect(mythread,SIGNAL(send_file_info(QFileInfoList)),this,SLOT(ShowFiles(QFileInfoList)));
    connect(watch,SIGNAL(rename_singal(QString,QString)),this,SLOT(change_data(QString,QString)));
    connect(watch,SIGNAL(new_file_dir(QIcon,QString,QString,QString,QString)),this,SLOT(insert_new_data(QIcon,QString,QString,QString,QString)));
    connect(watch,SIGNAL(delete_file(QString)),this,SLOT(clear_table_data(QString)));
    connect(this->sh,SIGNAL(send_find_data(QFileInfoList)),this,SLOT(ShowFiles(QFileInfoList)));
    mythread->start();

    this->flag = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_table()
{
    //1.设计列数
    ui->tableWidget->setColumnCount(4);
  //  ui->tableWidget->setRowCount(10);
    //2.隐藏列头
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置自适应宽度
   // ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
    //然后设置要根据内容使用宽度的列
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    //取消边框线
    ui->tableWidget->setShowGrid(false);

    QStringList  header;
    header << "名称" << "路径" << "大小" << "修改时间";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    //设置不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //设置单选模式
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);  //设置选择行为时每次选择一个表格



   // ui->tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
    //解决表头塌陷问题:点击表格时不对表格行光亮（获取焦点）
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    //开启tablewidget的右键菜单--上下文菜单
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(show_menu(QPoint)));

}

void MainWindow::int_shortcut_key()
{

    //默认窗口处于隐藏状态.按下键的时候,显示窗口
    this->show_flag = true;

    my_key = new MyGlobalShortCut("alt+space",this);
    connect(my_key,SIGNAL(activated()),this,SLOT(showHide()));
}

void MainWindow::insert_data_test()
{
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("张三"));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem("李四"));
    ui->tableWidget->setItem(2,0,new QTableWidgetItem("王五"));
}

void MainWindow::create_menu()
{
    menu = new QMenu();

    act_open = new QAction("打开",this);
    act_del = new QAction("删除",this);

    menu->addAction(act_open);
    menu->addAction(act_del);

    connect(act_open,SIGNAL(triggered(bool)),this,SLOT(open_file(bool)));
    connect(act_del,SIGNAL(triggered(bool)),this,SLOT(del_file(bool)));
    menu->exec(QCursor::pos());
}

void MainWindow::showHide()
{
    //为真显示窗口,为假隐藏窗口
    (show_flag) == true ? this->show() : this->hide();
    show_flag = !show_flag;
}

void MainWindow::ShowFiles(QFileInfoList list)
{
    QFileIconProvider pro;
    QString name;
    QDateTime last_time;
    QFileInfo fi;
    QString path;

    ui->tableWidget->setRowCount(list.count()); //统计QFileInfo的个数

    for(int i = 0;i < list.count();i++)
    {
        fi = list.at(i);

        path = "C:/Users/wps/Desktop/";
        name = fi.fileName();
        last_time = fi.lastModified();
        QString time = last_time.toString("yyyy/M/d HH:mm");
        QIcon icon = pro.icon(fi);
        QString size = change_unit(fi.size());

     //   qDebug() << "rowcount = " << rowcount << endl;
        QColor color(247,247,247);

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(icon,name));
        ui->tableWidget->item(i,0)->setBackgroundColor(color);


        ui->tableWidget->setItem(i,1,new QTableWidgetItem(path));
        ui->tableWidget->item(i,1)->setFlags(0);

        ui->tableWidget->setItem(i,2,new QTableWidgetItem(size));
        ui->tableWidget->item(i,2)->setFlags(0);
        ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignHCenter);

        ui->tableWidget->setItem(i,3,new QTableWidgetItem(time));
        ui->tableWidget->item(i,3)->setFlags(0);
        qDebug() << name << "  size = " << size << " time = " << time \
                 << " path = " <<path;
    }
    //第一次获得的桌面信息是最全的,故保持其信息
    if(flag == 0)
    {
        this->list = list;
        flag = 1;
        sh->insert_data("",list);
    }

}

void MainWindow::show_menu(QPoint point)
{
    qDebug() << "show_nenu";

    QTableWidgetItem *item = ui->tableWidget->currentItem();

    if(!item)
    {
        qDebug() << "empty";
        return ;
    }else{
        file_info = item->text();
        create_menu();
        qDebug() << "file_info = " << file_info;
        ui->tableWidget->setCurrentItem(NULL); //每次点击完成把currentItem清空,为下一次操作做准备
    }

}

void MainWindow::open_file(bool flag)
{
    Q_UNUSED(flag);
    QString path =  "C:/Users/wps/Desktop/" + file_info;
    QFileInfo  file(path);

    //若是路径不存在,直接结束
    if(!file.exists())
    {
        QMessageBox::warning(NULL,"文件信息","文件路径不存在",QMessageBox::Ok,QMessageBox::Ok);
        return ;
    }

    //启动对应的文件/文件夹
    QDesktopServices::openUrl(QUrl("file:///" + path));
}

void MainWindow::del_file(bool flag)
{
     Q_UNUSED(flag);
    qDebug() << "delete file";

   QString path =  "C:/Users/wps/Desktop/" + file_info;
    QFileInfo  file(path);

    //若是路径不存在,直接结束
    if(!file.exists())
    {
        QMessageBox::warning(NULL,"文件信息","文件路径不存在",QMessageBox::Ok,QMessageBox::Ok);
        return ;
    }

    if(file.isFile())
    {
        bool del_flag = QFile::remove(path);
        if(!del_flag)
        {
             QMessageBox::warning(NULL,"文件信息","删除失败",QMessageBox::Ok,QMessageBox::Ok);
             return ;
        }
    }else if(file.isDir())
    {
        QDir qDir(path);
        qDir.removeRecursively();
    }

    //清除hash表中,该文件的信息
    clear_table_data(path);
}

void MainWindow::change_data(QString old_file, QString new_file)
{
    int line;
    QList<QTableWidgetItem *> item = ui->tableWidget->findItems(old_file,Qt::MatchExactly);
    for(int i = 0; i != item.size();i++)
    {
         line = item.at(i)->row();
         ui->tableWidget->item(line,0)->setText(new_file);
    }

}

void MainWindow::clear_table_data(QString name)
{
    //删除后,更新list的值
    list = sh->delete_file(name,list);
}
//当用户输入了文字
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug() << "text change";
    this->sh->find_data(arg1,list);
    set_color();
}

//1GB = 1024MB = 1024 * 1024 KB == 1024 * 1024 * 1024B
QString MainWindow::change_unit(const qint64 &size)
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

void MainWindow::insert_new_data(QIcon icon, QString name, QString path, QString size, QString time)
{
    int rowcount;
    rowcount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowcount);

    qDebug() << "rowcount = " << rowcount << endl;
    QColor color(247,247,247);

    ui->tableWidget->setItem(rowcount,0,new QTableWidgetItem(icon,name));
    ui->tableWidget->item(rowcount,0)->setBackgroundColor(color);


    ui->tableWidget->setItem(rowcount,1,new QTableWidgetItem(path));
    ui->tableWidget->item(rowcount,1)->setFlags(0);

    ui->tableWidget->setItem(rowcount,2,new QTableWidgetItem(size));
    ui->tableWidget->item(rowcount,2)->setFlags(0);
    ui->tableWidget->item(rowcount,2)->setTextAlignment(Qt::AlignHCenter);

    ui->tableWidget->setItem(rowcount,3,new QTableWidgetItem(time));
    ui->tableWidget->item(rowcount,3)->setFlags(0);
    qDebug() << name << "  size = " << size << " time = " << time \
             << " path = " <<path;

    //更新list中的数据
    QFileInfo  info;
    info.setFile(path + name);

    //更新hash表中的数据
    list = sh->insert_item_data(list,info);

}

//给我们的查找的关键字,设置颜色
void MainWindow::set_color()
{
    //若是书写的是大写形式,返回其小写形式。
    QString str=ui->lineEdit->text().toLower();
    if(str=="")
        return ;

    QString key = ui->lineEdit->text();

    //便利hash表中所有的数据
    for(int i=0;i<sh->get_size(key);i++){

        QString markName="";
        QString fileName=sh->get_filename(key,i);  //找到每个QFileInfo的信息
        int k=0;

        //找到文件名中的每个字符
        for(int j=0;j<fileName.size();j++){

            QString Engchar=ZhToPY::Instance()->zhToJP(QString(fileName[j])).toLower();
            //若是找到对应的字符,把字符设置为红色
            if((fileName[j]==str[k]||Engchar==str[k])&&k<str.size()){
                markName+=("<font color=red><b>"+QString(fileName[j])+"</b></font>");
                k++;
            }
            else
            {
                markName.push_back(fileName[j]);
            }
        }
        //把第一列的数据清空
        ui->tableWidget->item(i,0)->setText("");

        //把标红后的字符定义为QLable，把QLabel设置为第一个列中.
        QLabel* label=new QLabel(markName,this);
        QFont font;
        //设置字体，并插入到第一列
        font.setFamily("Microsoft YaHei");
        label->setFont(font);
        this->ui->tableWidget->setCellWidget(i,0,label);
    }

    return ;
}





















