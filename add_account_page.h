#ifndef ADD_ACCOUNT_PAGE_H
#define ADD_ACCOUNT_PAGE_H

#include"pages.h"

namespace Ui {
class add_account_page;
}

class add_account_page : public QWidget
{
    Q_OBJECT

public:
    QTabWidget* all_page;
    QString file_address;
    explicit add_account_page(QTabWidget* all_page,QWidget *parent = nullptr);
    ~add_account_page();

private slots:

    void on_btnYes_clicked();

    void on_btnConfirm_clicked();

private:
    Ui::add_account_page *ui;
};

#endif // ADD_ACCOUNT_PAGE_H
