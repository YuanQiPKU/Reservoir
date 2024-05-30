#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H
#pragma once
#include "pages.h"

namespace Ui {
class main_page;
}

class main_page : public QWidget {
  Q_OBJECT

public:
  QTabWidget *all_page;
  password *my_password;
  explicit main_page(QTabWidget *all_page, password *my_password,
                     QWidget *parent = nullptr);
  ~main_page();

private slots:
  void on_btnAddAccount_clicked();
  void on_btnDataAnalysis_clicked();
  void on_btnManageAccount_clicked();
  void on_btnSettings_clicked();
  void on_btnUserHelp_clicked();
  void on_account_tab_close_requested(int index); // 用于关闭主窗口后刷新

  void on_btnTip_clicked();

private:
  Ui::main_page *ui;
};

#endif // MAIN_PAGE_H
