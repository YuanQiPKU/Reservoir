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
    explicit login_page(QTabWidget* all_page, password* my_password,QWidget *parent = nullptr);
    QTabWidget* all_page;
    password* my_password;
    ~login_page();

private slots:
    void on_lineEdit_editingFinished();

private:
    Ui::login_page *ui;
};

#endif // LOGIN_PAGE_H
