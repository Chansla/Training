#ifndef VIDEO_H
#define VIDEO_H

#include <QWidget>

namespace Ui {
class Video;
}

class Video : public QWidget
{
    Q_OBJECT

public:
    explicit Video(QWidget *parent = nullptr);
    ~Video();
    void delayShow();
signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_pushButton_back_clicked();

private:
    Ui::Video *ui;
};

#endif // VIDEO_H
