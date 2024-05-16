#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget), all_page(new QTabWidget),creator(new pages_creator) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  all_page->setParent(this); // 将all_page的父窗口设置为当前的Widget
  all_page->resize(QSize(960, 540));           // 固定标签页大小
  all_page->setTabPosition(QTabWidget::North); // 设置标签页位于窗口的上方
  all_page->setTabsClosable(true);
  QTabBar *tabBar = all_page->tabBar();
    connect(all_page, &QTabWidget::tabCloseRequested, this, &Widget::closeTab); // 设置tab关闭
// 设置标签页样式
  tabBar->setStyleSheet("QTabBar::tab{color: white;background: #5c8dff;border: 1px solid #73b7ff;min-width: 20ex;min-height: 4ex;}");
  tabBar->setStyleSheet(tabBar->styleSheet() +"QTabBar::tab:selected{background: #505cff;margin-top: 2ex;}");
  tabBar->setStyleSheet(tabBar->styleSheet() +"QTabBar::close-button:hover{background: red;}");
  // 设置主页面
  QWidget *main_page = creator->only_main_page(all_page);
  all_page->addTab(main_page, "主页面");
}

Widget::~Widget() { delete ui; }

// 用于删除标签页的槽函数
void Widget::closeTab() {
    int cur_index = all_page->currentIndex();
    if (cur_index == 0) {
        // 不可关闭第一个主页面
        return;
    }
    all_page->removeTab(cur_index);
}

