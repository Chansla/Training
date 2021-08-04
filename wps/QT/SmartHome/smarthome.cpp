#include "smarthome.h"
#include "ui_smarthome.h"


SmartHome::SmartHome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartHome)
{
    ui->setupUi(this);
    this->setWindowTitle("智能家居控制系统");

}

SmartHome::~SmartHome()
{
    delete ui;
}

void SmartHome::slotShowThis()
{
    this->show();
}


void SmartHome::on_pushButton_back_clicked()
{
    this->hide();
    emit showLogin();
}


void SmartHome::on_pushButton_device_clicked()
{
    this->hide();
    emit showDevice();
}

void SmartHome::on_pushButton_weather_clicked()
{
    this->hide();
    emit showWeather();
}

void SmartHome::on_pushButton_music_clicked()
{
    this->hide();
    emit showMusic();
}

void SmartHome::on_pushButton_video_clicked()
{
    this->hide();
    emit showVideo();
}
