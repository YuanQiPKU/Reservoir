/********************************************************************************
** Form generated from reading UI file 'add_account_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ACCOUNT_PAGE_H
#define UI_ADD_ACCOUNT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_account_page
{
public:
    QWidget *backwidget;
    QWidget *common_way_widget;
    QRadioButton *btnIn;
    QRadioButton *btnOut;
    QPushButton *btnConfirm;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *consume;
    QRadioButton *maintain;
    QRadioButton *social;
    QRadioButton *develop;
    QRadioButton *other;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *btnYes;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *add_account_page)
    {
        if (add_account_page->objectName().isEmpty())
            add_account_page->setObjectName("add_account_page");
        add_account_page->resize(960, 540);
        add_account_page->setMinimumSize(QSize(960, 540));
        add_account_page->setMaximumSize(QSize(960, 540));
        backwidget = new QWidget(add_account_page);
        backwidget->setObjectName("backwidget");
        backwidget->setGeometry(QRect(0, 0, 960, 540));
        backwidget->setMinimumSize(QSize(960, 540));
        backwidget->setMaximumSize(QSize(960, 540));
        backwidget->setStyleSheet(QString::fromUtf8("background-color: rgba(153, 170, 160, 175);"));
        common_way_widget = new QWidget(backwidget);
        common_way_widget->setObjectName("common_way_widget");
        common_way_widget->setGeometry(QRect(20, 260, 901, 241));
        common_way_widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgba(170, 170, 127, 125);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 25px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"\n"
"  background-color: rgba(170, 170, 127, 75);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius:25px; /* \350\276\271\346\241\206\345\234\206\350\247\222"
                        " */\n"
"}\n"
""));
        btnIn = new QRadioButton(common_way_widget);
        btnIn->setObjectName("btnIn");
        btnIn->setGeometry(QRect(300, 90, 73, 18));
        btnOut = new QRadioButton(common_way_widget);
        btnOut->setObjectName("btnOut");
        btnOut->setGeometry(QRect(300, 120, 73, 18));
        btnConfirm = new QPushButton(common_way_widget);
        btnConfirm->setObjectName("btnConfirm");
        btnConfirm->setGeometry(QRect(740, 80, 50, 50));
        btnConfirm->setMinimumSize(QSize(50, 50));
        btnConfirm->setMaximumSize(QSize(50, 50));
        btnConfirm->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnConfirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"\345\271\274\345\234\206\";\n"
"	background-color: rgba(61, 203, 255, 125);\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgba(61, 203, 255, 200);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
""));
        lineEdit = new QLineEdit(common_way_widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(550, 95, 161, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgba(246, 176, 255,125);\n"
"   border-radius: 10px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        lineEdit_2 = new QLineEdit(common_way_widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(400, 40, 211, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgba(246, 176, 255,125);\n"
"   border-radius: 10px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        verticalLayoutWidget = new QWidget(common_way_widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(400, 80, 81, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        consume = new QRadioButton(verticalLayoutWidget);
        consume->setObjectName("consume");

        verticalLayout->addWidget(consume);

        maintain = new QRadioButton(verticalLayoutWidget);
        maintain->setObjectName("maintain");

        verticalLayout->addWidget(maintain);

        social = new QRadioButton(verticalLayoutWidget);
        social->setObjectName("social");

        verticalLayout->addWidget(social);

        develop = new QRadioButton(verticalLayoutWidget);
        develop->setObjectName("develop");

        verticalLayout->addWidget(develop);

        other = new QRadioButton(verticalLayoutWidget);
        other->setObjectName("other");

        verticalLayout->addWidget(other);

        dateTimeEdit = new QDateTimeEdit(common_way_widget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(30, 90, 211, 51));
        btnYes = new QPushButton(add_account_page);
        btnYes->setObjectName("btnYes");
        btnYes->setGeometry(QRect(300, 110, 50, 50));
        btnYes->setMinimumSize(QSize(50, 50));
        btnYes->setMaximumSize(QSize(50, 50));
        btnYes->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnYes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"\345\271\274\345\234\206\";\n"
"	background-color: rgba(61, 203, 255, 125);\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgba(61, 203, 255, 200);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
""));
        textEdit = new QTextEdit(add_account_page);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 110, 191, 51));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgba(246, 176, 255,125);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        label = new QLabel(add_account_page);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 70, 351, 111));
        label_2 = new QLabel(add_account_page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 180, 331, 71));

        retranslateUi(add_account_page);

        QMetaObject::connectSlotsByName(add_account_page);
    } // setupUi

    void retranslateUi(QWidget *add_account_page)
    {
        add_account_page->setWindowTitle(QCoreApplication::translate("add_account_page", "Form", nullptr));
        btnIn->setText(QCoreApplication::translate("add_account_page", "\346\224\266\345\205\245/IN", nullptr));
        btnOut->setText(QCoreApplication::translate("add_account_page", "\346\224\257\345\207\272/OUT", nullptr));
        btnConfirm->setText(QCoreApplication::translate("add_account_page", "\346\267\273\345\212\240", nullptr));
        consume->setText(QCoreApplication::translate("add_account_page", "\346\266\210\350\264\271\346\200\247", nullptr));
        maintain->setText(QCoreApplication::translate("add_account_page", "\347\273\264\346\214\201\346\200\247", nullptr));
        social->setText(QCoreApplication::translate("add_account_page", "\347\244\276\344\274\232\346\200\247", nullptr));
        develop->setText(QCoreApplication::translate("add_account_page", "\345\217\221\345\261\225\346\200\247", nullptr));
        other->setText(QCoreApplication::translate("add_account_page", "\345\205\266\344\273\226", nullptr));
        btnYes->setText(QCoreApplication::translate("add_account_page", "\350\247\243\346\236\220", nullptr));
        label->setText(QCoreApplication::translate("add_account_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffffff;\">\345\234\250\350\277\231\351\207\214\345\257\274\345\205\245csv\346\226\207\344\273\266\350\247\243\346\236\220</span></p><p align=\"center\"><span style=\" font-size:12pt; color:#ffffff;\">\344\275\240\345\217\257\344\273\245\345\260\206\346\224\257\344\273\230\345\256\235\346\210\226\350\200\205\345\276\256\344\277\241\345\257\274\345\207\272\347\232\204\350\264\246\345\215\225\346\226\207\344\273\266\346\213\226\346\213\275\345\210\260\350\277\231\351\207\214</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("add_account_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#fefefe;\">\344\275\240\344\271\237\345\217\257\344\273\245\345\234\250\350\277\231\351\207\214\346\211\213\345\212\250\346\267\273\345\212\240\350\264\246\347\233\256</span></p><p align=\"center\"><span style=\" font-size:14pt; color:#fefefe;\">\345\217\252\351\234\200\350\246\201\345\256\214\346\210\220\344\270\213\351\235\242\347\232\204\345\207\240\346\255\245\346\223\215\344\275\234\345\260\261\345\217\257\344\273\245\345\225\246!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_account_page: public Ui_add_account_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ACCOUNT_PAGE_H
