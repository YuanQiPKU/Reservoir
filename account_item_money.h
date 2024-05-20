#ifndef ACCOUNT_ITEM_MONEY_H
#define ACCOUNT_ITEM_MONEY_H

#include <QWidget>

namespace Ui {
class account_item_money;
}

class account_item_money : public QWidget
{
    Q_OBJECT

public:
    explicit account_item_money(QWidget *parent = nullptr);
    ~account_item_money();

private:
    Ui::account_item_money *ui;
};

#endif // ACCOUNT_ITEM_MONEY_H
