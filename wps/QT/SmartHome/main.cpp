#include "smarthome.h"
#include "login.h"
#include "device.h"
#include "weather.h"
#include "music.h"
#include "video.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font;
    font.setPointSize(10);
    font.setFamily(("SimSun"));
    font.setBold(false);
    a.setFont(font);




    SmartHome w;
    Login login;
    Device device;
    Weather weather;
    Music music;
    Video video;


    login.show();
    QObject::connect(&login, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showLogin()), &login, SLOT(slotShowThis()));

    QObject::connect(&device, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showDevice()), &device, SLOT(slotShowThis()));

    QObject::connect(&weather, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showWeather()), &weather, SLOT(slotShowThis()));

    QObject::connect(&music, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showMusic()), &music, SLOT(slotShowThis()));

    QObject::connect(&video, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showVideo()), &video, SLOT(slotShowThis()));





    return a.exec();
}
