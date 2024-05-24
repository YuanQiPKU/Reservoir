/********************************************************************************
** Form generated from reading UI file 'account_item_money.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_ITEM_MONEY_H
#define UI_ACCOUNT_ITEM_MONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account_item_money
{
public:
    QPushButton *money_down_sort;
    QPushButton *money_up_sort;

    void setupUi(QWidget *account_item_money)
    {
        if (account_item_money->objectName().isEmpty())
            account_item_money->setObjectName("account_item_money");
        account_item_money->resize(540, 270);
        money_down_sort = new QPushButton(account_item_money);
        money_down_sort->setObjectName("money_down_sort");
        money_down_sort->setGeometry(QRect(70, 70, 141, 141));
        money_down_sort->setMinimumSize(QSize(0, 0));
        money_down_sort->setMaximumSize(QSize(1000, 1000));
        money_down_sort->setFocusPolicy(Qt::StrongFocus);
        money_down_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(188, 255, 236, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(188, 255, 236, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        money_up_sort = new QPushButton(account_item_money);
        money_up_sort->setObjectName("money_up_sort");
        money_up_sort->setGeometry(QRect(300, 70, 141, 141));
        money_up_sort->setMinimumSize(QSize(0, 0));
        money_up_sort->setMaximumSize(QSize(1000, 1000));
        money_up_sort->setFocusPolicy(Qt::StrongFocus);
        money_up_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(255, 255, 236, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 236, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));

        retranslateUi(account_item_money);

        QMetaObject::connectSlotsByName(account_item_money);
    } // setupUi

    void retranslateUi(QWidget *account_item_money)
    {
        account_item_money->setWindowTitle(QCoreApplication::translate("account_item_money", "Form", nullptr));
        money_down_sort->setText(QCoreApplication::translate("account_item_money", "\351\231\215\345\272\217", nullptr));
        money_up_sort->setText(QCoreApplication::translate("account_item_money", "\345\215\207\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_item_money: public Ui_account_item_money {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_ITEM_MONEY_H
