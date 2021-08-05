#ifndef SMARTHOME_H
#define SMARTHOME_H


#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class SmartHome; }
QT_END_NAMESPACE

class SmartHome : public QMainWindow
{
    Q_OBJECT

public:
    SmartHome(QWidget *parent = nullptr);
    ~SmartHome();

    void delayShow();

signals:
    void showLogin();
    void showDevice();
    void showWeather();
    void showMusic();
    void showVideo();

private slots:
    void slotShowThis();

    void on_pushButton_backLogin_clicked();

    void on_pushButton_device_clicked();

    void on_pushButton_weather_clicked();

    void on_pushButton_music_clicked();

    void on_pushButton_video_clicked();

private:
    Ui::SmartHome *ui;

};
#endif // SMARTHOME_H
