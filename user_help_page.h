#ifndef USER_HELP_PAGE_H
#define USER_HELP_PAGE_H


#include"pages.h"

namespace Ui {
class user_help_page;
}

class user_help_page : public QWidget
{
    Q_OBJECT

public:
    QTabWidget* all_page;
    explicit user_help_page(QTabWidget* all_page,QWidget *parent = nullptr);
    ~user_help_page();

private:
    Ui::user_help_page *ui;
};

#endif // USER_HELP_PAGE_H
