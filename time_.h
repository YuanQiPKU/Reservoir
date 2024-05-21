/********
 * auth: yingziyu
 * name: time_.h
 * usage: 定义了Time_类
 *********/
#ifndef TIME__H
#define	TIME__H
#include <QString>
#include<QRegularExpression>
#include<QRegularExpressionMatch>
#include<QDate>


int daysBeforeThisMonth(int year, int month) {
    int days = 0;
    for (int m = 1; m < month; ++m) {
        days += (m == 2) ? (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 29 : 28)
                : ((m == 4) || (m == 6) || (m == 9) || (m == 11)) ? 30 : 31;
    }
    return days;
}

// 将年月日时分秒转换为Unix时间
long long convertToUnixTime(int year, int month, int day, int hour, int minute, int second) {
    // 1970年1月1日到指定日期的总天数
    int daysSince1970 = (year - 1970) * 365 + (year - 1969) / 4 - (year - 1901) / 100 + (year - 1601) / 400;
    daysSince1970 += daysBeforeThisMonth(year, month);
    daysSince1970 += day - 1; // 因为1月1日是第0天

    // 将天数转换为秒
    long long secondsSince1970 = daysSince1970 * 86400LL; // 一天有86400秒

    // 加上从午夜到指定时间的秒数
    secondsSince1970 += hour * 3600 + minute * 60 + second;

    return secondsSince1970;
}

class Time_
{
/*******
 * 含义：时间类，记录每一笔交易的时间
 * 成员变量：年月日时分秒
 * 成员函数：重定义：>,<,==
 * 构造：可以从QString构造，也可从一串数字构造
 *******/
public:
    int year, month, day, hour, minute, second;
    Time_();
    Time_(QString);//传参格式：yyyy/mm/dd hh:mm:ss
    Time_(QDate);
    Time_(int, int, int, int, int, int);//传参格式：m y d h min s
    bool operator<(Time_);
    bool operator>(Time_);
    bool operator==(Time_);
    long long c_to_second(){
         long long unixTime = convertToUnixTime(year, month, day, hour, minute, second);
    }
    operator QString();
    QString toString();
};




#endif // TIME__H
