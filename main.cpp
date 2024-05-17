#include "widget.h"
#include"pages.h"
#include <QApplication>
int password::password_count = 0;
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
 Widget w(nullptr); // 考虑在本地读取密码
  w.show();
  return a.exec();
}
