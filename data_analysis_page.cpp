#include "data_analysis_page.h"
#include "ui_data_analysis_page.h"
data_analysis_page::data_analysis_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::data_analysis_page) {
  ui->setupUi(this);
  this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
  this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

  // 折线图
  QCustomPlot *plot_1_in = new QCustomPlot; // 创建一个QCustomPlot对象
  ui->ver1->addWidget(plot_1_in); // 将QCustomPlot对象添加到ver1布局中
  // 根据分类生成不同的图
  plot_1_in->addGraph();          // 添加一个图
  plot_1_in->graph()->setName("kind1");

  plot_1_in->graph(0)->setPen(QPen(Qt::blue)); // 设置图0的线条颜色为蓝色

  plot_1_in->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // 设置图0的填充颜色为半透明的蓝色

  plot_1_in->addGraph(); // 添加一个图
  plot_1_in->graph(1)->setPen(QPen(Qt::red)); // 设置图1的线条颜色为红色

  // 生成需要绘出的数据和赋值

  QVector<double> x(251), y0(251), y1(251); // 创建一个包含251个元素的向量
  for (int i = 0; i < 251; ++i)             // 遍历向量
  {
    x[i] = i; // x坐标为i
    y0[i] = qExp(-i / 150.0) * qCos(i / 10.0); // y0坐标为qExp(-i/150.0)*qCos(i/10.0)

    y1[i] = qExp(-i / 150.0); // y1坐标为qExp(-i/150.0)
  }

  plot_1_in->xAxis2->setVisible(true);     // 设置x轴2可见
  plot_1_in->xAxis2->setTickLabels(false); // 设置x轴2的刻度标签不可见
  plot_1_in->yAxis2->setVisible(true);     // 设置y轴2可见
  plot_1_in->yAxis2->setTickLabels(true); // 设置y轴2的刻度标签可见

  connect(plot_1_in->xAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->xAxis2,
          SLOT(setRange(QCPRange))); // 连接x轴和x轴2的范围变化信号
  connect(plot_1_in->yAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->yAxis2,
          SLOT(setRange(QCPRange))); // 连接y轴和y轴2的范围变化信号


  // 设置数据
  plot_1_in->graph(0)->setData(x, y0); // 设置图0的数据
  plot_1_in->graph(1)->setData(x, y1); // 设置图1的数据

  plot_1_in->graph(0)->rescaleAxes(); // 调整图0的坐标轴
  plot_1_in->graph(1)->rescaleAxes(true); // 调整图1的坐标轴
  plot_1_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables); // 设置交互方式

  // 收支日期比较
  QCustomPlot *plot_2_in = new QCustomPlot; // 创建一个QCustomPlot对象
  ui->ver2->addWidget(plot_2_in); // 将QCustomPlot对象添加到ver2布局中
  // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
  plot_2_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));


  srand(8); // set the random seed, so we always get the same random data

    int gi = 0; // 用于控制颜色变化
   // 支出数据图
      plot_2_in->addGraph();
    plot_2_in->graph()->setName("支出");
      QColor color1(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_2_in->graph()->setPen(QPen(color1.lighter(200)));
      plot_2_in->graph()->setBrush(QBrush(color1));

      QVector<QCPGraphData> time_data_out(250);

      for (int i=0; i<250; ++i)
      {
          time_data_out[i].key = 10000 + 24*3600*i;
          if (i == 0)
              time_data_out[i].value = (i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
          else
              time_data_out[i].value = qFabs(time_data_out[i-1].value)*(1+0.02/4.0*(4-gi)) + (i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
      }
      plot_2_in->graph()->data()->set(time_data_out); // 将生成的数据设置到当前数据图中




      gi++;
      // 收入数据图
      plot_2_in->addGraph();
      plot_2_in->graph()->setName("收入");
      QColor color2(20+200/4.0*gi,70*(1.6-gi/4.0), 150, 150);
      plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
      plot_2_in->graph()->setPen(QPen(color2.lighter(200)));
      plot_2_in->graph()->setBrush(QBrush(color2));

      QVector<QCPGraphData> time_data_in(250);

      for (int i=0; i<250; ++i)
      {
          time_data_in[i].key = 10000 + 24*3600*i;
          if (i == 0)
              time_data_in[i].value = -1*(i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
          else
              time_data_in[i].value = -1*qFabs(time_data_in[i-1].value)*(1+0.02/4.0*(4-gi)) + (i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
      }
      plot_2_in->graph()->data()->set(time_data_in);

      gi++;

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
