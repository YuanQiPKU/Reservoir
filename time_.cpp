#include "time_.h"

Time_::Time_() : year(0), month(0), day(0), hour(0), minute(0), second(0) {
  qDebug() << "Waring: try to initialize Time_ as 0/0/0 0:0:0";
};
Time_::Time_(QString str) {
  QString reg = "(\\d*)/(\\d*)/(\\d*) (\\d*):(\\d*):(\\d*)";
  QRegularExpression regex(reg);
  QRegularExpressionMatch match = regex.match(str);
  if (match.hasMatch()) {
    year = match.captured(0).toInt();
    month = match.captured(1).toInt();
    day = match.captured(2).toInt();
    hour = match.captured(3).toInt();
    minute = match.captured(4).toInt();
    second = match.captured(5).toInt();
  } else {
    qDebug() << "error in do this" << str << reg;
    throw "RegexError";
  }
}
Time_::Time_(int a, int b, int c, int d, int e, int f)
    : year(a), month(b), day(c), hour(d), minute(e), second(f){
};

bool Time_::operator<(Time_ a)
{
    if(this->year != a.year)
        return this->year < a.year;
    if(this->month != a.month)
        return this->month < a.month;
    if(this->day != a.day)
        return this->day < a.day;
    if(this->hour != a.hour)
        return this->hour < a.hour;
    if(this->minute != a.minute)
        return this->minute < a.minute;
    if(this->second != a.second)
        return this->second < a.second;
    return false;
}

bool Time_::operator>(Time_ a)
{
    if(this->year != a.year)
        return this->year > a.year;
    if(this->month != a.month)
        return this->month > a.month;
    if(this->day != a.day)
        return this->day > a.day;
    if(this->hour != a.hour)
        return this->hour > a.hour;
    if(this->minute != a.minute)
        return this->minute > a.minute;
    if(this->second != a.second)
        return this->second > a.second;
    return false;
}

bool Time_::operator==(Time_ a)
{
    return !((*this) > a) && !((*this) < a);
}
QString Time_::toString() {
    return QString("%1/%2/%3 %4:%5:%6")
        .arg(year, 4, 10, QChar('0'))  // 年份，最少4位，缺少部分以0填充
        .arg(month, 2, 10, QChar('0')) // 月份，最少2位，缺少部分以0填充
        .arg(day, 2, 10, QChar('0'))   // 日期，最少2位，缺少部分以0填充
        .arg(hour, 2, 10, QChar('0'))  // 小时，最少2位，缺少部分以0填充
        .arg(minute, 2, 10, QChar('0')) // 分钟，最少2位，缺少部分以0填充
        .arg(second, 2, 10, QChar('0')); // 秒，最少2位，缺少部分以0填充
}
