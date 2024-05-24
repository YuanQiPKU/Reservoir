/********************************************************************************
** Form generated from reading UI file 'account_item.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_ITEM_H
#define UI_ACCOUNT_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account_item
{
public:
    QWidget *widget;
    QLabel *labelName;
    QLabel *labelTime;
    QLabel *labelKind;
    QLabel *labelMoney;
    QWidget *widget_2;
    QPushButton *btnChange;
    QPushButton *btnRemove;

    void setupUi(QWidget *account_item)
    {
        if (account_item->objectName().isEmpty())
            account_item->setObjectName("account_item");
        account_item->resize(800, 30);
        account_item->setMinimumSize(QSize(800, 30));
        account_item->setMaximumSize(QSize(800, 30));
        account_item->setStyleSheet(QString::fromUtf8("QWidget{\n"
"   border-radius: 20px;\n"
"	background-color: rgb(147, 167, 255);\n"
"   border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"QWidget:hover {\n"
"	background-color: rgba(170, 170, 127, 125);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        widget = new QWidget(account_item);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 691, 30));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(600, 30));
        widget->setMaximumSize(QSize(700, 30));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgba(170, 170, 127, 125);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"\n"
"  background-color: rgba(170, 170, 127, 200);\n"
"    border-style: solid; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-width: 1px; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    border-color: #8c8884; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222"
                        " */\n"
"}\n"
""));
        labelName = new QLabel(widget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(10, 0, 172, 30));
        labelName->setStyleSheet(QString::fromUtf8("Qlabel:hover{\n"
"	\n"
"	background-color: rgba(216, 237, 255, 200);\n"
"}\n"
"Qlabel{\n"
"	background-color: rgba(216, 237, 255, 125);\n"
"}"));
        labelTime = new QLabel(widget);
        labelTime->setObjectName("labelTime");
        labelTime->setGeometry(QRect(180, 0, 172, 30));
        labelTime->setStyleSheet(QString::fromUtf8("Qlabel:hover{\n"
"	\n"
"	\n"
"	alternate-background-color: rgba(130, 153, 255, 200);\n"
"}\n"
"Qlabel{\n"
"	background-color: rgba(216, 237, 255, 125);\n"
"}"));
        labelKind = new QLabel(widget);
        labelKind->setObjectName("labelKind");
        labelKind->setGeometry(QRect(350, 0, 172, 30));
        labelKind->setStyleSheet(QString::fromUtf8("Qlabel:hover{\n"
"	\n"
"	background-color: rgba(216, 237, 255, 200);\n"
"}\n"
"Qlabel{\n"
"	background-color: rgba(216, 237, 255, 125);\n"
"}"));
        labelMoney = new QLabel(widget);
        labelMoney->setObjectName("labelMoney");
        labelMoney->setGeometry(QRect(520, 0, 172, 30));
        labelMoney->setStyleSheet(QString::fromUtf8("Qlabel:hover{\n"
"	\n"
"	background-color: rgba(216, 237, 255, 200);\n"
"}\n"
"Qlabel{\n"
"	background-color: rgba(216, 237, 255, 125);\n"
"}"));
        widget_2 = new QWidget(account_item);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(690, 0, 111, 30));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(225, 225, 255, 125);"));
        btnChange = new QPushButton(widget_2);
        btnChange->setObjectName("btnChange");
        btnChange->setGeometry(QRect(0, 0, 55, 30));
        btnChange->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	background-color: rgba(160, 247, 255, 200);\n"
"}\n"
"QPushButton{\n"
"background-color: rgba(160, 247, 255, 125);\n"
"}"));
        btnRemove = new QPushButton(widget_2);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(56, 0, 55, 30));
        btnRemove->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	background-color: rgba(255, 1, 39, 200);\n"
"}\n"
"QPushButton{\n"
"background-color: rgba(255, 1, 39, 125);\n"
"}"));
        widget_2->raise();
        widget->raise();

        retranslateUi(account_item);

        QMetaObject::connectSlotsByName(account_item);
    } // setupUi

    void retranslateUi(QWidget *account_item)
    {
        account_item->setWindowTitle(QCoreApplication::translate("account_item", "Form", nullptr));
        labelName->setText(QCoreApplication::translate("account_item", "TextLabel", nullptr));
        labelTime->setText(QCoreApplication::translate("account_item", "TextLabel", nullptr));
        labelKind->setText(QCoreApplication::translate("account_item", "TextLabel", nullptr));
        labelMoney->setText(QCoreApplication::translate("account_item", "TextLabel", nullptr));
        btnChange->setText(QCoreApplication::translate("account_item", "O", nullptr));
        btnRemove->setText(QCoreApplication::translate("account_item", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_item: public Ui_account_item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_ITEM_H
