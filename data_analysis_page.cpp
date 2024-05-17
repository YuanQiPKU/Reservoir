#include "data_analysis_page.h"
#include "ui_data_analysis_page.h"
#include"account_item.h""

data_analysis_page::data_analysis_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::data_analysis_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    for(int i = 0;i<100;i++){
        ui->listWidget->;
    }
}

data_analysis_page::~data_analysis_page()
{
    delete ui;
}
