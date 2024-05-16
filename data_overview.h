/*****
 * name: data_overview.h
 * author: 秦宏伟<2300013710@stu.pku.edu.cn>
 * date: 2024/5/15
 * function: 声明了数据分析类，用于对数据进行排序和统计分析
 *****/

#ifndef DATA_OVERVIEW_H
#define DATA_OVERVIEW_H
#include "transaction.h"
#endif // DATA_OVERVIEW_H
class Data_overview { // 数据分析类，用于对数据进行排序和统计分析
private:
public:
  bool time_compare(const Transaction &a, const Transaction &b);
  bool money_compare(const Transaction &a, const Transaction &b);
  bool name_compare(const Transaction &a, const Transaction &b);
  bool kind_compare(const Transaction &a, const Transaction &b);
};
