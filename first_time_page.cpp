#include "first_time_page.h"
#include "ui_first_time_page.h"

first_time_page::first_time_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page), QWidget(parent)
    , ui(new Ui::first_time_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

}

first_time_page::~first_time_page()
{
    delete ui;
}
