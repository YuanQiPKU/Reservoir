#include "data_analysis_page.h"
#include "kind.h"
#include "ui_data_analysis_page.h"
data_analysis_page::data_analysis_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::data_analysis_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

  all_account = IO::query_db(); // 获取所有数据

  // 多分类日期比较
  QCustomPlot *plot_1_in = new QCustomPlot; // 创建一个QCustomPlot对象
  ui->ver2->addWidget(plot_1_in); // 将QCustomPlot对象添加到ver2布局中
  // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
  plot_1_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));

  int gi = 0; // 用于控制颜色变化
  for(int i = 0;i<kind::kind_number();i++){
      Kind t_kind = kind::index_to_kind(i);
      plot_1_in->addGraph();
      plot_1_in->graph()->setName(kind::kind_to_string(t_kind));
      QColor color_t(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_1_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_1_in->graph()->setPen(QPen(color_t.lighter(200)));
      plot_1_in->graph()->setBrush(QBrush(color_t));
      kind_account[t_kind] = IO::qurey_db(kind::index_to_kind(i));
      int t_size = kind_account[kind::index_to_kind(i)].size();
      QVector<QCPGraphData> kind_data(t_size);
      for(int j = 0;j<t_size;j++){
          kind_data[j].key = kind_account[t_kind][j]->get_time().c_to_second();
          kind_data[j].value = kind_account[t_kind][j]->get_money();
      }
      plot_1_in->graph()->data()->set(kind_data);
      gi+=10;

  }
  // 创建一个日期时间刻度生成器
  QSharedPointer<QCPAxisTickerDateTime> dateTicker1(new QCPAxisTickerDateTime);
  dateTicker1->setDateTimeFormat("d. MMMM\nyyyy");
  // 将日期时间刻度生成器设置到x轴
  plot_1_in->xAxis->setTicker(dateTicker1);
  // 设置x,y轴刻度标签的字体大小为8
  plot_1_in->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
  plot_1_in->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
  // 设置x轴的标签为"时间":
  plot_1_in->xAxis->setLabel("时间");
  // 设置y轴的标签为"金额"
  plot_1_in->yAxis->setLabel("金额");
  // 设置x轴的第二条轴线为可见:
  plot_1_in->xAxis2->setVisible(true);
  // 设置y轴的第二条轴线为可见
  plot_1_in->yAxis2->setVisible(true);
  // 设置x轴的第二条轴线不显示刻度
  plot_1_in->xAxis2->setTicks(false);
  // 设置x轴的第二条轴线显示刻度
  plot_1_in->yAxis2->setTicks(true);
  // 设置x轴的第二条轴线不显示刻度标签
  plot_1_in->xAxis2->setTickLabels(false);
  // 设置y轴的第二条轴线显示刻度标签
  plot_1_in->yAxis2->setTickLabels(true);
  // 设置x轴的显示范围，从当前时间到大约一年后
  plot_1_in->xAxis->setRange(10000, 10000+24*3600*249);
  // 设置y轴的显示范围，从-100到60
  plot_1_in->yAxis->setRange(-100, 100);
  // 设置图例为可见
  plot_1_in->legend->setVisible(true);
  // 设置图例的背景颜色为半透明的白色
  plot_1_in->legend->setBrush(QColor(255, 255, 255, 150));
  connect(plot_1_in->xAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->xAxis2,
          SLOT(setRange(QCPRange))); // 连接x轴和x轴2的范围变化信号
  connect(plot_1_in->yAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->yAxis2,
          SLOT(setRange(QCPRange))); // 连接y轴和y轴2的范围变化信号
  plot_1_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables); // 设置交互方式

  // 收支日期比较
  QCustomPlot *plot_2_in = new QCustomPlot; // 创建一个QCustomPlot对象
  ui->ver2->addWidget(plot_2_in); // 将QCustomPlot对象添加到ver2布局中
  // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
  plot_2_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));

    gi = 0; // 用于控制颜色变化
   // 支出数据图
      plot_2_in->addGraph();
      plot_2_in->graph()->setName("支出");
      QColor color1(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_2_in->graph()->setPen(QPen(color1.lighter(200)));
      plot_2_in->graph()->setBrush(QBrush(color1));

      QVector<QCPGraphData> time_data_out(all_account.size());

      for (int i=0; i<all_account.size(); ++i)
      {
          if(all_account[i]->get_money()<0){
              time_data_out[i].key = all_account[i]->get_time().c_to_second(); // 转化成unix时间
              time_data_out[i].value = all_account[i]->get_money();
          }
      }
      plot_2_in->graph()->data()->set(time_data_out); // 将生成的数据设置到当前数据图中
      gi+=10;
      // 收入数据图
      plot_2_in->addGraph();
      plot_2_in->graph()->setName("收入");
      QColor color2(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_2_in->graph()->setPen(QPen(color2.lighter(200)));
      plot_2_in->graph()->setBrush(QBrush(color2));

      QVector<QCPGraphData> time_data_in(250);

      for (int i=0; i<all_account.size(); ++i)
      {
          if(all_account[i]->get_money()>0){
              time_data_in[i].key = all_account[i]->get_time().c_to_second(); // 转化成unix时间
              time_data_in[i].value = all_account[i]->get_money();
          }
      }
      plot_2_in->graph()->data()->set(time_data_in);

      gi+=10;

      // 储蓄数据图
      plot_2_in->addGraph();
      plot_2_in->graph()->setName("储蓄");
      QColor color3(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_2_in->graph()->setPen(QPen(color3.lighter(200)));
      plot_2_in->graph()->setBrush(QBrush(color3));

      QVector<QCPGraphData> time_data_save(250);
      double global_left = 0; // 存下的金额
      for (int i=0; i<250; ++i)
      {
          time_data_save[i].key = 10000 + 24*3600*i;
          time_data_save[i].value = time_data_in[i].value+time_data_out[i].value+global_left;
          global_left = time_data_save[i].value;

      }
      plot_2_in->graph()->data()->set(time_data_save);

  // 创建一个日期时间刻度生成器
  QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
  dateTicker->setDateTimeFormat("d. MMMM\nyyyy");
  // 将日期时间刻度生成器设置到x轴
  plot_2_in->xAxis->setTicker(dateTicker);
  // 设置x,y轴刻度标签的字体大小为8
  plot_2_in->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
  plot_2_in->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
  // 设置x轴的标签为"时间":
  plot_2_in->xAxis->setLabel("时间");
  // 设置y轴的标签为"金额"
  plot_2_in->yAxis->setLabel("金额");
  // 设置x轴的第二条轴线为可见:
  plot_2_in->xAxis2->setVisible(true);
  // 设置y轴的第二条轴线为可见
  plot_2_in->yAxis2->setVisible(true);
  // 设置x轴的第二条轴线不显示刻度
  plot_2_in->xAxis2->setTicks(false);
  // 设置x轴的第二条轴线显示刻度
  plot_2_in->yAxis2->setTicks(true);
  // 设置x轴的第二条轴线不显示刻度标签
  plot_2_in->xAxis2->setTickLabels(false);
  // 设置y轴的第二条轴线显示刻度标签
  plot_2_in->yAxis2->setTickLabels(true);
  // 设置x轴的显示范围，从当前时间到大约一年后
  plot_2_in->xAxis->setRange(10000, 10000+24*3600*249);
  // 设置y轴的显示范围，从-100到60
  plot_2_in->yAxis->setRange(-100, 100);
  // 设置图例为可见
  plot_2_in->legend->setVisible(true);
  // 设置图例的背景颜色为半透明的白色
  plot_2_in->legend->setBrush(QColor(255, 255, 255, 150));
  connect(plot_2_in->xAxis, SIGNAL(rangeChanged(QCPRange)), plot_2_in->xAxis2,
          SLOT(setRange(QCPRange))); // 连接x轴和x轴2的范围变化信号
  connect(plot_2_in->yAxis, SIGNAL(rangeChanged(QCPRange)), plot_2_in->yAxis2,
          SLOT(setRange(QCPRange))); // 连接y轴和y轴2的范围变化信号
  plot_2_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables); // 设置交互方式

}

data_analysis_page::~data_analysis_page() { delete ui; }


/*
QCPGraphData类包含以下属性：
key：数据点的键，可以是时间戳、序列编号等，用于在图表的X轴上定位数据点。
value：数据点的值，用于在图表的Y轴上定位数据点。
此外，QCPGraphData类还提供了一些用于数据点操作的函数，例如：

构造函数：创建一个新的数据点。
赋值运算符：允许将一个QCPGraphData对象的值赋给另一个。
比较运算符：允许比较两个QCPGraphData对象的键或值。
*/
