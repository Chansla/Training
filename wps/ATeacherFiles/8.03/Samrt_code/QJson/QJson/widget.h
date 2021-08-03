#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
namespace Ui {class Widget;}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void json_package();
    void json_analysis();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
