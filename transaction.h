/*****
 * name: transaction.h
 * author: 林乐天<2300012154@stu.pku.edu.cn>
 * date: 2024/5/12
 * function: 声明了交易记录类
 *****/
#ifndef TRANSACTION_H
#define TRANSACTION_H
#pragma once
#include "enumerations.h"
#include "time_.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>

class Transaction {
  /******
   * 交易记录类
   * 成员变量：（私有）QString name_:交易的名称；Time_
   *transaction_time_交易时间； Kind transaction_kind_交易类型；double money
   *交易金额，正为收入，负为支出 成员函数：get_... 获得某个变量的值（read only）
   *change_...改变某个变量的值
   ******/
private:
  QString name_;
  Time_ transaction_time_;
  Kind transaction_kind_;
  double money_;

public:
  Transaction(bool write_into_db = false);
  Transaction(QString name, Time_ t, Kind k, double cost,
              bool write_into_db = false);
  Transaction(QString, bool write_into_db = false);
  QString get_name() const;
  Time_ get_time() const;
  Kind get_kind() const;
  double get_money() const;
  void change_time(Time_ t);
  void change_name(QString name);
  void change_money(double money);
  void change_kind(Kind kind);
};

#endif // TRANSACTION_H
