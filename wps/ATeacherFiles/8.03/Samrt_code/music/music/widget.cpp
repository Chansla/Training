#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //1.分配内存空间
    music = new QMediaPlayer(this);

    //2.设置播放路径
    //QString Path = "C:/Users/wps/Desktop/Samrt_code/music/song";
    QString path = "../song/鞠婧祎-青城山下白素贞.mp3";
    music->setMedia(QUrl::fromLocalFile(path));
    //3.设置音量
    music->setVolume(40); // 0~100
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString filename = item->text();
    qDebug() << "filename = " << filename;

    //获得当前行的信息
    int line = ui->listWidget->currentRow();

}

void Widget::on_pushButton_clicked()
{
    music->play();
}
