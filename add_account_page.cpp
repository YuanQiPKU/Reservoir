#include "add_account_page.h"
#include "ui_add_account_page.h"

add_account_page::add_account_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::add_account_page) {
  qDebug() << "新增账目页面生成";
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
  ui->textEdit->setPlaceholderText("请将文件拖动到这里");
  ui->lineEdit->setPlaceholderText("请输入金额");
}

add_account_page::~add_account_page() { delete ui; }

void add_account_page::
    on_btnYes_clicked() // 用于响应解析操作,在add_account_page类中的公有成员变量file_address中存储文件地址;
{
    file_address = ui->textEdit->toPlainText(); // 获取其中的文本
    ui->textEdit->clear();
    if(file_address.size()>8){
        ui->textEdit->setPlaceholderText("收到你的文件啦!!");
        file_address.erase(file_address.begin(),file_address.begin()+8);
        qDebug() << file_address;
        try{
            IO::read_csv(file_address);
        }
        catch (...) {
            qDebug()<<"读取csv文件失败";
        }

    }

}

void add_account_page::on_btnConfirm_clicked() {
  // 响应新建完成
  if (!is_positive) {
    account_amount *= -1;
  }
  try {
       one_account = new Transaction(account_name,account_date,account_kind,account_amount,true);
  } catch (...) {
      qDebug()<<"新建账目失败";
  }

  qDebug() << "新建账目完成";
}

void add_account_page::on_btnIn_clicked() {
  is_positive = true; // 收入为正
}

void add_account_page::on_calendarWidget_clicked(const QDate &date) {
  account_date = date; // 日期
}
void add_account_page::on_lineEdit_editingFinished() {
  account_amount = ui->lineEdit->text().toDouble(); // 金额
}

/*QDate 是 Qt 框架中的一个类，用于表示一个日期，它不包含时间信息。QDate
可以用于创建、操作和比较日期。以下是一些基本的 QDate 功能：

创建日期：可以使用 QDate 的构造函数来创建一个日期对象，例如 QDate date(2024, 5,
21); 创建了一个表示 2024 年 5 月 21 日的日期对象。

日期操作：QDate
提供了多种方法来对日期进行操作，比如增加或减少天数（addDays）、获取当前日期（currentDate）、计算两个日期之间的天数差（daysTo）等。

日期比较：QDate 支持比较操作符，可以比较两个日期是否相等，或者哪个日期在前。

格式化和解析：QDate 可以与 QString
相互转换，允许你将日期格式化为字符串，或者从字符串解析日期。

范围和验证：QDate 可以检查日期是否有效（比如不存在的日期，如 2 月 30
日），以及是否在某个范围内。

QDate 是 Qt 中处理日期的便捷方式，它提供了丰富的功能来简化日期相关的编程任务。*/

void add_account_page::on_btnOut_clicked() {
  is_positive = false; // 支出为负
}

void add_account_page::on_lineEdit_2_editingFinished() {
  account_name = ui->lineEdit_2->text(); // 账目名称
}

void add_account_page::on_consume_clicked()
{
    account_kind = consume;
}


void add_account_page::on_maintain_clicked()
{
    account_kind = maintain;
}


void add_account_page::on_social_clicked()
{
    account_kind = social;
}


void add_account_page::on_develop_clicked()
{
    account_kind = develop;
}


void add_account_page::on_other_clicked()
{
    account_kind = other;
}

