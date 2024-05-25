#include "first_time_page.h"
#include "ui_first_time_page.h"
#include"pages.h"

first_time_page::first_time_page(QTabWidget* all_page,password* my_password,QWidget *parent)
    : all_page(all_page),my_password(my_password), QWidget(parent)
    , ui(new Ui::first_time_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ui->lineEdit->setPlaceholderText("请在这里输入密码");
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    // 注释的原因同main_page.cpp下的原理一致,避免QT翻译器多次触发槽函数
    // connect(ui->lineEdit,&QLineEdit::editingFinished,this,&first_time_page::on_lineEdit_editingFinished);
    // connect(ui->lineEdit,&QLineEdit::textChanged,this,&first_time_page::on_lineEdit_textChanged);

}

first_time_page::~first_time_page()
{
    delete ui;
}

void first_time_page::on_lineEdit_editingFinished()
{
    qDebug()<<"输入完成被触发";
    my_password->password_change(ui->lineEdit->text());
    my_password->password_save();
    QWidget* login_page = pages_creator::login_page(all_page,my_password);
    all_page->addTab(login_page,"登录");
    all_page->setCurrentWidget(login_page);
    all_page->removeTab(all_page->currentIndex()-1);
}


void first_time_page::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug()<<"文本修改被触发";
    temp_password = ui->lineEdit->text();
    strength = password::strength_calu(temp_password);
    ui->progressBar->setValue(strength);
}

