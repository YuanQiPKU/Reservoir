#include "tip.h"
#include "ui_tip.h"

tip::tip(QWidget *parent) : QWidget(parent), ui(new Ui::tip) {
  ui->setupUi(this);
  tipss.append("多赚钱，奥利给");
  tipss.append("少花多蓄，奥利给");
  tipss.append("不要冲动消费");
  tipss.append("建立应急基金");
  tipss.append("制定预算");
  tipss.append("定期评估财务");
  tipss.append("节约开支");
  tipss.append("尽早开始养成储蓄习惯");
  tipss.append("规划未来目标");
  ui->label->setText(tipss[cur]);
  cur = (cur + 1) % 9;
}
int tip::cur = 0;
tip::~tip() { delete ui; }
