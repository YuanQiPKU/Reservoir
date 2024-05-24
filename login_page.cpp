#include "login_page.h"
#include "QDebug"
#include "ui_login_page.h"

login_page::login_page(QTabWidget *all_page, password *my_password,
                       QWidget *parent)
    : all_page(all_page), my_password(my_password), QWidget(parent),
      ui(new Ui::login_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  ui->lineEdit->setEchoMode(QLineEdit::Password);
  // 最大输入限制
  ui->lineEdit->setMaxLength(16); // 最大输入长度为16
  ui->lineEdit->setPlaceholderText("请输入密码");
  connect(ui->lineEdit, &QLineEdit::editingFinished, this,
          &login_page::on_lineEdit_editingFinished);
}

login_page::~login_page() { delete ui; }

void login_page::on_lineEdit_editingFinished() {
  QString attempt_password = ui->lineEdit->text();
  if (my_password->password_validation(attempt_password)) {
    // 生成"主页面"页面
    QWidget *main_page = pages_creator::only_main_page(all_page,my_password);
    all_page->addTab(main_page, "主页面");
    all_page->setCurrentWidget(main_page); // 跳转新建到的页面
    all_page->removeTab(all_page->currentIndex() - 1);
    return;
  } else {
    ui->lineEdit->setPlaceholderText("输入错误,请重新尝试");
    ui->lineEdit->clear();
  }
}
