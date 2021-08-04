#ifndef MUSIC_H
#define MUSIC_H

#include <QWidget>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>
#include <QListWidget>
#include <QListWidgetItem>
namespace Ui {
class Music;
}

class Music : public QWidget
{
    Q_OBJECT

public:
    explicit Music(QWidget *parent = nullptr);
    ~Music();

signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_play_clicked();

    void on_pushButton_pre_clicked();

    void on_pushButton_next_clicked();


    void on_pushButton_back_clicked();

private:
    Ui::Music *ui;
    QMediaPlaylist* playList;
    QMediaPlayer* player;
};

#endif // MUSIC_H
