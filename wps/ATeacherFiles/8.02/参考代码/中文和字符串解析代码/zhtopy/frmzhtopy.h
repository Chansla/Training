#ifndef FRMZHTOPY_H
#define FRMZHTOPY_H

#include <QWidget>

namespace Ui {
    class frmZhToPY;
}

class frmZhToPY : public QWidget {
    Q_OBJECT
  public:
    explicit frmZhToPY(QWidget *parent = nullptr);
    ~frmZhToPY();
  private:
    Ui::frmZhToPY *ui;
  private slots:
    void on_edit_editingFinished();
};

#endif // FRMZHTOPY_H
