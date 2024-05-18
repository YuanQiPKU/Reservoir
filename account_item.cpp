#include "account_item.h"
#include "ui_account_item.h"

account_item::account_item(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::account_item)
{
    ui->setupUi(this);
}
account_item::account_item(Transaction *account_item_message,QWidget *parent): QWidget(parent)
    , ui(new Ui::account_item),account_item_message(*account_item_message){
      ui->setupUi(this);
    account_kind=account_item_message->get_kind();
    account_time=account_item_message->get_time();
    account_name=account_item_message->get_name();
    account_money=account_item_message->get_money();
}
account_item::~account_item()
{
    delete ui;
}
void account_item::change_time(Time_ t) {
    account_time = t;
}
void account_item::change_name(QString name) {
    account_name = name;
}
void account_item::change_money(double money){
   account_money = money;
}
void account_item::change_kind(Kind kind) {
    account_kind = kind;
}
