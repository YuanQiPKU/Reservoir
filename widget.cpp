#include "widget.h"
#include "./ui_widget.h"
#include "pages.h"

Widget::Widget(password *my_password, QWidget *parent)
    : QWidget(parent), my_password(my_password), ui(new Ui::Widget),
      all_page(new QTabWidget), creator(new pages_creator) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  all_page->setParent(this); // 将all_page的父窗口设置为当前的Widget
  all_page->resize(QSize(960, 540));           // 固定标签页大小
  all_page->setTabPosition(QTabWidget::North); // 设置标签页位于窗口的上方
  all_page->setTabsClosable(true);
  QTabBar *tabBar = all_page->tabBar();
  connect(all_page, &QTabWidget::tabCloseRequested, this,
          &Widget::closeTab); // 设置tab可以被关闭
  if (password::password_count > 0 && my_password->password_size() > 0) {
    QWidget *login_page = pages_creator::login_page(all_page, my_password);
    all_page->addTab(login_page, "登录");
    all_page->setCurrentWidget(login_page); // 跳转新建到的页面
  } else {
    // 如果是第一次使用, 生成“新的开始”页面
    QWidget *first_time_page = creator->first_time_page(all_page, my_password);
    all_page->addTab(first_time_page, "新的开始");
    all_page->setCurrentWidget(first_time_page); // 跳转新建到的页面
  }
}
Widget::~Widget() { delete ui; }

// 用于删除标签页的槽函数
void Widget::closeTab(int index) {
    QWidget *widget = all_page->widget(index);
    QString tabText = all_page->tabText(index);

    if (tabText == "主页面") {
        // 关闭主页面时的刷新操作
        all_page->removeTab(index);
        QWidget *main_page = pages_creator::only_main_page(all_page, my_password);
        all_page->addTab(main_page, "主页面");
        all_page->setCurrentWidget(main_page); // 跳转新建到的页面
        return;
    }
    all_page->removeTab(index);
}
