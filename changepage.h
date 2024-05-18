#ifndef CHANGEPAGE_H
#define CHANGEPAGE_H
#include"account_item.h"
#include <QWidget>

namespace Ui {
class changepage;
}

class changepage : public QWidget
{
    Q_OBJECT

public:
    explicit changepage(QWidget *parent = nullptr);
    explicit changepage(account_item* account_item_,QWidget *parent = nullptr);
    ~changepage();

private slots:
    void on_change_name_line_editingFinished();

    void on_change_time_line_editingFinished();

    void on_change_kind_line_editingFinished();

    void on_change_money_line_editingFinished();


    void on_make_sure_clicked();

private:
    Ui::changepage *ui;
    account_item* my_account_item;
};

#endif // CHANGEPAGE_H
