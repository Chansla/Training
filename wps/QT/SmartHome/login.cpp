#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QTime>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_usr->setFocus();
    ui->lineEdit_pwd->setEchoMode(QLineEdit::Password);
    this->setWindowTitle("智能家居登陆界面");
    this->setWindowFlags(Qt::FramelessWindowHint);
    usr = "admin";
    pwd = "admin";

}

Login::~Login()
{
    delete ui;
}

void Login::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return){
            emit ui->pushButton_lg->click();
    }
}

void Login::delayShow()
{
    QTime dieTime = QTime::currentTime().addMSecs(200);//延时300毫秒
    while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Login::slotShowThis()
{
    delayShow();
    this->show();
    ui->lineEdit_usr->setFocus();
}


void Login::on_pushButton_lg_clicked()
{
    QString usr_ = ui->lineEdit_usr->text();
    QString pwd_ = ui->lineEdit_pwd->text();

    if(usr_ == this->usr && this->pwd == pwd_)
    {
//        QMessageBox::information(this, tr("提示"), tr("登录成功！"));
        this->hide();
        ui->lineEdit_pwd->clear();
        emit showMain();

    }
    else
    {
//        QMessageBox::information(this, tr("提示"), tr("登录失败，用户名和密码不匹配！"));
        ui->lineEdit_pwd->clear();
        ui->lineEdit_pwd->setPlaceholderText(tr("用户名和密码不匹配!"));
        ui->lineEdit_pwd->setFocus();
    }
}
