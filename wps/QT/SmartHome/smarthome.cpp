#include "smarthome.h"
#include "ui_smarthome.h"
#include <QTime>

SmartHome::SmartHome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartHome)
{
    ui->setupUi(this);
    this->setWindowTitle("智能家居控制系统");
    this->setWindowFlags(Qt::FramelessWindowHint);

}

SmartHome::~SmartHome()
{
    delete ui;
}

void SmartHome::delayShow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
           while (QTime::currentTime() < dieTime)
                   QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void SmartHome::slotShowThis()
{
    delayShow();
    this->show();
}


void SmartHome::on_pushButton_backLogin_clicked()
{
    this->hide();
    emit showLogin();
}


void SmartHome::on_pushButton_Device_clicked()
{
    this->hide();

    emit showDevice();
}

void SmartHome::on_pushButton_Weather_clicked()
{
    this->hide();
    emit showWeather();
}

void SmartHome::on_pushButton_Music_clicked()
{
    this->hide();
    emit showMusic();
}

void SmartHome::on_pushButton_Video_clicked()
{
    this->hide();
    emit showVideo();
}

void SmartHome::on_pushButton_close_clicked()
{
    qApp->exit();
}
