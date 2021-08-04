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

void SmartHome::on_pushButton_music_clicked()
{
    this->hide();
    emit showMusic();
}


