#ifndef ACCOUNT_ITEM_KIND_H
#define ACCOUNT_ITEM_KIND_H
#pragma once
#include <QWidget>
#include "kind.h"
namespace Ui {
class account_item_kind;
}

class account_item_kind : public QWidget {
  Q_OBJECT

public:
  explicit account_item_kind(QWidget *parent = nullptr);
  ~account_item_kind();

  private slots:
  void on_maintain_sort_clicked();

      void on_social_sort_clicked();

  void on_other_sort_clicked();

      void on_develop_sort_clicked();

  void on_consume_sort_clicked();
  signals:
  void kind_sort(Kind t);

  private:
  Ui::account_item_kind *ui;
};

#endif // ACCOUNT_ITEM_KIND_H
