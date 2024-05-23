#include"kind.h"

int kind_count = 5;

Kind kind::get_kind(QString transaction_kind, QString to_whom) {
    // 从收付款类型和对象猜测账单类型
    return null;
}

int kind::kind_number(){return kind_count;}

Kind kind::index_to_kind(int a){
    return Kind(a);
}
QString kind::kind_to_string(Kind){
    return "还没写";
}
