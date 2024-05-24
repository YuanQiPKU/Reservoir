/********************************************************************************
** Form generated from reading UI file 'account_item_kind.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_ITEM_KIND_H
#define UI_ACCOUNT_ITEM_KIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account_item_kind
{
public:
    QPushButton *maintain_sort;
    QPushButton *social_sort;
    QPushButton *develop_sort;
    QPushButton *consume_sort;
    QPushButton *other_sort;

    void setupUi(QWidget *account_item_kind)
    {
        if (account_item_kind->objectName().isEmpty())
            account_item_kind->setObjectName("account_item_kind");
        account_item_kind->resize(627, 441);
        maintain_sort = new QPushButton(account_item_kind);
        maintain_sort->setObjectName("maintain_sort");
        maintain_sort->setGeometry(QRect(70, 10, 141, 141));
        maintain_sort->setMinimumSize(QSize(0, 0));
        maintain_sort->setMaximumSize(QSize(1000, 1000));
        maintain_sort->setFocusPolicy(Qt::StrongFocus);
        maintain_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        social_sort = new QPushButton(account_item_kind);
        social_sort->setObjectName("social_sort");
        social_sort->setGeometry(QRect(400, 20, 141, 141));
        social_sort->setMinimumSize(QSize(0, 0));
        social_sort->setMaximumSize(QSize(1000, 1000));
        social_sort->setFocusPolicy(Qt::StrongFocus);
        social_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(100, 200, 236, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(100, 200, 236, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        develop_sort = new QPushButton(account_item_kind);
        develop_sort->setObjectName("develop_sort");
        develop_sort->setGeometry(QRect(60, 290, 141, 141));
        develop_sort->setMinimumSize(QSize(0, 0));
        develop_sort->setMaximumSize(QSize(1000, 1000));
        develop_sort->setFocusPolicy(Qt::StrongFocus);
        develop_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(188, 100, 236, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(188, 100, 236, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        consume_sort = new QPushButton(account_item_kind);
        consume_sort->setObjectName("consume_sort");
        consume_sort->setGeometry(QRect(400, 290, 141, 141));
        consume_sort->setMinimumSize(QSize(0, 0));
        consume_sort->setMaximumSize(QSize(1000, 1000));
        consume_sort->setFocusPolicy(Qt::StrongFocus);
        consume_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(188, 255, 100, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    	background-color: rgba(188, 255, 100, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        other_sort = new QPushButton(account_item_kind);
        other_sort->setObjectName("other_sort");
        other_sort->setGeometry(QRect(230, 160, 141, 141));
        other_sort->setMinimumSize(QSize(0, 0));
        other_sort->setMaximumSize(QSize(1000, 1000));
        other_sort->setFocusPolicy(Qt::StrongFocus);
        other_sort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(255, 255, 236, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(255, 255, 236, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));

        retranslateUi(account_item_kind);

        QMetaObject::connectSlotsByName(account_item_kind);
    } // setupUi

    void retranslateUi(QWidget *account_item_kind)
    {
        account_item_kind->setWindowTitle(QCoreApplication::translate("account_item_kind", "Form", nullptr));
        maintain_sort->setText(QCoreApplication::translate("account_item_kind", "\347\273\264\346\214\201\346\200\247", nullptr));
        social_sort->setText(QCoreApplication::translate("account_item_kind", "\347\244\276\344\274\232\346\200\247", nullptr));
        develop_sort->setText(QCoreApplication::translate("account_item_kind", "\345\217\221\345\261\225\346\200\247", nullptr));
        consume_sort->setText(QCoreApplication::translate("account_item_kind", "\346\266\210\350\264\271\346\200\247", nullptr));
        other_sort->setText(QCoreApplication::translate("account_item_kind", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_item_kind: public Ui_account_item_kind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_ITEM_KIND_H
