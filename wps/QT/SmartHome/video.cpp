#include "video.h"
#include "ui_video.h"

Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    this->setWindowTitle("视频监控界面");
}

Video::~Video()
{
    delete ui;
}

void Video::slotShowThis()
{
    this->show();
}

void Video::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}
