#include "transaction.h"
#include "kind.h"

Transaction::Transaction():name_(),transaction_kind_(null),transaction_time_(),money_(0){}
Transaction::Transaction(QString name,Time_ t,Kind k,double cost):
        name_(name),transaction_time_(t),transaction_kind_(k),money_(cost){

    }

Transaction::Transaction(QString input){//从字符串初始化
    auto inputs = input.split(",",Qt::SkipEmptyParts);
    this->transaction_time_ = Time_(inputs[0]);
    this->transaction_kind_ = kind::get_kind(inputs[1],inputs[2]);//从支付对象和描述得到类型
    this->name_ = inputs[3];
    QRegularExpression mo("¥(\\d*\\.\\d*)");//钱的格式
    QRegularExpressionMatch match = mo.match(inputs[5]);
    if(match.hasMatch())
        money_ = match.captured().toDouble();
    else
    {
        qDebug() << "money mismatch \n" << input;
        throw "MoneyMismatchError";//报错：money格式错误
    }
    if(inputs[4] == u"收入")
        money_ = money_;
    else if(inputs[4] == u"支出")
        money_ = -money_;
    else
    {
        qDebug() << "Unexpected in/out kind\n" << input <<"\n" << inputs[4];
        throw "in/outKindMismatchError";//报错：收支不正确
    }
}
QString Transaction::get_name()const{
    return name_;
}
Time_ Transaction::get_time()const{
    return transaction_time_;
}
Kind Transaction::get_kind()const{
    return transaction_kind_;
}
double Transaction::get_money()const{
    return money_;
}
void Transaction::change_time(Time_ t) {
    transaction_time_ = t;
}
void Transaction::change_name(QString name) {
    name_ = name;
}
void Transaction::change_money(double money){
    money_ = money;
}
void Transaction::change_kind(Kind kind) {
    transaction_kind_ = kind;
}
