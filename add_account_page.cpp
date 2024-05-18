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
    ui->textEdit->setPlaceholderText("请将文件拖动到这里");
    // 根据按照一般方式创建账目的方式生成transaction对象,并将其寄存在容器中
    // 目前考虑使用shared_pointer(有待商榷)
    ui->lineEdit->setPlaceholderText("请输入金额");
}

add_account_page::~add_account_page()
{
    delete ui;
}


void add_account_page::on_btnYes_clicked() // 用于响应解析操作,在add_account_page类中的公有成员变量file_address中存储文件地址;
{
    file_address = ui->textEdit->toPlainText(); // 获取其中的文本
    ui->textEdit->clear();
    ui->textEdit->setPlaceholderText("收到你的文件啦!!");
    qDebug()<<file_address;
}


void add_account_page::on_btnConfirm_clicked()
{
    // 响应新建完成
    QString amount = ui->lineEdit->text();
    qDebug()<<"新建账目完成";
}

