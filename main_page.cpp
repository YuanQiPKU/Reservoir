#include "main_page.h"
#include "tip.h"
#include "ui_main_page.h"

main_page::main_page(QTabWidget *all_page, password *my_password,
                     QWidget *parent)
    : all_page(all_page), QWidget(parent), my_password(my_password),
      ui(new Ui::main_page) {

  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
                                         // 注意,动态创建的控件在ui中
  // connect(ui->btnAddAccount,&QPushButton::clicked,
  // this,&main_page::on_btnAddAccount_clicked);
  // connect(ui->btnManageAccount,&QPushButton::clicked,
  // this,&main_page::on_btnManageAccount_clicked);
  // connect(ui->btnDataAnalysis,&QPushButton::clicked,
  // this,&main_page::on_btnDataAnalysis_clicked);
  // connect(ui->btnUserHelp,&QPushButton::clicked,
  // this,&main_page::on_btnUserHelp_clicked);
  // connect(ui->btnSettings,&QPushButton::clicked,
  // this,&main_page::on_btnSettings_clicked);

  /*
   QT翻译器的问题
  如果用官方的写法on_btn_pressed()可以不用写connect函数，可以直接触发槽函数。如果此时用connect再次连接的话，就会导致on_btn_pressed()被执行两次。

  解决办法为：
  可能有问题的代码，会被执行两次
  connect(ui->btn,signal(pressed()),this,slot(on_btn_pressed()));
  规则强制指定
  要么改为：connect(ui->btn,signal(pressed()),this,slot(on_btn_pressed()),qt::uniqueconnection);
  修改槽函数形式
  要么改为：connect(ui->btn,signal(pressed()),this,slot(btn_pressed()));
  通过修改名字避免QT翻译器翻译成两次执行.
  */
  connect(all_page, &QTabWidget::tabCloseRequested, this,
          &main_page::on_account_tab_close_requested); // 连接关闭页面和槽函数
  WaterProcess *my_water = new WaterProcess;
  my_water->setBorderWidth(10);
  double global_left = 0; // 存下的金额
  std::vector<std::shared_ptr<Transaction>> all_account;
  all_account = IO::query_db();
  for (int i = 0; i < all_account.size(); i++) {
    global_left += all_account[i]->get_money();
  }

  my_water->setMinimumSize(QSize(400, 200));
  my_water->setMaximumSize(QSize(400, 200));
  ui->water_layout->addWidget(my_water);

  my_water->display_text = QString::number(global_left);
  ui->lcdNumber->display(my_password->target_amount);
  my_water->setValue(
      fmax((global_left / my_password->target_amount) * 100 - 10, 10));
  if (global_left > 0) {
    my_water->setUsedColor(QColor(160, 247, 255, 120));
  } else {
    my_water->setUsedColor(QColor(255, 151, 153, 120));
  }
}

main_page::~main_page() { delete ui; }
void main_page::on_btnAddAccount_clicked() {
  // 点击生成“新增账目”页面
  qDebug() << "新增账目被触发";
  QWidget *add_account = pages_creator::add_account_page(all_page);
  all_page->addTab(add_account, "新增账目");
  all_page->setCurrentWidget(add_account); // 跳转新建到的页面
}
void main_page::on_btnDataAnalysis_clicked() {
  // 点击生成“数据分析”页面
  qDebug() << "数据分析被触发";
  QWidget *data_analysis = pages_creator::data_analysis_page(all_page);
  all_page->addTab(data_analysis, "数据分析");
  all_page->setCurrentWidget(data_analysis); // 跳转新建到的页面
}
void main_page::on_btnManageAccount_clicked() {

  // 点击生成“账目管理”页面
  QWidget *manage_account = pages_creator::manage_account_page(all_page);
  all_page->addTab(manage_account, "账目管理");
  all_page->setCurrentWidget(manage_account); // 跳转新建到的页面
}
void main_page::on_btnSettings_clicked() {
  // 点击生成“设置”页面
  QWidget *setting = pages_creator::setting_page(all_page, my_password);
  all_page->addTab(setting, "设置");
  all_page->setCurrentWidget(setting); // 跳转新建到的页面
}
void main_page::on_btnUserHelp_clicked() {
  // 点击生成“用户帮助”页面
  QWidget *user_help = pages_creator::user_help_page(all_page);
  all_page->addTab(user_help, "用户帮助");
  all_page->setCurrentWidget(user_help); // 跳转新建到的页面
}
void main_page::on_account_tab_close_requested(int index) {
  QWidget *widget = all_page->widget(index);
  QString tabText = all_page->tabText(index);

  if (index != 0&&tabText!="主页面") {
    qDebug() << "页面被关闭";
    // 执行刷新主页面的逻辑
    // 删除账目管理页面
    all_page->removeTab(index);
    // 清除`水波进度条`的所有子部件
    QLayoutItem *item;
    while ((item = ui->water_layout->takeAt(0)) != nullptr) {
      delete item->widget(); // 删除子部件
      delete item;           // 删除布局项
    }
    // 刷新主页面逻辑
    double global_left = 0;
    std::vector<std::shared_ptr<Transaction>> all_account;
    all_account = IO::query_db();
    for (int i = 0; i < all_account.size(); i++) {
      global_left += all_account[i]->get_money();
    }

    // 更新water process组件
    WaterProcess *my_water = new WaterProcess;
    my_water->setBorderWidth(10);

    my_water->setMinimumSize(QSize(400, 200));
    my_water->setMaximumSize(QSize(400, 200));
    ui->water_layout->addWidget(my_water);

    my_water->display_text = QString::number(global_left);

    my_water->setValue(
        fmax((global_left / my_password->target_amount) * 100 - 10, 10));
    ui->lcdNumber->display(my_password->target_amount);
    if (global_left > 0) {
      my_water->setUsedColor(QColor(160, 247, 255, 120));
    } else {
      my_water->setUsedColor(QColor(255, 151, 153, 120));
    }

  } else {
    if (index != 0&&tabText!="主页面")
      all_page->removeTab(index);
  }
}

void main_page::on_btnTip_clicked() {
  // qDebug() << "更改浮窗";

  // 测试消息框显示

  // changepage *changeWidget = new changepage(this);
  // changeWidget->setWindowTitle("更改浮窗"); // 设置浮窗的标题
  // changeWidget->show();
  tip *ti = new tip();
  ti->setWindowTitle("小提示");
  ti->show();
}
