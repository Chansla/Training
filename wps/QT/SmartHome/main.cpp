#include "smarthome.h"
#include "login.h"
#include "music.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartHome w;
    Login login;
    Music music;
    login.show();

    QObject::connect(&login, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showLogin()), &login, SLOT(slotShowThis()));

    QObject::connect(&music, SIGNAL(showMain()), &w, SLOT(slotShowThis()));
    QObject::connect(&w, SIGNAL(showMusic()), &music, SLOT(slotShowThis()));


    return a.exec();
}
