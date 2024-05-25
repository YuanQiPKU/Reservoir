#include "setting_page.h"
#include "ui_setting_page.h"
setting_page::setting_page(QTabWidget *all_page, password* my_password,QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::setting_page) ,my_password(my_password){
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  ui->l2->setPlaceholderText(QString::number(my_password->target_amount));
}

setting_page::~setting_page() { delete ui; }



void setting_page::on_l1_editingFinished()
{
    qDebug()<<"passwordc::"<<ui->l1->text();
    try {
        my_password->password_change(ui->l1->text());
        qDebug()<<"输入成功1";
    } catch (...) {
        qDebug()<<"输入失败1";
    }

    ui->l1->clear();
    ui->l1->setPlaceholderText("修改密码完成!!");
    qDebug()<<"修改完成1";
}

void setting_page::on_l2_editingFinished()
{
    QString target = ui->l2->text();
    qDebug()<<"targetc::"<< ui->l2->text();
    ui->l2->clear();
    try {
        my_password->target_amount_change(target.toDouble());
        qDebug()<<"输入成功2";
    } catch (...) {
        qDebug()<<"输入失败2";
    }

    ui->l2->setPlaceholderText("修改目标完成!!");
    qDebug()<<"修改完成2";
}

