#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDebug>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    usr = "admin";
    pwd = "admin";
    statues = false;
}

Login::~Login()
{
    delete ui;
}

bool Login::loginSuccess()
{
    return this->statues;
}

void Login::on_pushButton_lg_clicked()
{
    QString usr_ = ui->lineEdit_usr->text();
    QString pwd_ = ui->lineEdit_pwd->text();

    if(usr_ == this->usr && this->pwd == pwd_)
    {
        QMessageBox::information(this, tr("提示"), tr("登录成功！"));
        this->statues = true;
        qDebug() << "statues:" << statues;
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("登录失败，用户名和密码不匹配！"));
        this->statues = false;
        qDebug() << "statues:" << statues;
    }
}
