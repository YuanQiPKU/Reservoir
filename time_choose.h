#ifndef TIME_CHOOSE_H
#define TIME_CHOOSE_H

#include <QWidget>
#include<QTime>
#include<QDate>
#include<QDateTime>
namespace Ui {
class time_choose;
}

class time_choose : public QWidget
{
    Q_OBJECT

public:
    explicit time_choose(QWidget *parent = nullptr);
    QDate mydate;
    QTime mytime;
    ~time_choose();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_timeEdit_userTimeChanged(const QTime &time);
    void on_btnYes_clicked();

signals:
    void time_emit(QDateTime t);
private:
    Ui::time_choose *ui;
};

#endif // TIME_CHOOSE_H
