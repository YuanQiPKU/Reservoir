#include"io.h"
#include "transaction.h"
Transaction::Transaction(bool write_into_db)
    : name_(), transaction_kind_(), transaction_time_(), money_(0) {
  if (write_into_db) {
    IO::insert_db(this);
  }
}
Transaction::Transaction(QString name, Time_ t, Kind k, double cost,
                         bool write_into_db)
    : name_(name), transaction_time_(t), transaction_kind_(k), money_(cost) {
  if (write_into_db) {
    IO::insert_db(this);
  }
}

Transaction::Transaction(QString input, bool write_into_db) { // 从字符串初始化
  auto inputs = input.split(",", Qt::SkipEmptyParts);
  qDebug() << inputs;
  qDebug() << inputs.at(0);
    this->transaction_time_ = Time_(inputs.at(0));
  this->transaction_kind_ =
        kind::get_kind(inputs.at(1), inputs.at(2)); // 从支付对象和描述得到类型
    this->name_ = inputs.at(3);
  this->name_.remove('\"').remove('\\');
  qDebug() << inputs.at(5);
    money_ = inputs.at(5).sliced(1).toDouble();
  if (inputs.at(4) == u"收入")
    money_ = money_;
  else if (inputs.at(4) == u"支出")
    money_ = -money_;
  else {
    qDebug() << "ERROR Unexpected in/out kind\n" << input << "\n" << inputs[4];
    throw "in/outKindMismatchError"; // 报错：收支不正确
  }
  qDebug() << name_ << transaction_time_ << money_ << transaction_kind_;
  if (write_into_db) {
    IO::insert_db(this);
  }
}
QString Transaction::get_name() const { return name_; }
Time_ Transaction::get_time() const { return transaction_time_; }
Kind Transaction::get_kind() const { return transaction_kind_; }
double Transaction::get_money() const { return money_; }
void Transaction::change_time(Time_ t) { transaction_time_ = t; }
void Transaction::change_name(QString name) { name_ = name; }
void Transaction::change_money(double money) { money_ = money; }
void Transaction::change_kind(Kind kind) { transaction_kind_ = kind; }
