#include "login_page.h"
#include "ui_login_page.h"


login_page::login_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::login_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    // 设置主页面
    // QWidget *main_page = pages_creator::only_main_page(all_page);
    // all_page->addTab(main_page, "主页面");
}

login_page::~login_page()
{
    delete ui;
}
