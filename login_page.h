#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include"pages.h"

namespace Ui {
class login_page;
}

class login_page : public QWidget
{
    Q_OBJECT

public:
    explicit login_page(QTabWidget* all_page,QWidget *parent = nullptr);
    QTabWidget* all_page;
    ~login_page();

private:
    Ui::login_page *ui;
};

#endif // LOGIN_PAGE_H
