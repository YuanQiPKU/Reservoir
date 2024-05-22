#include "time_.h"

Time_::Time_() : year(0), month(0), day(0), hour(0), minute(0), second(0) {
  qDebug() << "Waring: try to initialize Time_ as 0/0/0 0:0:0";
};
Time_::Time_(QString str) {
  QString reg = "(\\d*)-(\\d*)-(\\d*) (\\d*):(\\d*):(\\d*)";
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
    qDebug() << "ERROR 时间格式不正确" << str << reg << Qt::endl;
    throw "TimeSyntaxError";
  }
}
Time_::Time_(int a, int b, int c, int d, int e, int f)
    : year(a), month(b), day(c), hour(d), minute(e), second(f){};
Time_::Time_(QDate qda)
    : year(qda.year()), month(qda.month()), day(qda.day()), minute(0),
      second(0){};

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

int daysBeforeThisMonth(int year, int month) {
  int days = 0;
  for (int m = 1; m < month; ++m) {
    days +=
        (m == 2)
            ? (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 29 : 28)
        : ((m == 4) || (m == 6) || (m == 9) || (m == 11)) ? 30
                                                          : 31;
  }
  return days;
}

// 将年月日时分秒转换为Unix时间
long long convertToUnixTime(int year, int month, int day, int hour, int minute,
                            int second) {
  // 1970年1月1日到指定日期的总天数
  int daysSince1970 = (year - 1970) * 365 + (year - 1969) / 4 -
                      (year - 1901) / 100 + (year - 1601) / 400;
  daysSince1970 += daysBeforeThisMonth(year, month);
  daysSince1970 += day - 1; // 因为1月1日是第0天

  // 将天数转换为秒
  long long secondsSince1970 = daysSince1970 * 86400LL; // 一天有86400秒

  // 加上从午夜到指定时间的秒数
  secondsSince1970 += hour * 3600 + minute * 60 + second;

  return secondsSince1970;
}

long long Time_::c_to_second() {
  long long unixTime =
      convertToUnixTime(year, month, day, hour, minute, second);
  return unixTime;
}
