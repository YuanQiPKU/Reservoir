#include "account_item.h"
#include "ui_account_item.h"

account_item::account_item(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::account_item)
{
    ui->setupUi(this);
}

account_item::~account_item()
{
    delete ui;
}
