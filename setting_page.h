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
  explicit setting_page(QTabWidget *all_page, QWidget *parent = nullptr);
  ~setting_page();

private:
  Ui::setting_page *ui;
};

#endif // SETTING_PAGE_H
