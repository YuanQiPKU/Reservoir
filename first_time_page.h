#ifndef FIRST_TIME_PAGE_H
#define FIRST_TIME_PAGE_H

#include"pages.h"
#include <QTimer>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include<QString>





namespace Ui {
class first_time_page;
}

class first_time_page : public QWidget
{
    Q_OBJECT

public:
    explicit first_time_page(QTabWidget* all_page,QWidget *parent = nullptr);
    QTabWidget* all_page;
    ~first_time_page();

private:
    Ui::first_time_page *ui;
};

#endif // FIRST_TIME_PAGE_H
