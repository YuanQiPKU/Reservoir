#ifndef ACCOUNT_ITEM_NAME_H
#define ACCOUNT_ITEM_NAME_H

#include <QWidget>

namespace Ui {
class account_item_name;
}

class account_item_name : public QWidget
{
    Q_OBJECT

public:
    explicit account_item_name(QWidget *parent = nullptr);
    ~account_item_name();

private:
    Ui::account_item_name *ui;
};

#endif // ACCOUNT_ITEM_NAME_H
