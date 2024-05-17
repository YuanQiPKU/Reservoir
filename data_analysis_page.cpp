#include "data_analysis_page.h"
#include "ui_data_analysis_page.h"
#include "account_item.h"

data_analysis_page::data_analysis_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::data_analysis_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    // 饼状图和折线图的绘出
    // 借助经济学的一些知识生成一些其他的指标,并给出参考数据(optional)

}

data_analysis_page::~data_analysis_page()
{
    delete ui;
}
