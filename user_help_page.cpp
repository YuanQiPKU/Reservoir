#include "user_help_page.h"
#include "ui_user_help_page.h"
#include <QTextDocument>

user_help_page::user_help_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::user_help_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
}

user_help_page::~user_help_page() { delete ui; }
