#ifndef KIND_H
#define KIND_H
#pragma once
#include "enumerations.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>

namespace kind {
// TODO: 完成getkind函数
Kind get_kind(QString transaction_kind, QString to_whom) {
  // 从收付款类型和对象猜测账单类型
  return null;
}
// int kind_number();
// Kind index_to_kind(int);
// QString kind_to_string(Kind);
} // namespace kind
// 写上从kind到QString的转换函数啊
#endif // KIND_H
