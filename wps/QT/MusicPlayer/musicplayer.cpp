#include "musicplayer.h"
#include "ui_musicplayer.h"
#include <QFile>
#include <QFileInfoList>
#include <QDir>
#include <QDebug>

MusicPlayer::MusicPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);
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
    ui->listWidget->setCurrentRow(0);
    player->setPlaylist(playList);
    player->setVolume(20);
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

//双击音乐列表直接播放
void MusicPlayer::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
    playList->setCurrentIndex(ui->listWidget->currentRow());
    player->play();
}

// 播放/暂停
void MusicPlayer::on_pushButton_play_clicked()
{
    if(player->state() == QMediaPlayer::State::PlayingState)
    {
        player->pause();
    }
    else
    {
        player->play();
    }
}

// 上一首
void MusicPlayer::on_pushButton_pre_clicked()
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
    playList->setCurrentIndex(ui->listWidget->currentRow());
}

// 下一首
void MusicPlayer::on_pushButton_next_clicked()
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
    playList->setCurrentIndex(ui->listWidget->currentRow());
}
