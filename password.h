#ifndef PASSWORD_H
#define PASSWORD_H
#pragma once
#include <QString>
#include<QFile>
#include <QByteArray>
// 密码应当在程序运行之初于文件中读取
class password {
private:
  QString _password;
  int _password_size;

public:
  static int password_count;
  password(QString set_password) {
    ++password_count;
    _password = set_password;
    _password_size = _password.size();
  }
  bool password_validation(QString attempt_password) {
    if (_password == attempt_password) {
      return true;
    }
    return false;
  }
  void password_change(QString a){
      _password = a;
  }
  int password_size() { return _password_size; }
  bool password_save(){
      QFile file("binary.dat");
      // 使用 QIODevice::Truncate 打开模式，如果文件已存在，则清除文件内容
      if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
          return false; // 文件打开失败，返回空字符串
      }

      // 写入二进制数据
      QByteArray dataToWrite = _password.toUtf8(); // 使用 toUtf8() 将 QString 转换为 QByteArray
      qint64 bytesWritten = file.write(dataToWrite);
      if (bytesWritten == -1) {
          return false; // 写入失败，返回空字符串
      }
      file.close();
      return true;
  }
  static int strength_calu(const QString &attempt_password) {
    // 0-100

    return attempt_password.size() * 10;
  }
  static QString password_load(){
      QFile file("binary.dat");
      if (!file.open(QIODevice::ReadWrite)) {
          return "";
      }
      // 读取二进制数据
      file.seek(0); // 将文件指针定位到文件开头
      QByteArray dataRead = file.readAll();
      file.close();
      return QString(dataRead);
  }
};
#endif // PASSWORD_H
