/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_page
{
public:
    QLineEdit *lineEdit;
    QPushButton *btnLogin;
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *login_page)
    {
        if (login_page->objectName().isEmpty())
            login_page->setObjectName("login_page");
        login_page->resize(960, 540);
        login_page->setMinimumSize(QSize(960, 540));
        login_page->setMaximumSize(QSize(960, 540));
        login_page->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(login_page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(300, 230, 281, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgba(246, 176, 255,125);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        btnLogin = new QPushButton(login_page);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(600, 230, 50, 50));
        btnLogin->setMinimumSize(QSize(50, 50));
        btnLogin->setMaximumSize(QSize(50, 50));
        btnLogin->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 157, 133);\n"
"	background-color: rgba(61, 203, 255, 125);\n"
"	font: 290 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-style:"
                        " solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
""));
        widget = new QWidget(login_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(960, 540));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/pages/main_page/image/main_page.png);"));
        label = new QLabel(login_page);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 130, 211, 121));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        widget->raise();
        lineEdit->raise();
        btnLogin->raise();
        label->raise();

        retranslateUi(login_page);

        QMetaObject::connectSlotsByName(login_page);
    } // setupUi

    void retranslateUi(QWidget *login_page)
    {
        login_page->setWindowTitle(QCoreApplication::translate("login_page", "Form", nullptr));
        btnLogin->setText(QCoreApplication::translate("login_page", "IN", nullptr));
        label->setText(QCoreApplication::translate("login_page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:20pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/YuanQiPKU/Reservoir\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Noto Sans','Helvetica','Arial','sans-serif','Apple Color Emoji','Segoe UI Emoji'; font-size:36pt; color:#000000; background-color:transparent;\">Reservoir</a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_page: public Ui_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H
