#include "account_item_kind.h"
#include "ui_account_item_kind.h"

account_item_kind::account_item_kind(QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item_kind) {
  ui->setupUi(this);
}

account_item_kind::~account_item_kind() { delete ui; }
