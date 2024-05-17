#include "add_account_page.h"
#include "ui_add_account_page.h"

add_account_page::add_account_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::add_account_page)
{
    qDebug()<<"新增账目页面生成";
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

    // TODO: 支持文件拖拽获取文件地址及文件名做简单的格式校验传递给其他的模块(csv读取)
    // 支持新增账目 以浮动的widget样式设计
    // 要求可以选择日期,分类,金额(设置成各类可以对按下操作做出响应的按钮,并保持相应状态,留待下一次点击才改变)
    // 根据按照一般方式创建账目的方式生成transaction对象,并将其寄存在容器中
    // 目前考虑使用shared_pointer(有待商榷)


}

add_account_page::~add_account_page()
{
    delete ui;
}
