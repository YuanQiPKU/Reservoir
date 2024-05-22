#ifndef WIDGET_H
#define WIDGET_H
#pragma once
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
  Widget(password *my_password, QWidget *parent = nullptr);
  ~Widget();

private:
  Ui::Widget *ui;

public:
  // 设置QTabWeight用于管理页面
  QTabWidget *all_page;
  // 页面生成器
  pages_creator *creator;
  // 密码
  password *my_password = nullptr;
};
#endif // WIDGET_H
