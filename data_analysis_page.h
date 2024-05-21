#ifndef DATA_ANALYSIS_PAGE_H
#define DATA_ANALYSIS_PAGE_H

#include"pages.h"
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include"qcustomplot.h"
#include"io.h"
#include<map>
namespace Ui {
class data_analysis_page;
}

class data_analysis_page : public QWidget
{
    Q_OBJECT

public:
    QTabWidget* all_page;
    explicit data_analysis_page(QTabWidget* all_page,QWidget *parent = nullptr);
    ~data_analysis_page();



    std::vector<std::shared_ptr<Transaction> > all_account;
    std::map<Kind,std::vector<std::shared_ptr<Transaction> > > kind_account;



private:
    Ui::data_analysis_page *ui;
};

#endif // DATA_ANALYSIS_PAGE_H
// 数据的处理,可视化分析
