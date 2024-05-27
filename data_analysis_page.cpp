#include "data_analysis_page.h"
#include "ui_data_analysis_page.h"

data_analysis_page::data_analysis_page(QTabWidget *all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent), ui(new Ui::data_analysis_page) {
    QDateTime today = QDateTime::currentDateTime(); // 设置当前时间作为原点
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小
    try {
        all_account = IO::query_db(); // 获取所有数据
    } catch (...) {
        qDebug() << "获取所有数据失败";
    }
    if (all_account.size() > 0) {
        ui->lcdNumber->display((int)all_account.size()); // 设置显示数据数目
        qDebug() << "读取了不少于一条数据";
    }

    // 多分类日期比较
    QCustomPlot *plot_1_in = new QCustomPlot; // 创建一个QCustomPlot对象
    ui->ver1->addWidget(plot_1_in); // 将QCustomPlot对象添加到ver1布局中
    // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
    plot_1_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));

    qDebug() << "pass1";
    int gi = 0; // 用于控制颜色变化
    double min_value = std::numeric_limits<double>::max();
    double max_value = std::numeric_limits<double>::min();
    int max_time = std::numeric_limits<int>::min();
    int min_time = std::numeric_limits<int>::max();

    for (int i = 0; i < kind::kind_number(); i++) {
        Kind t_kind = kind::index_to_kind(i);
        qDebug() << kind::kind_to_string(t_kind);
        plot_1_in->addGraph();
        plot_1_in->graph()->setName(kind::kind_to_string(t_kind));
        QColor color_t(20 + 200 / 4.0 * gi, 70 * (1.6 - gi / 4.0), 150, 150);
        plot_1_in->graph()->setLineStyle(QCPGraph::lsLine);
        // 创建一个颜色较亮的 QPen 对象，并设置线条宽度
        QPen pen1(color_t.lighter(200));
        pen1.setWidth(2); // 设置线条宽度为2（根据需要调整宽度）
        plot_1_in->graph()->setPen(pen1);
        // plot_1_in->graph()->setBrush(QBrush(color_t)); // 注释掉这行,该行决定是否为面积图
        try {
            kind_account[t_kind] = IO::qurey_db(kind::index_to_kind(i));
        } catch (...) {
            qDebug() << "按分类读取数据失败";
        }
        int t_size = kind_account[kind::index_to_kind(i)].size();
        if (t_size > 0) {
            qDebug() << "按分类读取了不少于一条数据";
        }

        QVector<QCPGraphData> kind_data(t_size);
        for (int j = 0; j < t_size; j++) {
            try {
                QDateTime qdatetime = kind_account[t_kind][j]->get_time().mytime_to_qdatetime();
                kind_data[j].key = qdatetime.toSecsSinceEpoch();
                min_time = fmin(min_time, kind_data[j].key);
                max_time = fmax(max_time, kind_data[j].key);

            } catch (...) {
                qDebug() << "设置时间失败";
            }
            kind_data[j].value = kind_account[t_kind][j]->get_money();
            min_value = fmin(min_value, (int)kind_data[j].value);
            max_value = fmax(max_value, (int)kind_data[j].value);
        }
        try {
            plot_1_in->graph()->data()->set(kind_data);
            qDebug() << "绘图成功1";
        } catch (...) {
            qDebug() << "绘图失败1";
        }

        gi += 1;
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
    // 设置x轴的第二条轴线不显示刻度标签
    plot_1_in->xAxis2->setTickLabels(false);
    // 设置y轴的第二条轴线显示刻度标签
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
    plot_1_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom |
                               QCP::iSelectPlottables); // 设置交互方式

    int in_size = 0,out_size = 0;
    for(int i = 0;i<all_account.size();i++){
        if(all_account[i]->get_money()>0){
            ++in_size;
        }else{
            ++out_size;
        }
    }
    // 收支日期比较
    QCustomPlot *plot_2_in = new QCustomPlot; // 创建一个QCustomPlot对象
    ui->ver2->addWidget(plot_2_in); // 将QCustomPlot对象添加到ver2布局中
    // 设置图表的区域设置为中文（中国），这样日期和时间的显示会使用中文。
    plot_2_in->setLocale(QLocale(QLocale::Chinese, QLocale::China));
    double global_left = 0; // 存下的金额
    int ri = 0;             // 用于控制颜色变化
    min_value = std::numeric_limits<double>::max();
    max_value = std::numeric_limits<double>::min();
    max_time = std::numeric_limits<int>::min();
    min_time = std::numeric_limits<int>::max();

    // 支出数据图
    plot_2_in->addGraph();
    plot_2_in->graph()->setName("支出");
    QColor color1(20 + 200 / 4.0 * ri, 70 * (1.6 - ri / 4.0), 150, 150);
    plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
    QPen pen1(color1.lighter(200));
    pen1.setWidth(2); // 设置线条宽度为2（根据需要调整宽度）
    plot_2_in->graph()->setPen(pen1);

    QVector<QCPGraphData> time_data_out(out_size);
    int qi = 0;
    for (int i = 0; i < all_account.size(); ++i) {
        try {
            if (all_account[i]->get_money() < 0) {
                QDateTime qdatetime = all_account[i]->get_time().mytime_to_qdatetime();
                time_data_out[qi].key = qdatetime.toSecsSinceEpoch(); // 转化成unix时间
                time_data_out[qi].value = all_account[i]->get_money();
                global_left += time_data_out[qi].value;
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
    plot_2_in->graph()->data()->set(time_data_out); // 将生成的数据设置到当前数据图中
    ri++;
    // 收入数据图
    plot_2_in->addGraph();
    plot_2_in->graph()->setName("收入");
    QColor color2(20 + 200 / 4.0 * ri, 70 * (1.6 - ri / 4.0), 150, 150);
    plot_2_in->graph()->setLineStyle(QCPGraph::lsLine);
    QPen pen2(color2.lighter(200));
    pen2.setWidth(2); // 设置线条宽度为2（根据需要调整宽度）
    plot_2_in->graph()->setPen(pen2);

    QVector<QCPGraphData> time_data_in(in_size);
    int pi = 0;
    for (int i = 0; i < all_account.size(); ++i) {
        if (all_account[i]->get_money() > 0) {
            QDateTime qdatetime = all_account[i]->get_time().mytime_to_qdatetime();
            time_data_in[pi].key = qdatetime.toSecsSinceEpoch(); // 转化成unix时间
            time_data_in[pi].value = all_account[i]->get_money();
            global_left += time_data_in[i].value;
            min_time = fmin(min_time, time_data_in[pi].key);
            max_time = fmax(max_time, time_data_in[pi].key);
            min_value = fmin(min_value, (int)time_data_in[pi].value);
            max_value = fmax(max_value, (int)time_data_in[pi].value);
            ++pi;
        }
    }
    plot_2_in->graph()->data()->set(time_data_in);
    ri++;

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
    plot_2_in->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom |
                               QCP::iSelectPlottables); // 设置交互方式
}

data_analysis_page::~data_analysis_page() { delete ui; }
