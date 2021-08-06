#include "device.h"
#include "ui_device.h"
#include <QFile>
#include <QDebug>
#include <QTime>
Device::Device(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Device)
{
    loadStyleSheet("device");
    ui->setupUi(this);
    this->setWindowTitle("设备控制界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->horizontalSlider_lightHost->setRange(0, 10);
    ui->horizontalSlider_lightSpot->setRange(0, 10);
    ui->horizontalSlider_sound->setRange(0, 100);
    ui->lineEdit_temperature->setReadOnly(true);
    ui->lineEdit_temperature->setText(QString::number(this->Temp));
//    QFont font;
//    font.setPointSize(15);
//    ui->label_control->setFont(font);
//    ui->label_monitor->setFont(font);


}

Device::~Device()
{
    delete ui;
}

void Device::delayShow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
    while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Device::loadStyleSheet(const QString &sheetName)
{
    QFile file(":/" + sheetName.toLower() + ".qss");
    file.open(QFile::ReadOnly);
    if(file.isOpen())
        qDebug()<< file.size();
    QString styleSheet = QString::fromLatin1(file.readAll());
    qApp->setStyleSheet(styleSheet);

}

void Device::slotShowThis()
{
    delayShow();
    this->show();
}

void Device::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}

void Device::on_pushButton_clear_clicked()
{
    ui->textBrowser_log->clear();
}

void Device::on_pushButton_lightHost_clicked()
{
    if(lightHostFlag == false)
    {
        lightHostFlag = true;
        ui->textBrowser_log->append(tr("主灯打开."));
    }
    else
    {
        lightHostFlag = false;
        ui->textBrowser_log->append(tr("主灯关闭."));
    }
}

void Device::on_pushButton_lightSpot_clicked()
{
    if(lightSpotFlag == false)
    {
        lightSpotFlag = true;
        ui->textBrowser_log->append(tr("射灯打开."));
    }
    else
    {
        lightSpotFlag = false;
        ui->textBrowser_log->append(tr("射灯关闭."));
    }
}

void Device::on_pushButton_sound_clicked()
{
    if(soundFlag == false)
    {
        soundFlag = true;
        ui->textBrowser_log->append(tr("音响打开."));
    }
    else
    {
        soundFlag = false;
        ui->textBrowser_log->append(tr("音响关闭."));
    }
}

void Device::on_pushButton_airConditioner_clicked()
{
    if(airConditionerFlag == false)
    {
        airConditionerFlag = true;
        ui->textBrowser_log->append(tr("空调打开."));
    }
    else
    {
        airConditionerFlag = false;
        ui->textBrowser_log->append(tr("空调关闭."));
    }
}

void Device::on_pushButton_TempUp_clicked()
{
    if(airConditionerFlag == true)
    {
        Temp++;
        ui->textBrowser_log->append(QString(tr("温度下降一度，当前温度为：")+QString::number(this->Temp)));
        ui->lineEdit_temperature->setText(QString::number(this->Temp));
    }
}

void Device::on_pushButton_TempDown_clicked()
{
    if(airConditionerFlag == true)
    {
        Temp--;
        ui->textBrowser_log->append(QString(tr("温度下降一度，当前温度为：")+QString::number(this->Temp)));
        ui->lineEdit_temperature->setText(QString::number(this->Temp));
    }

}


void Device::on_horizontalSlider_lightHost_valueChanged(int value)
{
    if(lightHostFlag == true)
    {
        this->lightHostValue = value;
        ui->textBrowser_log->append(QString(tr("主灯亮度调整为：")+ QString::number(this->lightHostValue)));
    }
}

void Device::on_horizontalSlider_lightSpot_valueChanged(int value)
{
    if(lightSpotFlag == true)
    {
        this->lightSpotValue = value;
        ui->textBrowser_log->append(QString(tr("射灯亮度调整为：")+ QString::number(this->lightSpotValue)));
    }
}


void Device::on_horizontalSlider_sound_valueChanged(int value)
{
    if(soundFlag == true)
    {
        this->soundValue = value;
        ui->textBrowser_log->append(QString(tr("射灯亮度调整为：")+ QString::number(this->soundValue)));
    }

}
