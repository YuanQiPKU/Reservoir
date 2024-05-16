#pragma once
#ifndef PAGES_H
#define PAGES_H
#include <QApplication>
#include <QMouseEvent>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QTabBar>
#include <QTabWidget>
#include <QVBoxLayout>
#include <QVector>
#include <QWidget>
#include <QMessageBox>

#endif // PAGES_H

// 页面生成器的声明
class pages_creator {
public:
  QWidget *add_account_page(QTabWidget* all_page);
  QWidget *manage_account_page(QTabWidget* all_page);
  QWidget *data_analysis_page(QTabWidget* all_page);
  QWidget *user_help_page(QTabWidget* all_page);
  QWidget *setting_page(QTabWidget* all_page);
};
