#include "main_page.h"
#include "pages.h"
#include "qsqlquery.h"
#include "widget.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>


int password::password_count = 0;
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  QString save_password = password::password_load();
  double target = password::target_amount_load();
  // 读取本地的密码，根据是否存在初始化密码
  password *local_password = nullptr;
  if (save_password.size() != 0) {
    local_password = new password(save_password, target);
  } else {
    local_password = new password("", 0);
  }

  Widget w(local_password);
  w.setWindowTitle("水库"); // 设置标题
  w.show();
  // 以下：查询数据库是否存在，若存在就打开，否则新建数据库
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("transaction_db.dat");
  if (!db.open()) {
    qDebug() << "无法打开数据库！";
    throw "UnableToOpenDatabaseError";
  }
  QSqlQuery q;
  auto IsTableExist = [](QSqlQuery &query, QString table) -> bool {
    QString sql =
        QString("select * from sqlite_master where name='%1'").arg(table);
    query.exec(sql);
    return query.next();
  };
  if (!IsTableExist(q, "maintable")) {
    q.exec("CREATE TABLE maintable("
           "name TEXT NOT NULL,"
           "year INT NOT NULL,"
           "month INT NOT NULL,"
           "day INT NOT NULL,"
           "hour INT NOT NULL,"
           "minute INT NOT NULL,"
           "second INT NOT NULL,"
           "kind INT NOT NULL,"
           "money REAL NOT NULL"
           ");");
  }
  return a.exec();
}
