#ifndef VIDEO_H
#define VIDEO_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
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

    void on_pushButton_screenshot_clicked();

    void slotImageCaptured(int index, QImage image);

private:
    Ui::Video *ui;
    QCamera* camera;
    QCameraViewfinder* viewFinder;
    QCameraImageCapture* capture;


    QString path = "../SmartHome/screenShoots";
};

#endif // VIDEO_H
