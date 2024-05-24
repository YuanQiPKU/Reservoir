/******
 * name:io.h
 * auth: yingziyu
 * usage: 定义了输入和输出，包括从csv中导入，导出到csv，和数据库交互的内容
 ******/
#ifndef IO_H
#define IO_H
#pragma once
#include "transaction.h"
#include <QDateTime>
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <map>
#include <memory>
#include <vector>
#include"kind.h"



namespace IO {

bool is_wechat(QString path_);
bool is_alipay(QString path_);
bool is_reservior(QString path_);
std::vector<std::shared_ptr<Transaction>> read_csv(QString path_);
void write_csv(std::vector<std::shared_ptr<Transaction>> data_, QString path_);
std::vector<std::shared_ptr<Transaction>> qurey_db(Time_ t);
std::vector<std::shared_ptr<Transaction>> qurey_db(Kind kind);
std::vector<std::shared_ptr<Transaction>>
query_db(bool order_by_time_reverse = false,
         bool order_by_money_reverse = false);
void insert_db(const Transaction* data_to_insert_);
void delete_db(const Transaction* data_to_delete_);
void update_db(const Transaction* data_to_update_,
               const Transaction* data_updated);

};     // namespace IO
#endif // IO_H
