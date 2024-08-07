#include "time_.h"

Time_::Time_() : year(0), month(0), day(0), hour(0), minute(0), second(0) {
  qDebug() << "Waring: try to initialize Time_ as 0/0/0 0:0:0";
};
Time_::Time_(QString str) {
  QString reg = "(\\d+)-(\\d+)-(\\d+) (\\d+):(\\d+):(\\d+)";
  static QRegularExpression data_regex(reg);
  QRegularExpressionMatch match = data_regex.match(str);
  if (match.hasMatch()) {
    year = match.captured(1).toInt();
    month = match.captured(2).toInt();
    day = match.captured(3).toInt();
    hour = match.captured(4).toInt();
    minute = match.captured(5).toInt();
    second = match.captured(6).toInt();
  } else {
    qDebug() << "ERROR 时间格式不正确" << str << reg << Qt::endl;
    throw "TimeSyntaxError";
  }
}
Time_::Time_(int a, int b, int c, int d, int e, int f)
    : year(a), month(b), day(c), hour(d), minute(e), second(f){};
Time_::Time_(QDateTime qdat)
    : year(qdat.date().year()), month(qdat.date().month()),
      day(qdat.date().day()), hour(qdat.time().hour()),
      minute(qdat.time().minute()), second(qdat.time().second()){};

bool Time_::operator<(Time_ a) {
  if (this->year != a.year)
    return this->year < a.year;
  if (this->month != a.month)
    return this->month < a.month;
  if (this->day != a.day)
    return this->day < a.day;
  if (this->hour != a.hour)
    return this->hour < a.hour;
  if (this->minute != a.minute)
    return this->minute < a.minute;
  if (this->second != a.second)
    return this->second < a.second;
  return false;
}

bool Time_::operator>(Time_ a) {
  if (this->year != a.year)
    return this->year > a.year;
  if (this->month != a.month)
    return this->month > a.month;
  if (this->day != a.day)
    return this->day > a.day;
  if (this->hour != a.hour)
    return this->hour > a.hour;
  if (this->minute != a.minute)
    return this->minute > a.minute;
  if (this->second != a.second)
    return this->second > a.second;
  return false;
}

bool Time_::operator==(Time_ a) { return !((*this) > a) && !((*this) < a); }
QString Time_::toString() {
  qDebug() << *this;
  return QString("%1/%2/%3 %4:%5:%6")
      .arg(year, 4, 10, QChar('0')) // 年份，最少4位，缺少部分以0填充
      .arg(month, 2, 10, QChar('0')) // 月份，最少2位，缺少部分以0填充
      .arg(day, 2, 10, QChar('0')) // 日期，最少2位，缺少部分以0填充
      .arg(hour, 2, 10, QChar('0')) // 小时，最少2位，缺少部分以0填充
      .arg(minute, 2, 10, QChar('0')) // 分钟，最少2位，缺少部分以0填充
      .arg(second, 2, 10, QChar('0')); // 秒，最少2位，缺少部分以0填充
}

Time_::operator QString() {
  // 专门面向sql query的类型转换
  return QString("%1,%2,%3,%4,%5,%6")
      .arg(year)
      .arg(month)
      .arg(day)
      .arg(hour)
      .arg(minute)
      .arg(second);
}

QDateTime Time_::mytime_to_qdatetime() { // 转换到QDateTime
  return QDateTime(QDate(year, month, day), QTime(hour, minute, second));
}
