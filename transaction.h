/*****
 * name: transaction.h
 * author: 林乐天<2300012154@stu.pku.edu.cn>
 * date: 2024/5/12
 * function: 声明了交易记录类
 *****/
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "includes.h"
#include "time_.h"
#include "enumerations.h"
class Transaction
{
private:
    QString name_;
    Time_ transaction_time_;
    Kind transaction_kind_;
    double money_;

public:
    Transaction();
    Transaction(QString name,Time_ t,Kind k,double cost);
    Transaction(QString);
    QString get_name()const;
    Time_ get_time()const;
    Kind get_kind()const;
    double get_money()const;
    void change_time(Time_ t);
    void change_name(QString name);
    void change_money(double money);
    void change_kind(Kind kind);
};

#endif // TRANSACTION_H
