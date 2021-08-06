#ifndef VIDEO_H
#define VIDEO_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QListWidgetItem>
namespace Ui {
class Video;
}

class Video : public QWidget
{
    Q_OBJECT

public:
    explicit Video(QWidget *parent = nullptr);
    ~Video();
    void delayShow();
signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_pushButton_back_clicked();

    void on_pushButton_open_clicked();

    void on_pushButton_snipaste_clicked();

    void on_pushButton_video_clicked();

    void slotSetIndex(int index);

    void slotImageCaptured(int index, QImage image);

    void on_listWidget_video_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_close_clicked();

private:
    Ui::Video *ui;
    QCamera* camera = nullptr;
    QCameraViewfinder* viewFinder = nullptr;
    QCameraImageCapture* capture = nullptr;
    QVideoWidget* videowidget;
    QMediaPlayer* player;
    QMediaPlaylist* playList;

    QString videoPath;
    QString path;
};

#endif // VIDEO_H
