#include "music.h"
#include "ui_music.h"
#include <QFile>
#include <QFileInfoList>
#include <QDir>
#include <QDebug>

Music::Music(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Music)
{
    ui->setupUi(this);
    this->setWindowTitle("音乐播放界面");
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

Music::~Music()
{
    delete ui;
}

void Music::slotShowThis()
{
    this->show();
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
    playList->setCurrentIndex(ui->listWidget->currentRow());
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
    playList->setCurrentIndex(ui->listWidget->currentRow());

}


void Music::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}
