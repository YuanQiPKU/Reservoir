#include "remove_make_sure.h"
#include "ui_remove_make_sure.h"

remove_make_sure::remove_make_sure(QWidget *parent)
    : QWidget(parent), ui(new Ui::remove_make_sure) {
  ui->setupUi(this);
}

remove_make_sure::~remove_make_sure() { delete ui; }

void remove_make_sure::on_cancel_clicked() {
  emit make_sure_or(false);
  this->close();
}

void remove_make_sure::on_make_sure_clicked() {
  emit make_sure_or(true);
  this->close();
}
