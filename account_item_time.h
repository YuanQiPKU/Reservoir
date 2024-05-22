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

private:
  Ui::account_item_time *ui;
};

#endif // ACCOUNT_ITEM_TIME_H
