#include "video.h"
#include "ui_video.h"
#include <QTime>
#include <QFile>
#include <QCameraInfo>
#include <QMessageBox>

Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    this->setWindowTitle("视频监控界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->pushButton_open->setCheckable(true);


//    viewFinder = new QCameraViewfinder();
//    capture =  new QCameraImageCapture(camera);

//    viewFinder->show();
//    camera->setViewfinder(viewFinder);
//    camera->start();

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



void Video::on_pushButton_open_clicked()
{
    if(ui->pushButton_open->isChecked())
    {
        QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
        if(cameras.empty())
        {
           QMessageBox::warning(this, tr("提示"), tr("没有找到摄像头！"));
        }
        foreach(const QCameraInfo &cameraInfo, cameras)
        {
            qDebug() << "CameraInfo:" << cameraInfo;
        }
    }
}

void Video::on_pushButton_snipaste_clicked()
{

}

void Video::on_pushButton_screenshot_clicked()
{

}
