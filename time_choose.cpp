#include "time_choose.h"
#include "ui_time_choose.h"

time_choose::time_choose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::time_choose)
{
    ui->setupUi(this);
}

time_choose::~time_choose()
{
    delete ui;
}

void time_choose::on_calendarWidget_clicked(const QDate &date)
{
    mydate = date;
}


void time_choose::on_timeEdit_userTimeChanged(const QTime &time)
{
    mytime = time;
}
void time_choose::on_btnYes_clicked()
{
    emit time_emit(QDateTime (mydate,mytime));
    this->close();
}

