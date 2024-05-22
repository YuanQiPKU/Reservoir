#ifndef ACCOUNT_ITEM_KIND_H
#define ACCOUNT_ITEM_KIND_H
#pragma once
#include <QWidget>

namespace Ui {
class account_item_kind;
}

class account_item_kind : public QWidget {
  Q_OBJECT

public:
  explicit account_item_kind(QWidget *parent = nullptr);
  ~account_item_kind();

private:
  Ui::account_item_kind *ui;
};

#endif // ACCOUNT_ITEM_KIND_H
