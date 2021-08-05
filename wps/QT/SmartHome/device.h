#ifndef DEVICE_H
#define DEVICE_H

#include <QWidget>

namespace Ui {
class Device;
}

class Device : public QWidget
{
    Q_OBJECT

public:
    explicit Device(QWidget *parent = nullptr);
    ~Device();

    void delayShow();

private:
    void loadStyleSheet(const QString &sheetName);

signals:
    void showMain();

private slots:
    void slotShowThis();

    void on_pushButton_back_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_lightHost_clicked();

    void on_pushButton_lightSpot_clicked();

    void on_pushButton_sound_clicked();

    void on_pushButton_airConditioner_clicked();

    void on_pushButton_TempUp_clicked();

    void on_pushButton_TempDown_clicked();

    void on_horizontalSlider_lightHost_valueChanged(int value);

    void on_horizontalSlider_lightSpot_valueChanged(int value);

    void on_horizontalSlider_sound_valueChanged(int value);

private:
    Ui::Device *ui;
    // 设备值
    qint8 lightHostValue = 0;
    qint8 lightSpotValue = 0;
    qint8 soundValue = 0;
    //空调温度默认26
    qint8 Temp = 26;

    //开关状态
    bool lightHostFlag = false;
    bool lightSpotFlag = false;
    bool soundFlag = false;
    bool airConditionerFlag = false;
};

#endif // DEVICE_H
