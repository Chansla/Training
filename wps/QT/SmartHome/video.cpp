#include "video.h"
#include "ui_video.h"
#include <QTime>
Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    this->setWindowTitle("视频监控界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
}

Video::~Video()
{
    delete ui;
}

void Video::delayShow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
    while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Video::slotShowThis()
{
    delayShow();
    this->show();
}

void Video::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}
