#include "account_item_money.h"
#include "ui_account_item_money.h"

account_item_money::account_item_money(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::account_item_money)
{
    ui->setupUi(this);
}

account_item_money::~account_item_money()
{
    delete ui;
}
