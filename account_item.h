#ifndef ACCOUNT_ITEM_H
#define ACCOUNT_ITEM_H
#pragma once
#include "io.h"
#include <QWidget>

namespace Ui {
class account_item;
}

class account_item : public QWidget {
  Q_OBJECT

public:
  explicit account_item(Transaction *account_item_message,
                        QWidget *parent = nullptr);
    explicit account_item(std::shared_ptr<Transaction> account_item_message,
                          QWidget *parent = nullptr);
  void change_time(Time_ t);
  void change_name(QString name);
  void change_money(double money);
  void change_kind(Kind kind);
  ~account_item();
  bool make_sure_or=false;
signals:
  void removeRequested(account_item *item);
private slots:

  void on_btnChange_clicked();

  void on_btnRemove_clicked();
  void make_sure(bool make);
public:
  std::shared_ptr<Transaction> account_item_message;
  Kind account_kind;
  Time_ account_time;
  QString account_name;
  double account_money;
  Ui::account_item *ui;
};

#endif // ACCOUNT_ITEM_H
// 修改账目的小组件
