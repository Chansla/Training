#include "weather.h"
#include "ui_weather.h"
#include <QTime>
Weather::Weather(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Weather)
{
    ui->setupUi(this);
    this->setWindowTitle("天气查询页面");
    this->setWindowFlags(Qt::FramelessWindowHint);
}

Weather::~Weather()
{
    delete ui;
}

void Weather::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return){
            emit ui->pushButton_query->click();
    }
}



void Weather::delayShwow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
    while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
void Weather::slotShowThis()
{
    delayShwow();
    ui->lineEdit_input->setFocus();
    this->show();
}

void Weather::on_pushButton_back_clicked()
{
    this->hide();
    emit showMain();
}

void Weather::on_pushButton_query_clicked()
{
    QString cityQuery = ui->lineEdit_input->text();
    analysis = new Analysis;
    mythread = new Thread;
    mythread->setCity(cityQuery);
    connect(mythread, SIGNAL(sendQByteArray(QByteArray)), analysis, SLOT(jsonAnalysis(QByteArray)));
    connect(analysis, SIGNAL(sendQJsonObject(QJsonObject)), this, SLOT(slotReceiveData(QJsonObject)));
    mythread->start();
}

void Weather::slotReceiveData(QJsonObject dataToday)
{
    this->city = ui->lineEdit_input->text();
    this->date = dataToday["date"].toString();
    this->weather = dataToday["type"].toString();
    this->temperatureHigh = dataToday["high"].toString();
    this->temperatureLow = dataToday["low"].toString();
    this->wind = dataToday["fengxiang"].toString();
    this->windPower = dataToday["fengli"].toString();

    if(this->city == nullptr || this->date == nullptr)
        return;
    ui->label_city->setText(this->city);
    ui->label_weather->setText(this->weather);
    ui->label_temperature->setText(QString(this->temperatureLow + " ~ " + this->temperatureHigh));
    ui->label_wind->setText(QString(this->wind + " : " + this->windPower.mid(9,2)));
}
