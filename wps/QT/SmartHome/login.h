#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    bool loginSuccess();

private slots:
    void on_pushButton_lg_clicked();

private:
    Ui::Login *ui;
    QString usr;
    QString pwd;
    bool statues;

};

#endif // LOGIN_H
