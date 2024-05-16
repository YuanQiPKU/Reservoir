#include "pages.h"
#include "main_page.h"
// 页面生成器的定义


QWidget *pages_creator::only_main_page(QTabWidget* all_page){
    QWidget* my_weight = new main_page(all_page);
    return my_weight;
}
QWidget *pages_creator::add_account_page(QTabWidget* all_page) {
    QWidget* my_weight = new QWidget;
    return my_weight;
}
QWidget *pages_creator::manage_account_page(QTabWidget* all_page) {
    QWidget* my_weight = new QWidget;
    return my_weight;
}
QWidget *pages_creator::data_analysis_page(QTabWidget* all_page) {
    QWidget* my_weight = new QWidget;
    return my_weight;
}
QWidget *pages_creator::user_help_page(QTabWidget* all_page) {
    QWidget* my_weight = new QWidget;
    return my_weight;
}
QWidget *pages_creator::setting_page(QTabWidget* all_page) {
    QWidget* my_weight = new QWidget;
    return my_weight;
}
