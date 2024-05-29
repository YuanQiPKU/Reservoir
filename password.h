#ifndef PASSWORD_H
#define PASSWORD_H
#pragma once
#include <QByteArray>
#include <QDebug>
#include <QFile>
#include <QString>

// 密码应当在程序运行之初于文件中读取

// 更新了password的逻辑
// password用于存放密码和储蓄目标,这意味着密码对象一开始就有,并且持续的存放在内存中留待读取
class password {
private:
  QString _password;
  int _password_size;

public:
  double target_amount = 10000;
  static int password_count;
  password(QString set_password, double target) {
    ++password_count;
    _password = set_password;
    target_amount = target;
    _password_size = _password.size();
  }
  bool password_validation(QString attempt_password) {
    if (_password == attempt_password) {
      return true;
    }
    return false;
  }
  void target_amount_change(double a) {

    target_amount = a;
    try {
      this->password_save();
    } catch (...) {
      qDebug() << "密码保存失败";
    }

    qDebug() << "目标金额修改成功";
  }
  void password_change(QString a) {
    _password = a;
    try {
      this->password_save();
    } catch (...) {
      qDebug() << "密码保存失败";
    }
    qDebug() << "密码修改成功";
  }
  int password_size() { return _password_size; }
  bool password_save() {
    QFile file1("b1.bin");
    if (!file1.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      return false; // 文件打开失败，返回空字符串
    }
    // 写入二进制数据
    QByteArray dataToWrite1 = QString::number(target_amount).toUtf8();

    qint64 bytesWritten1 = file1.write(dataToWrite1);
    if (bytesWritten1 == -1) {
      return false; // 写入失败，返回空字符串
    }
    file1.close();
    QFile file2("b2.bin");
    // 使用 QIODevice::Truncate 打开模式，如果文件已存在，则清除文件内容
    if (!file2.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      return false; // 文件打开失败，返回空字符串
    }
    // 写入二进制数据
    QByteArray dataToWrite =
        _password.toUtf8(); // 使用 toUtf8() 将 QString 转换为 QByteArray
    qint64 bytesWritten = file2.write(dataToWrite);
    if (bytesWritten == -1) {
      return false; // 写入失败，返回空字符串
    }
    file2.close();
    return true;
  }
  static int strength_calu(const QString &attempt_password) {
    // 0-100

    return attempt_password.size() * 10;
  }
  static QString password_load() {
    QFile file2("b2.bin");
    if (!file2.open(QIODevice::ReadWrite)) {
      return "";
    }
    // 读取二进制数据
    file2.seek(0); // 将文件指针定位到文件开头
    QByteArray dataRead = file2.readAll();
    file2.close();
    return QString(dataRead);
  }
  static double target_amount_load() {
    QFile file1("b1.bin");
    if (!file1.open(QIODevice::ReadWrite)) {
      return 0;
    }
    // 读取二进制数据
    file1.seek(0); // 将文件指针定位到文件开头
    QByteArray dataRead = file1.readAll();
    QString temp(dataRead);
    file1.close();
    double save_amount = temp.toDouble();
    qDebug() << "save_amont:: " << save_amount;
    return save_amount;
  }
};
#endif // PASSWORD_H
