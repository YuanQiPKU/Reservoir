#ifndef ACCOUNT_ITEM_TIME_H
#define ACCOUNT_ITEM_TIME_H
#pragma once
#include <QWidget>

namespace Ui {
class account_item_time;
}

class account_item_time : public QWidget {
  Q_OBJECT

public:
  explicit account_item_time(QWidget *parent = nullptr);
  ~account_item_time();
  signals:
  void sortItems(bool descending);


  private slots:
  void on_time_down_sort_clicked();

      void on_time_up_sort_clicked();

  private:
  Ui::account_item_time *ui;
};

#endif // ACCOUNT_ITEM_TIME_H
