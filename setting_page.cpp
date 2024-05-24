#include "setting_page.h"
#include "ui_setting_page.h"
#include"login_page.h"
#include"main_page.h"
setting_page::setting_page(QTabWidget *all_page, password* my_password,QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::setting_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
}

setting_page::~setting_page() { delete ui; }

void setting_page::on_password_change_editingFinished()
{
    my_password->password_change(ui->password_change->text());


}


void setting_page::on_target_change_editingFinished()
{
     QString target = ui->target_change->text();
    main_page::target_amount=target.toDouble();
}

