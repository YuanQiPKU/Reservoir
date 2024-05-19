/******
 * name:io.h
 * auth: yingziyu
 * usage: 定义了输入和输出，包括从csv中导入，导出到csv，和数据库交互的内容
 ******/
#ifndef IO_H
#define IO_H
#include <QString>
#include<QRegularExpression>
#include<QRegularExpressionMatch>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include<QFile>
#include <vector>
#include "transaction.h"
#include <memory>

namespace IO{

    bool is_wechat(QString path_){
        QFile file(path_);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "ERROR 无法打开文件";
            throw "UnableToOpenError";
        }
        QTextStream stream(&file);
        QString line = stream.readLine();
        if(line == "微信支付账单明细,,,,,,,,")
            return true;
        return false;
    }
    bool is_alipay(QString path_){
        QFile file(path_);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "ERROR 无法打开文件";
            throw "UnableToOpenError";
        }
        QTextStream stream(&file);
        QString line = stream.readLine();
        for(int i = 1;i < 4;i++)
            line = stream.readLine();
        if(line.startsWith("支"))
            return true;
        return false;
    }
    bool is_reservior(QString path_){
        QFile file(path_);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "ERROR 无法打开文件";
            throw "UnableToOpenError";
        }
        QTextStream stream(&file);
        QString line = stream.readLine();
        if(line.startsWith("Reservior 账单导出"))
            return true;
        return false;
    }
    std::vector<std::shared_ptr<Transaction> > read_csv(QString path_)
    {
        /********
         * 输入：csv文件路径
         * 输出：一个存有csv中交易记录智能指针的vector
         * 注意：异常处理！请使用try调用
         *******/

        std::vector<std::shared_ptr<Transaction> > result(0);
        if(is_wechat(path_)){
            qDebug() << "读取微信账单";
            QFile file(path_);
            QTextStream stream(&file);

        } else if(is_alipay(path_)) {
            qDebug() << "读取支付宝账单";
        }else if(is_reservior(path_)){
            qDebug() << "读取先前导出的账单";
        }else{
            qDebug() << "ERROR 导入账单类型错误：不是微信或支付宝";
            throw "BillTypeError";
            return result;
        }
        return result;
    }
    void write_csv(std::vector<std::shared_ptr<Transaction> > data_,QString path_)
    {
        /********
         * 输入：要导出的内容,csv文件路径
         * 输出：无
         *******/
        return ;
    }
    std::vector<std::shared_ptr<Transaction> > read_db()
    {
        /********
         * 输入：无
         * 输出：一个存有数据库中交易记录智能指针的vector
         *******/

        std::vector<std::shared_ptr<Transaction> > result(0);
        //TODO 完善
        return result;
    }
    void update_db(std::vector<std::shared_ptr<Transaction> > data_)
    {
        /********
         * 输入：所有数据
         * 输出：无
         *******/
        return ;
    }
    void update_db(std::shared_ptr<Transaction> data_to_update_,std::shared_ptr<Transaction> data_updated)
    {
        /********
         * 输入：要修改的数据，修改后的数据(要修改的数据若为nullptr，则为插入操作;修改后的数据若为nullptr，则为删除操作)
         * 输出：无
         *******/
        return ;
    }
    void insert_db(std::shared_ptr<Transaction> data_to_insert_)
    {
        /*****
         * 输入：插入的数据
         * 输出：无
         *****/
        update_db(nullptr,data_to_insert_);
    }
    void delete_db(std::shared_ptr<Transaction> data_to_delete_)
    {
        /*****
         * 输入：删除的数据
         * 输出：无
         *****/
        update_db(data_to_delete_,nullptr);
    }
};
#endif // IO_H
