#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H
#include"pages.h"

namespace Ui {
class main_page;
}

class main_page : public QWidget
{
    Q_OBJECT

public:
    QTabWidget* all_page;
    explicit main_page(QTabWidget* all_page,QWidget *parent = nullptr);
    ~main_page();

private slots:
    void on_btnAddAccount_clicked();
    void on_btnDataAnalysis_clicked();
    void on_btnManageAccount_clicked();
    void on_btnSettings_clicked();
    void on_btnUserHelp_clicked();

private:
    Ui::main_page *ui;
};

#endif // MAIN_PAGE_H



