#ifndef WIDGET_H
#define WIDGET_H

#include "pages.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget {
  Q_OBJECT
  // 槽函数的声明
public slots:
  void closeTab();
  // 构造函数和析构函数
public:
  Widget(QWidget *parent = nullptr);
  ~Widget();

private:
  Ui::Widget *ui;
public:
  QTabWidget *all_page; // 设置QTabWeight用于管理页面
  pages_creator * creator; // 页面生成器
  password* my_password = nullptr;
};
#endif // WIDGET_H
