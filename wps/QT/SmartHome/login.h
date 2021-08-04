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
    void keyPressEvent(QKeyEvent *event) override;

signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_pushButton_lg_clicked();

private:
    Ui::Login *ui;
    QString usr;
    QString pwd;

};

#endif // LOGIN_H
