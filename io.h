/******
 * name:io.h
 * auth: yingziyu
 * usage: 定义了输入和输出，包括从csv中导入，导出到csv，和数据库交互的内容
 ******/
#ifndef IO_H
#define IO_H
#include "includes.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <vector>
#include "transaction.h"
#include <memory>

namespace IO{
    std::vector<std::shared_ptr<Transaction> > read_csv(QString path_)
    {
        /********
         * 输入：csv文件路径
         * 输出：一个存有csv中交易记录智能指针的vector
         *******/

        std::vector<std::shared_ptr<Transaction> > result(0);
        //TODO 完善读入，区分微信和支付宝
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
