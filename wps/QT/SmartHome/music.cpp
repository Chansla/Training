#include "music.h"
#include "ui_music.h"
#include <QFile>
#include <QFileInfoList>
#include <QDir>
#include <QDebug>
#include <QTime>

Music::Music(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Music)
{
    ui->setupUi(this);
    this->setWindowTitle("音乐播放界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    playList = new QMediaPlaylist;
    player = new QMediaPlayer;

    QString songPath = "../MusicPlayer/song";
    QDir dir(songPath);
    dir.setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    QFileInfoList songs = dir.entryInfoList();

    for(int i = 0; i< songs.count(); i++)
    {
       ui->listWidget->addItem(songs[i].fileName());
       playList->addMedia(QUrl::fromLocalFile(songs[i].absoluteFilePath()));
    }
    connect(playList, SIGNAL(currentIndexChanged(int)), this, SLOT(slotSetIndex(int)));
    ui->listWidget->setCurrentRow(0);

    player->setPlaylist(playList);
    ui->verticalSlider_volume->setRange(0, 100);
    musicVolume = 20;
    ui->verticalSlider_volume->setValue(musicVolume);
    // 播放器音量与滑动条和音量变量关联
    connect(player, SIGNAL(volumeChanged(int)), this, SLOT(slotSetVolume(int)));
}

Music::~Music()
{
    delete ui;
}

void Music::delayShow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
    while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
void Music::slotShowThis()
{
    delayShow();
    this->show();
}

void Music::slotSetIndex(int index)
{
    ui->listWidget->setCurrentRow(index);
}

void Music::slotSetVolume(int volume)
{
    this->musicVolume = volume;
    ui->verticalSlider_volume->setValue(volume);
}

void Music::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
    playList->setCurrentIndex(ui->listWidget->currentRow());
    player->play();
}


void Music::on_pushButton_play_clicked()
{
    playList->setCurrentIndex(ui->listWidget->currentRow());
    if(player->state() == QMediaPlayer::State::PlayingState)
    {
        player->pause();
    }
    else
    {
        player->play();
    }
}

void Music::on_pushButton_pre_clicked()
{
    int row = ui->listWidget->currentRow();
    if(row == 0)
    {
       row = ui->listWidget->count() -1;
    }
    else
    {
        row--;
    }
    ui->listWidget->setCurrentRow(row);
    playList->setCurrentIndex(row);
}

void Music::on_pushButton_next_clicked()
{
    int row = ui->listWidget->currentRow();
    if(row == ui->listWidget->count()-1)
    {
       row = 0;
    }
    else
    {
        row++;
    }
    ui->listWidget->setCurrentRow(row);
    playList->setCurrentIndex(row);

}


void Music::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}

void Music::on_verticalSlider_volume_valueChanged(int value)
{
    player->setVolume(value);
}

void Music::on_pushButton_up_clicked()
{
    if(this->musicVolume < 90)
    {
        this->musicVolume +=10;
    }
    else
    {
        this->musicVolume = 100;
    }
    player->setVolume(musicVolume);
}

void Music::on_pushButton_down_clicked()
{
    if(this->musicVolume > 10)
    {
        this->musicVolume -= 10;
    }
    else
    {
        this->musicVolume = 0;
    }
    player->setVolume(musicVolume);
}
