#include "account_item.h"
#include "changepage.h" // 确保包含changepage头文件
#include "io.h"
#include "remove_make_sure.h"
#include "transaction.h"
#include "ui_account_item.h"
#include <QDebug>
#include <QMessageBox> // 添加消息框支持
#include <QWidget>
#include"kind.h"
account_item::account_item(Transaction *account_item_message, QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item),
      account_item_message(account_item_message) {
  ui->setupUi(this);
  account_name = account_item_message->get_name();
  account_time = account_item_message->get_time();
  account_kind = account_item_message->get_kind();
  account_money = account_item_message->get_money();

  // 设置标签的文本
  ui->labelName->setText(account_name);
  ui->labelTime->setText(account_time.toString()); // Time_类型有toString方法
  ui->labelKind->setText(QString::number(
      static_cast<int>(account_kind))); // 假设Kind是一个枚举，可以转换为整型
  ui->labelMoney->setText(QString::number(account_money));

  // 连接按钮点击信号与槽函数
}
account_item::account_item(std::shared_ptr<Transaction> account_item_message,
                           QWidget *parent)
    : QWidget(parent), ui(new Ui::account_item),
      account_item_message(account_item_message) {
  ui->setupUi(this);
  account_name = account_item_message->get_name();
  account_time = account_item_message->get_time();
  account_kind = account_item_message->get_kind();
  account_money = account_item_message->get_money();

  // 设置标签的文本
  ui->labelName->setText(account_name);
  ui->labelTime->setText(account_time.toString()); // Time_类型有toString方法
  ui->labelKind->setText(kind::kind_to_string(account_kind)); // 假设Kind是一个枚举，可以转换为整型
  ui->labelMoney->setText(QString::number(account_money));

  // 连接按钮点击信号与槽函数
}
account_item::~account_item() { delete ui; }

void account_item::change_time(Time_ t) {
  Transaction *new_account_item_message =
      new Transaction(account_name, t, account_kind, account_money);
  account_time = t;
  ui->labelTime->setText(account_time.toString()); // 更新标签文本
  IO::update_db(this->account_item_message.get(), new_account_item_message);
}

void account_item::change_name(QString name) {
  Transaction *new_account_item_message =
      new Transaction(name, account_time, account_kind, account_money);
  account_name = name;
  ui->labelName->setText(account_name); // 更新标签文本
  IO::update_db(this->account_item_message.get(), new_account_item_message);
}

void account_item::change_money(double money) {
  Transaction *new_account_item_message =
      new Transaction(account_name, account_time, account_kind, money);
  account_money = money;
  ui->labelMoney->setText(QString::number(account_money)); // 更新标签文本
  IO::update_db(this->account_item_message.get(), new_account_item_message);
}

void account_item::change_kind(Kind kind) {
  Transaction *new_account_item_message =
      new Transaction(account_name, account_time, kind, account_money);
  account_kind = kind;
  ui->labelKind->setText(
      QString::number(static_cast<int>(account_kind))); // 更新标签文本
  IO::update_db(this->account_item_message.get(), new_account_item_message);
}

void account_item::on_btnChange_clicked() {
  qDebug() << "更改浮窗";

  // 测试消息框显示

  changepage *changeWidget = new changepage(this);
  changeWidget->setWindowTitle("更改浮窗"); // 设置浮窗的标题
  changeWidget->show();                     // 显示浮窗
}
void account_item::make_sure(bool make) { make_sure_or = make; }
void account_item::on_btnRemove_clicked() {
  qDebug() << "删除确认浮窗";
  remove_make_sure *remove_make_sure_widget = new remove_make_sure();
  remove_make_sure_widget->setWindowTitle("是否确认");

  // 使用局部连接避免信号槽失效
  connect(remove_make_sure_widget, &remove_make_sure::make_sure_or, this,
          [this](bool make_sure) {
            if (make_sure) {
              emit removeRequested(this);
              IO::delete_db(this->account_item_message.get());
            }
          });

  remove_make_sure_widget->show();
}
