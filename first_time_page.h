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
    explicit first_time_page(QTabWidget* all_page,password* my_password,QWidget *parent = nullptr);
    QTabWidget* all_page;
    QString temp_password;
    password* my_password;
    int strength = 0;
    ~first_time_page();

private slots:
    void on_lineEdit_editingFinished();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::first_time_page *ui;
};

#endif // FIRST_TIME_PAGE_H
