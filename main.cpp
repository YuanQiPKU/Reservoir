#include "widget.h"
#include"pages.h"
#include <QApplication>
int password::password_count = 0;
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Widget w;
  w.show();
  return a.exec();
}
