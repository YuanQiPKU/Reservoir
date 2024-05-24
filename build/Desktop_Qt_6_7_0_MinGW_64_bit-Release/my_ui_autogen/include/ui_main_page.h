/********************************************************************************
** Form generated from reading UI file 'main_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PAGE_H
#define UI_MAIN_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_page
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnUserHelp;
    QPushButton *btnSettings;
    QPushButton *btnManageAccount;
    QPushButton *btnDataAnalysis;
    QPushButton *btnTip;
    QPushButton *btnAddAccount;
    QWidget *widget;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QWidget *water;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *water_layout;

    void setupUi(QWidget *main_page)
    {
        if (main_page->objectName().isEmpty())
            main_page->setObjectName("main_page");
        main_page->resize(960, 540);
        main_page->setMinimumSize(QSize(960, 540));
        main_page->setMaximumSize(QSize(960, 540));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appointment-new")));
        main_page->setWindowIcon(icon);
        main_page->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(main_page);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 90, 209, 316));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnUserHelp = new QPushButton(gridLayoutWidget);
        btnUserHelp->setObjectName("btnUserHelp");
        btnUserHelp->setMinimumSize(QSize(100, 100));
        btnUserHelp->setMaximumSize(QSize(100, 100));
        btnUserHelp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(227, 255, 133, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(227, 255, 133, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));

        gridLayout->addWidget(btnUserHelp, 2, 1, 1, 1);

        btnSettings = new QPushButton(gridLayoutWidget);
        btnSettings->setObjectName("btnSettings");
        btnSettings->setMinimumSize(QSize(100, 100));
        btnSettings->setMaximumSize(QSize(100, 100));
        btnSettings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(233, 202, 255, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(233, 202, 255, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));

        gridLayout->addWidget(btnSettings, 3, 0, 1, 1);

        btnManageAccount = new QPushButton(gridLayoutWidget);
        btnManageAccount->setObjectName("btnManageAccount");
        btnManageAccount->setMinimumSize(QSize(100, 100));
        btnManageAccount->setMaximumSize(QSize(100, 100));
        btnManageAccount->setFocusPolicy(Qt::StrongFocus);
        btnManageAccount->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btnManageAccount, 2, 0, 1, 1);

        btnDataAnalysis = new QPushButton(gridLayoutWidget);
        btnDataAnalysis->setObjectName("btnDataAnalysis");
        btnDataAnalysis->setMinimumSize(QSize(100, 100));
        btnDataAnalysis->setMaximumSize(QSize(100, 100));
        btnDataAnalysis->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	\n"
"	background-color: rgba(255, 179, 0, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(255, 179, 0, 200);\n"
"   border-style: solid; \n"
"    border-width: 1px; \n"
"    border-color: #8c8884;\n"
"    border-radius: 15px; \n"
"}"));

        gridLayout->addWidget(btnDataAnalysis, 0, 1, 1, 1);

        btnTip = new QPushButton(gridLayoutWidget);
        btnTip->setObjectName("btnTip");
        btnTip->setMinimumSize(QSize(100, 100));
        btnTip->setMaximumSize(QSize(100, 100));
        btnTip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(170, 80, 101, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
"    color: #000000; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-weight: normal;\n"
"    padding: 5px; /* \346\214\211\351\234\200\350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
" border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(170, 80, 101, 200);\n"
"   border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));

        gridLayout->addWidget(btnTip, 3, 1, 1, 1);

        btnAddAccount = new QPushButton(gridLayoutWidget);
        btnAddAccount->setObjectName("btnAddAccount");
        btnAddAccount->setMinimumSize(QSize(100, 100));
        btnAddAccount->setMaximumSize(QSize(100, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        btnAddAccount->setFont(font);
        btnAddAccount->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnAddAccount->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgba(61, 203, 255, 125);\n"
"	font: 290 14pt \"\345\271\274\345\234\206\";\n"
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

        gridLayout->addWidget(btnAddAccount, 0, 0, 1, 1);

        btnAddAccount->raise();
        btnDataAnalysis->raise();
        btnManageAccount->raise();
        btnSettings->raise();
        btnTip->raise();
        btnUserHelp->raise();
        widget = new QWidget(main_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(960, 540));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font1.setPointSize(15);
        font1.setBold(false);
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/pages/main_page/image/background_page.png);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(474, 350, 101, 21));
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(600, 345, 101, 31));
        water = new QWidget(main_page);
        water->setObjectName("water");
        water->setGeometry(QRect(450, 83, 400, 200));
        water->setMinimumSize(QSize(400, 200));
        water->setMaximumSize(QSize(400, 200));
        water->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 249, 255, 120);"));
        verticalLayoutWidget = new QWidget(water);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, -1, 401, 201));
        water_layout = new QVBoxLayout(verticalLayoutWidget);
        water_layout->setObjectName("water_layout");
        water_layout->setContentsMargins(0, 0, 0, 0);
        widget->raise();
        gridLayoutWidget->raise();
        water->raise();

        retranslateUi(main_page);

        QMetaObject::connectSlotsByName(main_page);
    } // setupUi

    void retranslateUi(QWidget *main_page)
    {
        main_page->setWindowTitle(QCoreApplication::translate("main_page", "Form", nullptr));
        btnUserHelp->setText(QCoreApplication::translate("main_page", "\347\224\250\346\210\267\345\270\256\345\212\251", nullptr));
        btnSettings->setText(QCoreApplication::translate("main_page", "\350\256\276\347\275\256", nullptr));
        btnManageAccount->setText(QCoreApplication::translate("main_page", "\347\256\241\347\220\206\350\264\246\347\233\256", nullptr));
        btnDataAnalysis->setText(QCoreApplication::translate("main_page", "\346\225\260\346\215\256\345\210\206\346\236\220", nullptr));
        btnTip->setText(QCoreApplication::translate("main_page", "\345\260\217\346\217\220\347\244\272", nullptr));
        btnAddAccount->setText(QCoreApplication::translate("main_page", "\346\226\260\345\242\236\350\264\246\347\233\256", nullptr));
        label->setText(QCoreApplication::translate("main_page", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\345\275\223\345\211\215\347\233\256\346\240\207\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
