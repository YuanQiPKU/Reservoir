#include "io.h"

bool IO::is_wechat(QString path_) {
  QFile file(path_);
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    qDebug() << "ERROR 无法打开文件";
    throw "UnableToOpenError";
  }
  QTextStream stream(&file);
  QString line = stream.readLine();
  // if (line == "微信支付账单明细,,,,,,,,")
  //   return true;
  if (line.startsWith("微信")) // 修改了这里
    return true;
  return false;
}

bool IO::is_alipay(QString path_) {
  QFile file(path_);
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    qDebug() << "ERROR 无法打开文件";
    throw "UnableToOpenError";
  }
  QTextStream stream(&file);
  QString line = stream.readLine();
  for (int i = 1; i < 4; i++)
    line = stream.readLine();
  if (line.startsWith("支"))
    return true;
  return false;
}
bool IO::is_reservior(QString path_) {
  QFile file(path_);
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    qDebug() << "ERROR 无法打开文件";
    throw "UnableToOpenError";
  }
  QTextStream stream(&file);
  QString line = stream.readLine();
  if (line.startsWith("Reservior 账单导出"))
    return true;
  return false;
}

std::vector<std::shared_ptr<Transaction>> IO::read_csv(QString path_) {
  /********
   * 输入：csv文件路径(QString)
   * 输出：一个存有csv中交易记录智能指针的vector
   * 注意：异常处理！请使用try调用
   *******/

  std::vector<std::shared_ptr<Transaction>> result(0);
  if (is_wechat(path_)) {
    qDebug() << "读取微信账单";
    QFile file(path_);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream stream(&file);
    bool started = false;
    while (!stream.atEnd()) {
      QString line = stream.readLine();
      if (started) {
        try {
          result.push_back(
              std::shared_ptr<Transaction>(new Transaction(line, true)));
          qDebug() << "创建新数据" << result.back()->get_name() << Qt::endl;
        } catch (...) {
          qDebug() << "创建类型失败！";
        }
      }
      if (line.startsWith("交易时间"))
        started = true;
    }
  } else if (is_alipay(path_)) {
    qDebug() << "读取支付宝账单";
    QFile file(path_);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream stream(&file);
    bool started = false;
    while (!stream.atEnd()) {
      QString line = stream.readLine();
      if (started)
          try{
        result.push_back(
            std::shared_ptr<Transaction>(new Transaction(line, true,true))),
            qDebug() << "创建新数据" << result.back()->get_name()
                     << Qt::endl; // 需要进入数据库
          }
          catch(...){
              qDebug() <<"创建类型失败！";
          }

      if (line.startsWith("交易时间"))
        started = true;
    }
  } else if (is_reservior(path_)) {
    qDebug() << "读取先前导出的账单";
    QFile file(path_);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream stream(&file);
    bool started = false;
    while (!stream.atEnd()) {
      QString line = stream.readLine();
      if (started)
        result.push_back(
            std::shared_ptr<Transaction>(new Transaction(line, true))),
            qDebug() << "创建新数据" << result.back()->get_name() << Qt::endl;
      if (line.startsWith("交易时间"))
        started = true;
    }
  } else {
    qDebug() << "ERROR 导入账单类型错误：不是微信或支付宝";
    throw "BillTypeError";
    return result;
  }
  return result;
}

void IO::write_csv(std::vector<std::shared_ptr<Transaction>> data_,
                   QString path_) {
  /********
   * 输入：要导出的内容,csv文件路径
   * 输出：无
   *******/
  // TODO
  return;
}

std::vector<std::shared_ptr<Transaction>> qurey_db(Time_ t) {
  /********
   * 输入：查询的精准时间
   * 输出：一个存有数据库中交易记录智能指针的vector
   *******/

  std::vector<std::shared_ptr<Transaction>> result(0);
  QString query_command =
      "SELECT * FROM maintable WHERE year==%1 AND month==%2 AND day==%3 AND "
      "hour==%4 AND minute==%5 AND second==%6;";
  query_command = query_command.arg(t.year)
                      .arg(t.month)
                      .arg(t.day)
                      .arg(t.hour)
                      .arg(t.minute)
                      .arg(t.second);
  QSqlQuery sql_query;
  if (!sql_query.exec(query_command)) {
    qDebug() << sql_query.lastError();
  } else {
    while (sql_query.next()) {
      Transaction *x = new Transaction();
      x->change_name(sql_query.value(0).toString());
      x->change_time(
          Time_(sql_query.value(1).toInt(), sql_query.value(2).toInt(),
                sql_query.value(3).toInt(), sql_query.value(4).toInt(),
                sql_query.value(5).toInt(), sql_query.value(6).toInt()));
      x->change_kind((Kind)sql_query.value(7).toInt());
      x->change_money(sql_query.value(8).toDouble());
      result.push_back(std::shared_ptr<Transaction>(x));
    }
  }
  return result;
}

