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
// 设置标签页样式
  tabBar->setStyleSheet("QTabBar::tab{color: white;background: #5c8dff;border: 1px solid #73b7ff;min-width: 20ex;min-height: 4ex;}");
  tabBar->setStyleSheet(tabBar->styleSheet() +"QTabBar::tab:selected{background: #505cff;margin-top: 2ex;}");
  tabBar->setStyleSheet(tabBar->styleSheet() +"QTabBar::close-button:hover{background: red;}");

  // 设置主页面
  QWidget *main_page = new QWidget;
  main_page->setStyleSheet(
      "background-image: url(:/pages/main_page/image/main_page.png);");
  // 创建一个垂直布局管理器
  QVBoxLayout *layout = new QVBoxLayout();
  // 创建五个按钮并设置它们的文本
  QPushButton *btnAddAccount = new QPushButton("新增账目");
  QPushButton *btnManageAccount = new QPushButton("账目管理");
  QPushButton *btnDataAnalysis = new QPushButton("数据分析");
  QPushButton *btnUserHelp = new QPushButton("用户帮助");
  QPushButton *btnSettings = new QPushButton("设置");
  // 将按钮添加到布局中
  layout->addWidget(btnAddAccount);
  layout->addWidget(btnManageAccount);
  layout->addWidget(btnDataAnalysis);
  layout->addWidget(btnUserHelp);
  layout->addWidget(btnSettings);
  // 设置布局为窗口的主布局
  main_page->setLayout(layout);
  all_page->addTab(main_page, "主页面");
  // 连接按钮的clicked信号到槽函数
  connect(btnAddAccount, &QPushButton::clicked, this,
          &Widget::onAddAccountClicked);
  connect(btnManageAccount, &QPushButton::clicked, this,
          &Widget::onManageAccountClicked);
  connect(btnDataAnalysis, &QPushButton::clicked, this,
          &Widget::onDataAnalysisClicked);
  connect(btnUserHelp, &QPushButton::clicked, this, &Widget::onUserHelpClicked);
  connect(btnSettings, &QPushButton::clicked, this, &Widget::onSettingsClicked);
  connect(all_page, &QTabWidget::tabCloseRequested, this, &Widget::closeTab);
}

Widget::~Widget() { delete ui; }
// 注意作用域标识符，要不然报错找不到定义
void Widget::onAddAccountClicked() {
  // 点击生成“新增账目”页面
    QWidget *add_account = creator->add_account_page(all_page);
  all_page->addTab(add_account, "新增账目");
  all_page->setCurrentWidget(add_account); // 跳转新建到的页面
}
void Widget::onManageAccountClicked() {
  // 点击生成“账目管理”页面
  QWidget *manage_account = creator->manage_account_page(all_page);
  all_page->addTab(manage_account, "账目管理");
  all_page->setCurrentWidget(manage_account); // 跳转新建到的页面
}
void Widget::onDataAnalysisClicked() {
  // 点击生成“数据分析”页面
  QWidget *data_analysis = creator->data_analysis_page(all_page);
  all_page->addTab(data_analysis, "数据分析");
  all_page->setCurrentWidget(data_analysis); // 跳转新建到的页面
}
void Widget::onUserHelpClicked() {
  // 点击生成“用户帮助”页面
  QWidget *user_help = creator->user_help_page(all_page);
  all_page->addTab(user_help, "用户帮助");
  all_page->setCurrentWidget(user_help); // 跳转新建到的页面
}
void Widget::onSettingsClicked() {
  // 点击生成“设置”页面
  QWidget *setting = creator->setting_page(all_page);
  all_page->addTab(setting, "设置");
  all_page->setCurrentWidget(setting); // 跳转新建到的页面
}
// 用于删除标签页
void Widget::closeTab() {
    int cur_index = all_page->currentIndex();
    if (cur_index == 0) {
        // 不可关闭第一个主页面
        return;
    }
    all_page->removeTab(cur_index);
}

