#include "smarthome.h"
#include "ui_smarthome.h"



#include <QDebug>

SmartHome::SmartHome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartHome)
{
    ui->setupUi(this);


}

SmartHome::~SmartHome()
{
    delete ui;
}

