#ifndef MANAGE_ACCOUNT_PAGE_H
#define MANAGE_ACCOUNT_PAGE_H

#include"pages.h"

namespace Ui {
class manage_account_page;
}

class manage_account_page : public QWidget
{
    Q_OBJECT

public:
     QTabWidget* all_page;
    explicit manage_account_page(QTabWidget* all_page,QWidget *parent = nullptr);
    ~manage_account_page();

private:
    Ui::manage_account_page *ui;
};

#endif // MANAGE_ACCOUNT_PAGE_H
// 账目的查询,修改和删除
