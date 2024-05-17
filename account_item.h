#ifndef ACCOUNT_ITEM_H
#define ACCOUNT_ITEM_H

#include <QWidget>

namespace Ui {
class account_item;
}

class account_item : public QWidget
{
    Q_OBJECT

public:
    explicit account_item(QWidget *parent = nullptr);
    ~account_item();

private:
    Ui::account_item *ui;
};

#endif // ACCOUNT_ITEM_H
