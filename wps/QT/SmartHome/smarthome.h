#ifndef SMARTHOME_H
#define SMARTHOME_H


#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class SmartHome; }
QT_END_NAMESPACE

class SmartHome : public QMainWindow
{
    Q_OBJECT

public:
    SmartHome(QWidget *parent = nullptr);
    ~SmartHome();

signals:
    void showLogin();
    void showMusic();

private slots:
    void slotShowThis();


    void on_pushButton_music_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::SmartHome *ui;

};
#endif // SMARTHOME_H
