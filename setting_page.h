#ifndef SETTING_PAGE_H
#define SETTING_PAGE_H
#pragma once
#include "pages.h"

namespace Ui {
class setting_page;
}

class setting_page : public QWidget {
  Q_OBJECT

public:
  QTabWidget *all_page;
  password* my_password;
  explicit setting_page(QTabWidget *all_page,password* my_password, QWidget *parent = nullptr);
  ~setting_page();

  private slots:
  void on_l1_editingFinished();
  void on_l2_editingFinished();

  private:
  Ui::setting_page *ui;
};

#endif // SETTING_PAGE_H
