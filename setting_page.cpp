#include "setting_page.h"
#include "ui_setting_page.h"

setting_page::setting_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::setting_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
}

setting_page::~setting_page() { delete ui; }
