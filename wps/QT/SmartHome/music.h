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

    void delayShow();

signals:
    void showMain();

private slots:
    void slotShowThis();

    void slotSetIndex(int index);

    void slotSetVolume(int volume);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_play_clicked();

    void on_pushButton_pre_clicked();

    void on_pushButton_next_clicked();


    void on_pushButton_back_clicked();

    void on_verticalSlider_volume_valueChanged(int value);

    void on_pushButton_up_clicked();

    void on_pushButton_down_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::Music *ui;
    QMediaPlaylist* playList;
    QMediaPlayer* player;
    qint8 musicVolume;
};

#endif // MUSIC_H
