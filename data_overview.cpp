#include "data_overview.h"
#include "transaction.h"

bool Data_overview::time_compare(const Transaction &a, const Transaction &b) {
  // return a.get_time() < b.get_time(); // 希望你加入对时间大小的重载
    return false;
}
bool Data_overview::money_compare(const Transaction &a, const Transaction &b) {
  return a.get_money() < b.get_money(); // 金额大小
}
bool Data_overview::name_compare(const Transaction &a, const Transaction &b) {
  return a.get_name() < b.get_name(); // 字典序
}
bool Data_overview::kind_compare(const Transaction &a, const Transaction &b) {
  return a.get_kind() < b.get_kind(); // 内置枚举类型，直接比较
}
