#include "time_.h"

Time_::Time_()
    :year(0),month(0),day(0),hour(0),minute(0),second(0)
    {
    qDebug() << "Waring: try to initialize Time_ as 0/0/0 0:0:0";
    };
Time_::Time_(QString str){
    QString reg = "(\\d*)/(\\d*)/(\\d*) (\\d*):(\\d*):(\\d*)";
    QRegularExpression regex(reg);
    QRegularExpressionMatch match = regex.match(str);
    if(match.hasMatch())
    {
        year = match.captured(0).toInt();
        month = match.captured(1).toInt();
        day = match.captured(2).toInt();
        hour = match.captured(3).toInt();
        minute = match.captured(4).toInt();
        second = match.captured(5).toInt();
    }
    else{
        qDebug() << "error in do this" << str << reg;
        throw "RegexError";
    }
}
Time_::Time_(int a, int b, int c, int d, int e, int f)
    :year(a),month(b),day(c),hour(d),minute(e),second(f)
    {

    };
