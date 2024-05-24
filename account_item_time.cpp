#include "account_item_time.h"
#include "ui_account_item_time.h"

account_item_time::account_item_time(QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item_time) {
  ui->setupUi(this);
}

account_item_time::~account_item_time() { delete ui; }

void account_item_time::on_time_down_sort_clicked()
{
    emit sortItems(true); // 发送降序排序信号
}


void account_item_time::on_time_up_sort_clicked()
{
    emit sortItems(false); // 发送升序排序信号
}