std::vector<std::shared_ptr<Transaction>> IO::qurey_db(Kind kind) {
  /********
   * 输入：查询的类别
   * 输出：一个存有数据库中交易记录智能指针的vector
   *******/

  std::vector<std::shared_ptr<Transaction>> result(0);
  QString query_command = "SELECT * FROM maintable WHERE kind==%1;";
  query_command = query_command.arg((int)kind);
  QSqlQuery sql_query;
  if (!sql_query.exec(query_command)) {
    qDebug() << sql_query.lastError();
  } else {
    while (sql_query.next()) {
      qDebug() << "new X" << Qt::endl;
      Transaction *x = new Transaction();
      x->change_name(sql_query.value(0).toString());
      x->change_time(
          Time_(sql_query.value(1).toInt(), sql_query.value(2).toInt(),
                sql_query.value(3).toInt(), sql_query.value(4).toInt(),
                sql_query.value(5).toInt(), sql_query.value(6).toInt()));
      x->change_kind((Kind)sql_query.value(7).toInt());
      x->change_money(sql_query.value(8).toDouble());
      result.push_back(std::shared_ptr<Transaction>(x));
    }
  }
  return result;
}

std::vector<std::shared_ptr<Transaction>>
IO::query_db(bool order_by_time_reverse, bool order_by_money_reverse) {
  /***********
   * 输入：两个bool，分别代表是否按照time/money升序排列，默认降序
   * 输出：一个存有数据库中交易记录智能指针的vector
   ***********/
  std::vector<std::shared_ptr<Transaction>> result(0);
  QString query_command = "SELECT * FROM maintable %1;";
  QString to_append =
      "ORDER BY year %1,month %1,day %1,hour %1,minute %1,second %1,money %2";
  if (order_by_time_reverse)
    to_append = to_append.arg("DESC");
  else
    to_append = to_append.arg("ASC");
  if (order_by_money_reverse)
    to_append = to_append.arg("DESC");
  else
    to_append = to_append.arg("ASC");
  query_command = query_command.arg(to_append);
  qDebug() << query_command << Qt::endl;
  QSqlQuery sql_query;
  if (!sql_query.exec(query_command)) {
    qDebug() << sql_query.lastError();
  } else {
    while (sql_query.next()) {
      std::shared_ptr<Transaction> x(new Transaction());
      x->change_name(sql_query.value(0).toString());
      x->change_time(
          Time_(sql_query.value(1).toInt(), sql_query.value(2).toInt(),
                sql_query.value(3).toInt(), sql_query.value(4).toInt(),
                sql_query.value(5).toInt(), sql_query.value(6).toInt()));
      x->change_kind((Kind)sql_query.value(7).toInt());
      x->change_money(sql_query.value(8).toDouble());
      result.push_back(x);
      qDebug() << x->get_name();
    }
  }
  return result;
}

void IO::insert_db(const Transaction *data_to_insert_) {
  /*****
   * 输入：插入的数据
   * 输出：无
   *****/
  // 防止注入
  QRegularExpression reg(
      "(.*\\b(select|update|union|and|or|delete|insert|"
      "trancate|char|into|substr|ascii|declare|exec|count|master|into|drop|"
      "execute)\\b.*)");
  QString query_command =
      "INSERT INTO maintable "
      "(name,year,month,day,hour,minute,second,kind,money) VALUES (%1);";
  QString to_append("\'%1\',%2,%3,%4");
  to_append = to_append.arg(data_to_insert_->get_name())
                  .arg(data_to_insert_->get_time())
                  .arg((int)data_to_insert_->get_kind())
                  .arg(data_to_insert_->get_money());
  QRegularExpressionMatch match = reg.match(to_append);
  if (match.hasMatch()) {
    qDebug() << "非法输入！";
    qDebug() << match.captured();
    throw "IlligalInput";
  }
  query_command = query_command.arg(to_append);
  qDebug().noquote().nospace() << query_command;
  QSqlQuery sqlquery;
  sqlquery.exec(query_command);
  return;
}

void IO::delete_db(const Transaction *data_to_delete_) {
  /*****
   * 输入：删除的数据
   * 输出：无
   *****/
  QRegularExpression reg(
      "(.*\\b(select|update|union|and|or|delete|insert|"
      "trancate|char|into|substr|ascii|declare|exec|count|master|into|drop|"
      "execute)\\b.*)");
  QString query_command =
      "DELETE FROM maintable WHERE year==%1 AND month==%2 AND day==%3 AND "
      "hour==%4 AND minute==%5 AND second==%6";
  Time_ t = data_to_delete_->get_time();
  query_command = query_command.arg(t.year)
                      .arg(t.month)
                      .arg(t.day)
                      .arg(t.hour)
                      .arg(t.minute)
                      .arg(t.second);
  QString to_append = " AND name==\'%1\' AND kind==%2 AND money==%3;";
  QRegularExpressionMatch match = reg.match(data_to_delete_->get_name());
  if (match.hasMatch()) {
    qDebug() << "非法输入！";
    qDebug() << match.captured();
    throw "IlligalInput";
  }
  to_append = to_append.arg(data_to_delete_->get_name())
                  .arg((int)data_to_delete_->get_kind())
                  .arg(data_to_delete_->get_money());
  query_command.append(to_append);
  QSqlQuery sqlquery;
  qDebug().noquote().nospace() << query_command;
  sqlquery.exec(query_command);
  return;
}

void IO::update_db(const Transaction *data_to_update_,
                   const Transaction *data_updated) {
  /********
   * 输入：要修改的数据，修改后的数据(要修改的数据若为nullptr，则为插入操作;修改后的数据若为nullptr，则为删除操作)
   * 输出：无
   *******/
  try {
    delete_db(data_to_update_);
    insert_db(data_updated);
  } catch (std::exception_ptr e) {
    qDebug() << "Error in update_db)";
    std::rethrow_exception(e);
  }
  return;
}
