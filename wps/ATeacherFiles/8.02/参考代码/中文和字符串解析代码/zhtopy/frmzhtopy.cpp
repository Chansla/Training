#include "frmzhtopy.h"
#include "ui_frmzhtopy.h"
#include "zhtopy.h"

frmZhToPY::frmZhToPY(QWidget *parent) : QWidget(parent), ui(new Ui::frmZhToPY) {
    ui->setupUi(this);
    ZhToPY::Instance()->loadPY(":/image/zhtopy.txt");
}

frmZhToPY::~frmZhToPY() {
    delete ui;
}

void frmZhToPY::on_edit_editingFinished() {
    ui->label_PY->setText(ZhToPY::Instance()->zhToPY(ui->edit->text()));
    ui->label_JP->setText(ZhToPY::Instance()->zhToJP(ui->edit->text()));
    ui->label_ZM->setText(ZhToPY::Instance()->zhToZM(ui->edit->text()));
}
