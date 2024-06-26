#pragma once
#ifndef PAGES_H
#define PAGES_H
#pragma once
#include "io.h"
#include "password.h"
#include "waterprocess.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QTabBar>
#include <QTabWidget>
#include <QVBoxLayout>
#include <QVector>
#include <QWidget>

#endif // PAGES_H

// 页面生成器的声明
class pages_creator {
public:
  static QWidget *first_time_page(QTabWidget *all_page, password *my_password);
  static QWidget *login_page(QTabWidget *all_page, password *my_password);
  static QWidget *only_main_page(QTabWidget *all_page, password *my_password);
  static QWidget *add_account_page(QTabWidget *all_page);
  static QWidget *manage_account_page(QTabWidget *all_page);
  static QWidget *data_analysis_page(QTabWidget *all_page);
  static QWidget *user_help_page(QTabWidget *all_page);
  static QWidget *setting_page(QTabWidget *all_page, password *my_password);
};
