#ifndef TIP_H
#define TIP_H

#include <QWidget>
#include<QVector>
namespace Ui {
class tip;
}

class tip : public QWidget
{
    Q_OBJECT

public:
    static int cur;
    explicit tip(QWidget *parent = nullptr);
    ~tip();
    QVector<QString>tipss;
private:
    Ui::tip *ui;
};

#endif // TIP_H
