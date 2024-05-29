#include "data_analysis_page.h"
#include "ui_data_analysis_page.h"

data_analysis_page::data_analysis_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::data_analysis_page) {
    QDateTime today = QDateTime::currentDateTime(); // 设置当前时间作为原点
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

    // 获取并对数据分类计数
    try {
        all_account = IO::query_db();
    } catch (...) {
        qDebug() << "获取所有数据失败";
    }
    if (all_account.size() > 0) {
        ui->lcdNumber->display((int)all_account.size()); // 设置显示数据数目
        qDebug() << "读取了不少于一条数据";
    }
    int in_size = 0,out_size = 0;
    for(int i = 0;i<all_account.size();i++){
        if(all_account[i]->get_money()>0){
            ++in_size;
        }else{
            ++out_size;
        }
    }

    // 收入数据图,调用第三方库QCustomPlot
plot_1_in = new QCustomPlot;
    ui->ver1->addWidget(plot_1_in);
    plot_1_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));
    // 记录数据范围,用于初始化图表
    double min_value = std::numeric_limits<double>::max();
    double max_value = std::numeric_limits<double>::min();
    int max_time = std::numeric_limits<int>::min();
    int min_time = std::numeric_limits<int>::max();
    plot_1_in->addGraph();
    plot_1_in->graph()->setName("收入");
    QColor color1(55, 213, 20);
    plot_1_in->graph()->setLineStyle(QCPGraph::lsLine);
    QPen pen1(color1);
    pen1.setWidth(1);
    plot_1_in->graph()->setPen(pen1);
    QCPScatterStyle scatterStyle1(QCPScatterStyle::ssCircle, QPen(Qt::black), QBrush(Qt::white), 6);
    plot_1_in->graph()->setScatterStyle(scatterStyle1);

    QVector<QCPGraphData> time_data_in(in_size);
    int pi = 0;
    for (int i = 0; i < all_account.size(); ++i) {
        if (all_account[i]->get_money() > 0) {
            QDateTime qdatetime = all_account[i]->get_time().mytime_to_qdatetime();
            time_data_in[pi].key = qdatetime.toSecsSinceEpoch(); // 转化成unix时间
            time_data_in[pi].value = all_account[i]->get_money();
            min_time = fmin(min_time, time_data_in[pi].key);
            max_time = fmax(max_time, time_data_in[pi].key);
            min_value = fmin(min_value, (int)time_data_in[pi].value);
            max_value = fmax(max_value, (int)time_data_in[pi].value);
            ++pi;
        }
    }
    plot_1_in->graph()->data()->set(time_data_in);
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
    // 设置x轴的第二条轴线不显示刻度标签
    plot_1_in->xAxis2->setTickLabels(false);
    // 设置y轴的第二条轴线显示刻度标签
    plot_1_in->yAxis2->setTickLabels(true);
    plot_1_in->xAxis->setRange(min_time - 60 * 3600 * 12, max_time + 60 * 3600 * 12);
    plot_1_in->yAxis->setRange(min_value-100, max_value+100);
    // 设置图例为可见
    plot_1_in->legend->setVisible(true);
    // 设置图例的背景颜色为半透明的白色
    plot_1_in->legend->setBrush(QColor(255, 255, 255, 150));
    connect(plot_1_in->xAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->xAxis2,
            SLOT(setRange(QCPRange))); // 连接x轴和x轴2的范围变化信号
    connect(plot_1_in->yAxis, SIGNAL(rangeChanged(QCPRange)), plot_1_in->yAxis2,
            SLOT(setRange(QCPRange))); // 连接y轴和y轴2的范围变化信号
    plot_1_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom); // 设置交互方式



    // 支出数据图
    QCustomPlot *plot_2_in = new QCustomPlot; // 创建一个QCustomPlot对象
    ui->ver2->addWidget(plot_2_in); // 将QCustomPlot对象添加到ver2布局中
    // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
    plot_2_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));

    min_value = std::numeric_limits<double>::max();
    max_value = std::numeric_limits<double>::min();
    max_time = std::numeric_limits<int>::min();
    min_time = std::numeric_limits<int>::max();
    plot_2_in->addGraph();
    plot_2_in->graph()->setName("支出");
    QColor color2(255, 112, 17);
    plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
    QPen pen2(color2);
    pen2.setWidth(1); // 设置线条宽度为1
    plot_2_in->graph()->setPen(pen2);
    QCPScatterStyle scatterStyle2(QCPScatterStyle::ssCircle, QPen(Qt::black), QBrush(Qt::white), 6);
    plot_2_in->graph()->setScatterStyle(scatterStyle2);

    QVector<QCPGraphData> time_data_out(out_size);
    int qi = 0;
    for (int i = 0; i < all_account.size(); ++i) {
        try {
            if (all_account[i]->get_money() < 0) {
                QDateTime qdatetime = all_account[i]->get_time().mytime_to_qdatetime();
                time_data_out[qi].key = qdatetime.toSecsSinceEpoch(); // 转化成unix时间
                time_data_out[qi].value = -all_account[i]->get_money();
                min_time = fmin(min_time, time_data_out[qi].key);
                max_time = fmax(max_time, time_data_out[qi].key);
                min_value = fmin(min_value, (int)time_data_out[qi].value);
                max_value = fmax(max_value, (int)time_data_out[qi].value);
                ++qi;
            }
        } catch (...) {
            qDebug() << "添加到待显示数据 in fail";
        }
    }
    plot_2_in->graph()->data()->set(time_data_out);
    // 创建一个日期时间刻度生成器
    QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
    dateTicker->setDateTimeFormat("d. MMMM\nyyyy");
    // 将日期时间刻度生成器设置到x轴
    plot_2_in->xAxis->setTicker(dateTicker);
    // 设置x,y轴刻度标签的字体大小为8
    plot_2_in->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
    plot_2_in->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
    // 设置x轴的标签为"时间":
    plot_1_in->xAxis->setLabel("时间");
    // 设置y轴的标签为"金额"
    plot_2_in->yAxis->setLabel("金额");
    // 设置x轴的第二条轴线为可见:
    plot_2_in->xAxis2->setVisible(true);
    // 设置y轴的第二条轴线为可见
    plot_2_in->yAxis2->setVisible(true);
    // 设置x轴的第二条轴线不显示刻度标签
    plot_2_in->xAxis2->setTickLabels(false);
    // 设置y轴的第二条轴线显示刻度标签
    plot_2_in->yAxis2->setTickLabels(true);
    plot_2_in->xAxis->setRange(min_time - 60 * 3600 * 12, max_time + 60 * 3600 * 12);
    plot_2_in->yAxis->setRange(min_value-100, max_value+100);
    // 设置图例为可见
    plot_2_in->legend->setVisible(true);
    // 设置图例的背景颜色为半透明的白色
    plot_2_in->legend->setBrush(QColor(255, 255, 255, 150));
    connect(plot_2_in->xAxis, SIGNAL(rangeChanged(QCPRange)), plot_2_in->xAxis2,
            SLOT(setRange(QCPRange))); // 连接x轴和x轴2的范围变化信号
    connect(plot_2_in->yAxis, SIGNAL(rangeChanged(QCPRange)), plot_2_in->yAxis2,
            SLOT(setRange(QCPRange))); // 连接y轴和y轴2的范围变化信号
    plot_2_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom ); // 设置交互方式

}

data_analysis_page::~data_analysis_page() { delete ui; }
