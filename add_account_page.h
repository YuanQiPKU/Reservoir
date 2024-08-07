#ifndef ADD_ACCOUNT_PAGE_H
#define ADD_ACCOUNT_PAGE_H
#pragma once
#include "io.h"
#include "pages.h"

namespace Ui {
class add_account_page;
}

class add_account_page : public QWidget {
  Q_OBJECT

public:
  QTabWidget *all_page;
  QString file_address;

  explicit add_account_page(QTabWidget *all_page, QWidget *parent = nullptr);
  ~add_account_page();

  Transaction *one_account;
  double account_amount = 0;
  QDateTime account_date;
  bool is_positive = true;
  Kind account_kind;

  QString account_name;

private slots:
  void kind_choose(Kind mykind);
  void time_choose(QDateTime a);

  void on_btnYes_clicked();

  void on_btnConfirm_clicked();

  void on_btnIn_clicked();

  void on_lineEdit_editingFinished();

  void on_btnOut_clicked();

  void on_lineEdit_2_editingFinished();

  void on_btnTime_clicked();

  void on_btnKind_clicked();

private:
  Ui::add_account_page *ui;
};

#endif // ADD_ACCOUNT_PAGE_H
