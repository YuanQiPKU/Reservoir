#include "manage_account_page.h"
#include "ui_manage_account_page.h"
#include "account_item.h"
#include <QVBoxLayout>
#include"transaction.h"
manage_account_page::manage_account_page(QTabWidget* all_page, QWidget *parent)
    : all_page(all_page), QWidget(parent)
    , ui(new Ui::manage_account_page)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(960, 540)); // 固定窗口大小
    this->setMaximumSize(QSize(960, 540)); // 固定窗口大小

    // 获取scrollArea的子小部件
    QWidget* scrollAreaWidget = new QWidget; // 创建了一个新的QWidget对象，QWidget是Qt中所有控件的基类。这个对象将作为滚动区域（scrollArea）的子部件。
    ui->scrollArea->setWidget(scrollAreaWidget); //setWidget()函数将新创建的scrollAreaWidget设置为滚动区域的子部件。
    ui->scrollArea->setWidgetResizable(true); // 使scrollArea内容随内容大小变化

    QVBoxLayout *mainLayout = new QVBoxLayout(scrollAreaWidget); // 设置垂直布局到scrollArea的子小部件
    scrollAreaWidget->setLayout(mainLayout); // 这行可以省略，构造函数中已经设置了布局

    for (int i = 0; i < 100; ++i) {
        Transaction *account_item_message=new Transaction();
        account_item* item = new account_item(account_item_message,this);
        connect(item, &account_item::removeRequested, this, &manage_account_page::removeItem);  // 连接信号
        mainLayout->addWidget(item);

    }

}

manage_account_page::~manage_account_page()
{
    delete ui;
}
void manage_account_page::removeItem(account_item* item)
{
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollArea->widget()->layout());
    if (layout) {
        int index = layout->indexOf(item);
        if (index != -1) {
            // 移除item并删除
            QLayoutItem* layoutItem = layout->takeAt(index);
            if (layoutItem) {
                delete layoutItem->widget(); // 删除小部件
                delete layoutItem; // 删除布局项
            }
        }
    }
}
