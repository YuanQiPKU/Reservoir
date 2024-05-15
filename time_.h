#ifndef TIME__H
#define	TIME__H
#include "includes.h"
class Time_
{
public:
    int year, month, day, hour, minute, second;
    Time_();
    Time_(QString);//传参格式：yyyy/mm/dd hh:mm:ss
    Time_(int, int, int, int, int, int);//传参格式：m y d h min s
};

#endif // TIME__H
