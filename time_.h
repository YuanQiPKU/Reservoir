/********
 * auth: yingziyu
 * name: time_.h
 * usage: 定义了Time_类
 *********/
#ifndef TIME__H
#define	TIME__H
#include "includes.h"

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
    Time_(int, int, int, int, int, int);//传参格式：m y d h min s
    bool operator<(Time_);
    bool operator>(Time_);
    bool operator==(Time_);

};

#endif // TIME__H
