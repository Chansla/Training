#include "dialog.h"
#include <QApplication>
#include"MyGlobalShortCut/MyGlobalShortCut.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

   // MyGlobalShortCut *action=new MyGlobalShortCut("CTRL+F10",&w);
    MyGlobalShortCut *action=new MyGlobalShortCut("ALT+SPACE",&w);
    QObject::connect(action,SIGNAL(activated()),&w,SLOT(showHide()));

    w.show();

    return a.exec();
}
