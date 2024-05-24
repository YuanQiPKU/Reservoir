#include "pages.h"
#include "add_account_page.h"
#include "data_analysis_page.h"
#include "first_time_page.h"
#include "login_page.h"
#include "main_page.h"
#include "manage_account_page.h"
#include "setting_page.h"
#include "user_help_page.h"

// 页面生成器的定义
// 需要密码的部分
QWidget *pages_creator::first_time_page(QTabWidget *all_page,
                                        password *my_password) {
  QWidget *my_weight = new class first_time_page(all_page, my_password);
  return my_weight;
}
QWidget *pages_creator::login_page(QTabWidget *all_page,
                                   password *my_password) {
  QWidget *my_weight = new class login_page(all_page, my_password);
  return my_weight;
}

QWidget *pages_creator::only_main_page(QTabWidget *all_page,password* my_password) {
  QWidget *my_weight = new class main_page(all_page,my_password);
  return my_weight;
}
QWidget *pages_creator::setting_page(QTabWidget *all_page,password *my_password) {
    QWidget *my_weight = new class setting_page(all_page, my_password);
    return my_weight;
}


// 不需要密码的部分
QWidget *pages_creator::add_account_page(QTabWidget *all_page) {
  QWidget *my_weight = new class add_account_page(all_page);
  return my_weight;
}
QWidget *pages_creator::manage_account_page(QTabWidget *all_page) {
  QWidget *my_weight = new class manage_account_page(all_page);
  return my_weight;
}
QWidget *pages_creator::data_analysis_page(QTabWidget *all_page) {
  QWidget *my_weight = new class data_analysis_page(all_page);
  return my_weight;
}
QWidget *pages_creator::user_help_page(QTabWidget *all_page) {
  QWidget *my_weight = new class user_help_page(all_page);
  return my_weight;
}

