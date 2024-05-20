#include "account_item_time.h"
#include "ui_account_item_time.h"

account_item_time::account_item_time(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::account_item_time)
{
    ui->setupUi(this);
}

account_item_time::~account_item_time()
{
    delete ui;
}
