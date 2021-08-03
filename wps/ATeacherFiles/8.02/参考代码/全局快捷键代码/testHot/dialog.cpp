#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),isShow(true),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
void Dialog::showHide()
{
    if(isShow)
        hide();
    else
        show();

    isShow=!isShow;
}
Dialog::~Dialog()
{
    delete ui;
}
