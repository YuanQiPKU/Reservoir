/********************************************************************************
** Form generated from reading UI file 'manage_account_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_ACCOUNT_PAGE_H
#define UI_MANAGE_ACCOUNT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manage_account_page
{
public:
    QWidget *widget_2;
    QPushButton *manage_out;
    QScrollArea *scrollArea;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *manage_in;
    QPushButton *manage_money;
    QPushButton *manage_kind;
    QPushButton *manage_name;
    QPushButton *manage_time;

    void setupUi(QWidget *manage_account_page)
    {
        if (manage_account_page->objectName().isEmpty())
            manage_account_page->setObjectName("manage_account_page");
        manage_account_page->resize(960, 540);
        manage_account_page->setMinimumSize(QSize(960, 540));
        manage_account_page->setMaximumSize(QSize(960, 540));
        manage_account_page->setMouseTracking(true);
        widget_2 = new QWidget(manage_account_page);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, -10, 971, 561));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/pages/main_page/image/page3.png);"));
        manage_out = new QPushButton(manage_account_page);
        manage_out->setObjectName("manage_out");
        manage_out->setGeometry(QRect(60, 10, 341, 81));
        manage_out->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgba(255, 255, 47, 55);\n"
"	\n"
"	font: 28pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(255, 255, 47, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        scrollArea = new QScrollArea(manage_account_page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(70, 160, 851, 351));
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        scrollArea->setMouseTracking(false);
        scrollArea->setTabletTracking(false);
        scrollArea->setAcceptDrops(false);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        scrollArea->setWidgetResizable(true);
        widget = new QWidget();
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 828, 1000));
        widget->setMinimumSize(QSize(450, 1000));
        widget->setMouseTracking(true);
        widget->setTabletTracking(true);
        widget->setAcceptDrops(true);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(217, 254, 255, 125);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(widget);
        manage_in = new QPushButton(manage_account_page);
        manage_in->setObjectName("manage_in");
        manage_in->setGeometry(QRect(590, 10, 341, 81));
        manage_in->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgba(61, 203, 255, 125);\n"
"	\n"
"	font: 28pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgba(61, 203, 255,200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        manage_money = new QPushButton(manage_account_page);
        manage_money->setObjectName("manage_money");
        manage_money->setGeometry(QRect(60, 110, 121, 51));
        manage_money->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	\n"
"	background-color: rgba(213, 85, 255, 125);\n"
"	\n"
"	\n"
"	font: 12pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(213, 85, 255, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        manage_kind = new QPushButton(manage_account_page);
        manage_kind->setObjectName("manage_kind");
        manage_kind->setGeometry(QRect(280, 110, 121, 51));
        manage_kind->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	\n"
"	background-color: rgba(76, 255, 76, 125);\n"
"	\n"
"	\n"
"	font: 12pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"	\n"
"	background-color: rgba(76, 255, 76, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        manage_name = new QPushButton(manage_account_page);
        manage_name->setObjectName("manage_name");
        manage_name->setGeometry(QRect(810, 110, 121, 51));
        manage_name->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	\n"
"	background-color: rgba(255, 142, 142, 125);\n"
"	\n"
"	\n"
"	font: 12pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(255, 142, 142, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        manage_time = new QPushButton(manage_account_page);
        manage_time->setObjectName("manage_time");
        manage_time->setGeometry(QRect(590, 110, 121, 51));
        manage_time->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	\n"
"	\n"
"	background-color: rgba(255, 223, 105, 125);\n"
"	\n"
"	\n"
"	font: 12pt \"\346\245\267\344\275\223\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgba(255, 223, 105, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));

        retranslateUi(manage_account_page);

        QMetaObject::connectSlotsByName(manage_account_page);
    } // setupUi

    void retranslateUi(QWidget *manage_account_page)
    {
        manage_account_page->setWindowTitle(QCoreApplication::translate("manage_account_page", "Form", nullptr));
        manage_out->setText(QCoreApplication::translate("manage_account_page", "\346\224\257\345\207\272", nullptr));
        manage_in->setText(QCoreApplication::translate("manage_account_page", "\346\224\266\345\205\245", nullptr));
        manage_money->setText(QCoreApplication::translate("manage_account_page", "\351\207\221\351\242\235", nullptr));
        manage_kind->setText(QCoreApplication::translate("manage_account_page", "\347\261\273\345\210\253", nullptr));
        manage_name->setText(QCoreApplication::translate("manage_account_page", "\351\273\230\350\256\244", nullptr));
        manage_time->setText(QCoreApplication::translate("manage_account_page", "\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manage_account_page: public Ui_manage_account_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_ACCOUNT_PAGE_H
