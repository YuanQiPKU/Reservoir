#ifndef DATA_PROCESSING_THREAD_H
#define DATA_PROCESSING_THREAD_H

#include <QThread>
#include <QTabWidget>

class DataProcessingThread : public QThread {
    Q_OBJECT
public:
    explicit DataProcessingThread(QTabWidget *all_page, QObject *parent = nullptr);
protected:
    void run() override;
signals:
    void dataProcessingCompleted(QWidget *data_analysis_page);

private:
    QTabWidget *all_page;
};

#endif // DATA_PROCESSING_THREAD_H
