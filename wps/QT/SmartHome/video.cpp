#include "video.h"
#include "ui_video.h"
#include <QTime>
#include <QFile>
#include <QCameraInfo>
#include <QMessageBox>
#include <QDesktopServices>
#include <QDateTime>

Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    this->setWindowTitle("视频监控界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->pushButton_open->setCheckable(true);


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
           return;
        }
        foreach(const QCameraInfo &cameraInfo, cameras)
        {

            qDebug() << "CameraInfo:" << cameraInfo;
        }

        camera = new QCamera(this);
        viewFinder = new QCameraViewfinder();
        capture =  new QCameraImageCapture(camera);

        viewFinder->show();
        camera->setViewfinder(viewFinder);
        camera->start();
        connect(capture, SIGNAL(imageCaptured(int, QImage)), this, SLOT(slotImageCaptured(int, QImage)));
    }
}

void Video::on_pushButton_snipaste_clicked()
{
    capture->capture();
}

void Video::on_pushButton_screenshot_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile(path));
}

void Video::slotImageCaptured(int index, QImage image)
{
    if(image.isNull())
    {
        ui->textBrowser_video->append(tr("截图失败！结果未保存！"));
        return;
    }
    QPixmap pixImage = QPixmap::fromImage(image);
    pixImage = pixImage.scaled(190, 190, Qt::KeepAspectRatio);
//    ui->label_screenshoot->setScaledContents(true);
    ui->label_screenshoot->setPixmap(pixImage);
    QDateTime currentTime = QDateTime::currentDateTime();
    QString time = currentTime.toString("yyyy_MM_dd_hh_mm_ss");
    QString imagePath = path + "/SmartHome_" + QString::number(index) + time + ".png";
    image.save(imagePath);
    ui->textBrowser_video->append(tr("截图成功！保存至:")+ imagePath);
}
