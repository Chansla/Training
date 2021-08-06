#include "video.h"
#include "ui_video.h"
#include <QTime>
#include <QFile>
#include <QCameraInfo>
#include <QMessageBox>
#include <QDesktopServices>
#include <QDateTime>
#include <QVideoWidget>
#include <QDir>
Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    this->setWindowTitle("视频监控界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->pushButton_open->setCheckable(true);
    ui->pushButton_video->setCheckable(true);

    videoPath = QDir::currentPath() + "/video";
    path = QDir::currentPath() + "/screenshoots";

    // init camera
    camera = new QCamera;
    viewFinder = new QCameraViewfinder();
    capture =  new QCameraImageCapture(camera);

    viewFinder->setWindowFlags(Qt::FramelessWindowHint);
    viewFinder->setGeometry(10, 10, 380, 370);
    viewFinder->setParent(ui->groupBox_video);
    viewFinder->hide();

    // init video player
    QDir dir(videoPath);
    dir.setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    QFileInfoList songs = dir.entryInfoList();

    player=new QMediaPlayer; //视频播放器
    player->setNotifyInterval(2000);   //信息更新周期2000ms
    playList = new QMediaPlaylist;

    videowidget = new QVideoWidget;
    videowidget->setGeometry(10, 10, 380, 370);
    videowidget->setParent(ui->groupBox_video);
    videowidget->hide();
    player->setVideoOutput(videowidget);

    for(int i = 0; i< songs.count(); i++)
    {
       ui->listWidget_video->addItem(songs[i].fileName());
       playList->addMedia(QUrl::fromLocalFile(songs[i].absoluteFilePath()));
    }
    connect(playList, SIGNAL(currentIndexChanged(int)), this, SLOT(slotSetIndex(int)));
    connect(ui->listWidget_video, &QListWidget::itemDoubleClicked, ui->pushButton_video,
            [&]()   {  if(!ui->pushButton_video->isChecked() && !ui->pushButton_open->isChecked())
                        {
                            player->play();
                            ui->label_log->setText(tr("视频播放开启."));
                            ui->pushButton_video->setChecked(true);
                        }
                    });

    player->setPlaylist(playList);
    ui->listWidget_video->setCurrentRow(0);



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
    if(ui->pushButton_video->isChecked())
    {
        QMessageBox::warning(this, tr("提示！"), tr("请先关闭视频播放！"));
        ui->pushButton_open->setChecked(false);
        return;
    }
    else
    {
        if(!viewFinder->isHidden())
        {
            camera->stop();
            ui->label_log->setText(tr("摄像头关闭."));
            viewFinder->hide();
            ui->pushButton_open->setChecked(false);
            return;
        }
        videowidget->hide();
        viewFinder->show();
        QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
        if(cameras.empty())
        {
           QMessageBox::warning(this, tr("提示"), tr("没有找到摄像头！"));
           ui->pushButton_open->setChecked(false);
           return;
        }
        foreach(const QCameraInfo &cameraInfo, cameras)
        {

            qDebug() << "CameraInfo:" << cameraInfo;
        }

        camera->setViewfinder(viewFinder);
        camera->start();
        connect(capture, SIGNAL(imageCaptured(int, QImage)), this, SLOT(slotImageCaptured(int, QImage)));
        ui->label_log->setText(tr("摄像头开启."));
    }
}

void Video::on_pushButton_snipaste_clicked()
{
    if(ui->pushButton_open->isChecked() && camera)
    {
        capture->capture();
    }
    else
    {
        QMessageBox::warning(this, tr("提示"), tr("请先打开摄像头！"));
        return;
    }
}

void Video::on_pushButton_video_clicked()
{
    if(ui->pushButton_open->isChecked())
    {
        QMessageBox::warning(this, tr("提示！"), tr("请先关闭视频监控！"));
        ui->pushButton_video->setChecked(false);
        return;
    }
    if(playList->isEmpty())
    {
        ui->label_log->setText(tr("暂时没有添加视频文件！"));
        ui->pushButton_video->setChecked(false);
        return;
    }
    else
    {
        if(!ui->pushButton_video->isChecked() &&player->state() == QMediaPlayer::State::PlayingState)
        {
          player->stop();
          ui->label_log->setText(tr("视频播放关闭."));
          videowidget->hide();
          return;
        }
        viewFinder->hide();
        videowidget->show();
        playList->setCurrentIndex(ui->listWidget_video->currentRow());
        player->play();
        ui->label_log->setText(tr("视频播放开启."));
    }
}

void Video::slotSetIndex(int index)
{
    ui->listWidget_video->setCurrentRow(index);
}


void Video::on_listWidget_video_itemDoubleClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
    playList->setCurrentIndex(ui->listWidget_video->currentRow());
    player->play();
    ui->pushButton_video->setChecked(false);
}

void Video::slotImageCaptured(int index, QImage image)
{
    Q_UNUSED(index);
    if(image.isNull())
    {
        ui->label_log->setText(tr("截图失败！\n结果未保存！"));
        return;
    }
    QPixmap pixImage = QPixmap::fromImage(image);
    pixImage = pixImage.scaled(190, 190, Qt::KeepAspectRatio);
//    ui->label_screenshoot->setScaledContents(true);
    ui->label_screenshoot->setPixmap(pixImage);
    QDateTime currentTime = QDateTime::currentDateTime();
    QString time = currentTime.toString("yyyy_MM_dd_hh_mm_ss");
    QString imagePath = path + "/SmartHome_" + time + ".png";
    image.save(imagePath);
    ui->label_log->setText(tr("截图成功！\n保存至:")+ imagePath);
}



void Video::on_pushButton_close_clicked()
{
    qApp->exit();
}
