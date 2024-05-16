#include "add_account_page.h"
#include "ui_add_account_page.h"

add_account_page::add_account_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::add_account_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
}

add_account_page::~add_account_page()
{
    delete ui;
}
