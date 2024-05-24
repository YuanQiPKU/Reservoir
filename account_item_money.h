#ifndef ACCOUNT_ITEM_MONEY_H
#define ACCOUNT_ITEM_MONEY_H
#pragma once
#include <QWidget>

namespace Ui {
class account_item_money;
}

class account_item_money : public QWidget {
  Q_OBJECT

public:
  explicit account_item_money(QWidget *parent = nullptr);
  ~account_item_money();
  signals:
  void sortItems(bool descending);
  private slots:
  void on_money_down_sort_clicked();

      void on_money_up_sort_clicked();

  private:
  Ui::account_item_money *ui;
};

#endif // ACCOUNT_ITEM_MONEY_H
