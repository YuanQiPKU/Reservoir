#include "manage_account_page.h"
#include "ui_manage_account_page.h"

manage_account_page::manage_account_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::manage_account_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
}

manage_account_page::~manage_account_page()
{
    delete ui;
}
