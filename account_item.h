#ifndef ACCOUNT_ITEM_H
#define ACCOUNT_ITEM_H

#include <QWidget>
#include"transaction.h""
namespace Ui {
class account_item;
}

class account_item : public QWidget
{
    Q_OBJECT

public:

    explicit account_item(QWidget *parent = nullptr);
    explicit account_item(Transaction *account_item_message,QWidget* parent=nullptr);
    void change_time(Time_ t);
    void change_name(QString name);
    void change_money(double money);
    void change_kind(Kind kind);
    ~account_item();

private:
    Transaction account_item_message;
    Kind account_kind;
    Time_ account_time;
    QString account_name;
    double account_money;
    Ui::account_item *ui;
};

#endif // ACCOUNT_ITEM_H
// 修改账目的小组件
