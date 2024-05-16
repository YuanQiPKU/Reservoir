#include "main_page.h"
#include "ui_main_page.h"
#include "widget.h"

main_page::main_page(QTabWidget* all_page,QWidget *parent)
    : all_page(all_page),QWidget(parent)
    , ui(new Ui::main_page)
{

    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    // 注意,动态创建的控件在ui中
    connect(ui->btnAddAccount,&::QPushButton::pressed, this,&main_page::on_btnAddAccount_clicked);
    connect(ui->btnManageAccount,&::QPushButton::pressed, this,&main_page::on_btnManageAccount_clicked);
    connect(ui->btnDataAnalysis,&::QPushButton::pressed, this,&main_page::on_btnDataAnalysis_clicked);
    connect(ui->btnUserHelp,&::QPushButton::pressed, this,&main_page::on_btnUserHelp_clicked);
    connect(ui->btnSettings,&::QPushButton::pressed, this,&main_page::on_btnSettings_clicked);
}

main_page::~main_page()
{
    delete ui;
}
void main_page::on_btnAddAccount_clicked()
{
    // 点击生成“新增账目”页面
    QWidget *add_account = pages_creator::add_account_page(all_page);
    all_page->addTab(add_account, "新增账目");
    all_page->setCurrentWidget(add_account); // 跳转新建到的页面
}
void main_page::on_btnDataAnalysis_clicked()
{
    // 点击生成“数据分析”页面
    QWidget *data_analysis = pages_creator::data_analysis_page(all_page);
    all_page->addTab(data_analysis, "数据分析");
    all_page->setCurrentWidget(data_analysis); // 跳转新建到的页面
}
void main_page::on_btnManageAccount_clicked()
{

    // 点击生成“账目管理”页面
    QWidget *manage_account = pages_creator::manage_account_page(all_page);
    all_page->addTab(manage_account, "账目管理");
    all_page->setCurrentWidget(manage_account); // 跳转新建到的页面
}
void main_page::on_btnSettings_clicked()
{
    // 点击生成“设置”页面
    QWidget *setting = pages_creator::setting_page(all_page);
    all_page->addTab(setting, "设置");
    all_page->setCurrentWidget(setting); // 跳转新建到的页面
}
void main_page::on_btnUserHelp_clicked()
{
    // 点击生成“用户帮助”页面
    QWidget *user_help = pages_creator::user_help_page(all_page);
    all_page->addTab(user_help, "用户帮助");
    all_page->setCurrentWidget(user_help); // 跳转新建到的页面
}





