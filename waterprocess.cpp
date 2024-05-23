#include "waterprocess.h"
#include <QDebug>

WaterProcess::WaterProcess(QWidget *parent) : QWidget(parent) {
  m_minValue = 0;
  m_maxValue = 100;
  m_value = 66;

  m_borderWidth = 10.0;
  m_waterHeight = 0.05;
  m_offset = 0.6;

  m_bgColor = QColor(211, 211, 211, 30);
  m_borderColor = QColor(80, 80, 80,75);
  m_usedColor = QColor(235, 106, 106,50);
  m_textColor = QColor(255, 255, 255,50);

  // 波浪
  m_timer = new QTimer(this);
  m_timer->setInterval(100);

  connect(m_timer, SIGNAL(timeout()), this, SLOT(update()));

  m_timer->start();
}

void WaterProcess::setUsedColor(const QColor color) { m_usedColor = color; }

void WaterProcess::paintEvent(QPaintEvent *ev) {
  Q_UNUSED(ev)

  QPainter painter(this);
  painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

  // 背景
  drawBg(&painter);

  // 进度、水波
  drawProcess(&painter);

  // 进度数字
  drawValue(&painter);
}

void WaterProcess::drawBg(QPainter *painter) {
  int width = this->width();
  int height = this->height();
  int side = qMin(width, height) - m_borderWidth;

  int startX = 0;
  int startY = 0;

  painter->save();
  painter->setBrush(QBrush(m_bgColor));
  if (m_borderWidth == 0) {
    painter->setPen(Qt::NoPen);
  } else {
    QBrush brush(m_borderColor);
    painter->setPen(QPen(brush, m_borderWidth, Qt::SolidLine));
  }
    painter->drawRect(startX, startY, width, height);
  painter->restore();
}

void WaterProcess::drawProcess(QPainter *painter) {
  int width = this->width();
  int height = this->height();

  int startX = 0;
  int startY = 0;
  int endX = width ;
  int endY = height ;

  double percent = (m_value * 1.0) / (m_maxValue - m_minValue);

  double w = 2 * M_PI / endX;
  double A = endY * m_waterHeight;
  double k = endY * (1.0 - percent);

  painter->save();
  painter->setPen(Qt::NoPen);
  painter->setBrush(m_usedColor);

  QPainterPath totalPath; // 修改为方形路径
  totalPath.addRect(startX, startY, width, height);

  // 水波路径
  QPainterPath water1;
  QPainterPath water2;

  water1.moveTo(startX, endY);
  water2.moveTo(startX, endY);

  m_offset += 0.6;
  if (m_offset > (endX / 2)) {
    m_offset = 0;
  }

  for (int i = startX; i < endX; i++) {
    // 第一条波浪Y轴
    double waterY1 = (double)(A * qSin(w * i + m_offset)) + k;
    // 第二条波浪Y轴
    double waterY2;
    waterY2 = (double)(A * qSin(w * i + m_offset + (endX / 2 * w))) + k;

    water1.lineTo(i, waterY1);
    water2.lineTo(i, waterY2);

    if (m_value == m_minValue) {
      waterY1 = endY;
    }

    if (m_value == m_maxValue) {
      waterY1 = startY;
    }
  }
  // 封闭
  water1.lineTo(endX, endY);
  water2.lineTo(endX, endY);

  QPainterPath path;
  QColor waterColor1 = m_usedColor;
  waterColor1.setAlpha(100);
  QColor waterColor2 = m_usedColor;
  waterColor2.setAlpha(200);

  // 第一条波浪
  path = totalPath.intersected(water1);
  painter->setBrush(waterColor1);
  painter->drawPath(path);

  // 第二条波浪挖去后的路径
  path = totalPath.intersected(water2);
  painter->setBrush(waterColor2);
  painter->drawPath(path);

  painter->restore();
}

void WaterProcess::drawValue(QPainter *painter) {
  // 保存画布
  painter->save();
  // 获取控件宽度和高度
  int width = this->width();
  int height = this->height();
  // 计算边长
  int side = qMin(width, height) - m_borderWidth;

  // 计算起点坐标
  int startX = (width - side) * 0.5;
  int startY = (height - side) * 0.5;

  // 计算字体大小
  int fontSize = side / 10;

  // 设置字体
  QFont font;
  font.setFamily("微软雅黑");
  font.setPixelSize(fontSize);
  font.setBold(true);

  // 设置画笔
  painter->setFont(font);
  painter->setPen(Qt::white);
  // 绘制文本
  painter->drawText(QRectF(startX, startY, side, side), Qt::AlignCenter,
                    "测试专用");

  // 恢复画布
  painter->restore();
}

void WaterProcess::setMinValue(int value) {
  m_minValue = value;
  update();
}

void WaterProcess::setMaxValue(int value) {
  m_maxValue = value;
  update();
}

void WaterProcess::setValue(int v) {
  m_value = v;
  update();
}

void WaterProcess::setBorderWidth(int width) {
  m_borderWidth = width;
  update();
}

void WaterProcess::setWaterHeight(int height) {
  m_waterHeight = height;
  update();
}

void WaterProcess::start() {
  if (m_timer) {
    m_timer->start();
  }
}

void WaterProcess::stop() {
  if (m_timer) {
    m_timer->stop();
  }
}
