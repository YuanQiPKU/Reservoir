#include "account_item_money.h"
#include "ui_account_item_money.h"

account_item_money::account_item_money(QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item_money) {
  ui->setupUi(this);
}

account_item_money::~account_item_money() { delete ui; }

void account_item_money::on_money_down_sort_clicked() {
  emit sortItems(true); // 发送降序排序信号
    this->close();
}

void account_item_money::on_money_up_sort_clicked() {
  emit sortItems(false); // 发送升序排序信号
    this->close();
}
