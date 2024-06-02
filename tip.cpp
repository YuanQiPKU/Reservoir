#include "tip.h"
#include "ui_tip.h"

tip::tip(QWidget *parent) : QWidget(parent), ui(new Ui::tip) {
    ui->setupUi(this);
    tipss.append("你要学会存钱，起码保证你三个月没收入的时候，依然可以体面的活下去。");
    tipss.append("多攒一分，我买厕所的希望也大了不少。");
    tipss.append("在消费之前请三思");
    tipss.append("开源节流，积少成多");
    ui->label->setText(tipss[cur]);
    cur = (cur + 1) % 4;
}
int tip::cur = 0;
tip::~tip() { delete ui; }
