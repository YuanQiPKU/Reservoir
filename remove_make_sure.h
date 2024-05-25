#ifndef REMOVE_MAKE_SURE_H
#define REMOVE_MAKE_SURE_H

#include <QWidget>

namespace Ui {
class remove_make_sure;
}

class remove_make_sure : public QWidget {
  Q_OBJECT

public:
  explicit remove_make_sure(QWidget *parent = nullptr);
  ~remove_make_sure();
signals:
  void make_sure_or(bool);
private slots:
  void on_cancel_clicked();

  void on_make_sure_clicked();

private:
  Ui::remove_make_sure *ui;
};

#endif // REMOVE_MAKE_SURE_H
