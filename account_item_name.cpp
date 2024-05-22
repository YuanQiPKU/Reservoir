#include "account_item_name.h"
#include "ui_account_item_name.h"

account_item_name::account_item_name(QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item_name) {
  ui->setupUi(this);
}

account_item_name::~account_item_name() { delete ui; }
