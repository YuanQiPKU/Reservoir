#include "account_item_kind.h"
#include "kind.h"
#include "ui_account_item_kind.h"

account_item_kind::account_item_kind(QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item_kind) {
  ui->setupUi(this);
}

account_item_kind::~account_item_kind() { delete ui; }

void account_item_kind::on_maintain_sort_clicked() {
  emit kind_sort(maintain); // 传递maintain
  this->close();
}

void account_item_kind::on_social_sort_clicked() {
  emit kind_sort(social); // 传递social
  this->close();
}

void account_item_kind::on_other_sort_clicked() {
  emit kind_sort(other); // 传递other
  this->close();
}

void account_item_kind::on_develop_sort_clicked() {
  emit kind_sort(develop); // 传递develop
  this->close();
}

void account_item_kind::on_consume_sort_clicked() {
  emit kind_sort(consume); // 传递consume
  this->close();
}
