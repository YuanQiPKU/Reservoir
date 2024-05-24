/********************************************************************************
** Form generated from reading UI file 'first_time_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_TIME_PAGE_H
#define UI_FIRST_TIME_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first_time_page
{
public:
    QWidget *widget;
    QProgressBar *progressBar;
    QPushButton *btnYes;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *first_time_page)
    {
        if (first_time_page->objectName().isEmpty())
            first_time_page->setObjectName("first_time_page");
        first_time_page->resize(960, 540);
        first_time_page->setMinimumSize(QSize(960, 540));
        first_time_page->setMaximumSize(QSize(960, 540));
        widget = new QWidget(first_time_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(960, 540));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/pages/main_page/image/first_time_page.png);"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(310, 210, 220, 20));
        progressBar->setMinimumSize(QSize(220, 20));
        progressBar->setMaximumSize(QSize(220, 20));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"\n"
"}\n"
"color: rgba(255, 255, 255, 175);"));
        progressBar->setValue(0);
        btnYes = new QPushButton(first_time_page);
        btnYes->setObjectName("btnYes");
        btnYes->setGeometry(QRect(550, 240, 50, 50));
        btnYes->setMinimumSize(QSize(50, 50));
        btnYes->setMaximumSize(QSize(50, 50));
        btnYes->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnYes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEdit = new QLineEdit(first_time_page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 240, 220, 50));
        lineEdit->setMinimumSize(QSize(220, 50));
        lineEdit->setMaximumSize(QSize(220, 50));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgba(246, 176, 255,125);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        label = new QLabel(first_time_page);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 301, 181));
        label->setFrameShadow(QFrame::Raised);

        retranslateUi(first_time_page);

        QMetaObject::connectSlotsByName(first_time_page);
    } // setupUi

    void retranslateUi(QWidget *first_time_page)
    {
        first_time_page->setWindowTitle(QCoreApplication::translate("first_time_page", "Form", nullptr));
#if QT_CONFIG(tooltip)
        progressBar->setToolTip(QCoreApplication::translate("first_time_page", "\345\257\206\347\240\201\345\274\272\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        btnYes->setText(QCoreApplication::translate("first_time_page", "IN", nullptr));
        label->setText(QCoreApplication::translate("first_time_page", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p><p align=\"center\"><span style=\" font-weight:700; color:#ffffff;\">\346\210\221\347\237\245\351\201\223\350\277\231\345\217\257\350\203\275\346\230\257\344\275\240\347\254\254\344\270\200\346\254\241\345\260\235\350\257\225\350\256\260\350\264\246</span></p><p align=\"center\"><span style=\" text-decoration: underline; color:#ffffff;\">\346\210\221\344\271\237\346\230\216\347\231\275\344\275\240\350\247\211\345\276\227\350\277\231\345\260\261\345\203\217\345\260\217\345\255\251\345\255\220\350\277\207\345\256\266\345\256\266\344\270\200\346\240\267</span></p><p align=\"center\"><span style=\" color:#ffffff;\">\344\275\206\346\230\257\351\222\261\345\260\261\345\203\217\346\265\201\346\260\264</span></p><p align=\"center\"><span style=\" color:#ffffff;\">\350\277\231\344\271\237\346\230\257\346\210\221\344\273\254\344\270\272\344\273\200\344\271\210\350\246\201\347\224\250\346\260\264\345\272\223\344\275\234\344\270\272\346"
                        "\210\221\344\273\254\350\277\231\346\254\276\350\275\257\344\273\266\347\232\204\350\261\241\345\276\201</span></p><p align=\"center\"><span style=\" font-weight:700; color:#ffffff;\">\345\270\214\346\234\233\344\275\240\346\234\211\346\211\200\346\224\266\350\216\267</span></p><p align=\"center\"><span style=\" color:#ffffff;\">\350\257\267\345\234\250\344\270\213\346\226\271\351\224\256\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201<br/></span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class first_time_page: public Ui_first_time_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_TIME_PAGE_H
