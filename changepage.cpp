#include "changepage.h"
#include "ui_changepage.h"
#include <QString>
changepage::changepage(QWidget *parent)
    : QWidget(parent), ui(new Ui::changepage) {
  ui->setupUi(this);
}
changepage::changepage(account_item *account_item_, QWidget *parent)
    : QWidget(parent), ui(new Ui::changepage), my_account_item(account_item_) {
  ui->setupUi(this);

  // 确认传递的account_item实例不为空
  if (!my_account_item) {
    qDebug() << "Error: account_item instance is null.";
  }
}

changepage::~changepage() { delete ui; }

void changepage::on_change_name_line_editingFinished() {
  QString name = ui->change_name_line->text();
  my_account_item->change_name(name);
}

void changepage::on_change_time_line_editingFinished() {
  QString time = ui->change_time_line->text();
    qDebug()<<time;
  if (my_account_item) {
    Time_ tim(time); // 使用栈分配而不是堆分配
      qDebug()<<tim.toString();
    my_account_item->change_time(tim);
  }
}

void changepage::on_change_kind_line_editingFinished() {
  QString kind = ui->change_kind_line->text();
  Kind *kin = new Kind();
  my_account_item->change_kind(*kin);
}

void changepage::on_change_money_line_editingFinished() {
  QString money = ui->change_money_line->text();
  if (my_account_item) {
    bool ok;
    double mone = money.toDouble(&ok);
    if (ok) {
      my_account_item->change_money(mone);
    } else {
      qDebug() << "输入的金额格式不正确";
    }
  }
}
void changepage::on_make_sure_clicked() { this->close(); }
