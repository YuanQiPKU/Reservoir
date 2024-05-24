/********************************************************************************
** Form generated from reading UI file 'remove_make_sure.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_MAKE_SURE_H
#define UI_REMOVE_MAKE_SURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove_make_sure
{
public:
    QPushButton *cancel;
    QPushButton *make_sure;

    void setupUi(QWidget *remove_make_sure)
    {
        if (remove_make_sure->objectName().isEmpty())
            remove_make_sure->setObjectName("remove_make_sure");
        remove_make_sure->resize(450, 255);
        cancel = new QPushButton(remove_make_sure);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(60, 60, 141, 141));
        cancel->setMinimumSize(QSize(0, 0));
        cancel->setMaximumSize(QSize(1000, 1000));
        cancel->setFocusPolicy(Qt::StrongFocus);
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        make_sure = new QPushButton(remove_make_sure);
        make_sure->setObjectName("make_sure");
        make_sure->setGeometry(QRect(260, 60, 141, 141));
        make_sure->setMinimumSize(QSize(0, 0));
        make_sure->setMaximumSize(QSize(1000, 1000));
        make_sure->setFocusPolicy(Qt::StrongFocus);
        make_sure->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(remove_make_sure);

        QMetaObject::connectSlotsByName(remove_make_sure);
    } // setupUi

    void retranslateUi(QWidget *remove_make_sure)
    {
        remove_make_sure->setWindowTitle(QCoreApplication::translate("remove_make_sure", "Form", nullptr));
        cancel->setText(QCoreApplication::translate("remove_make_sure", "\345\217\226\346\266\210", nullptr));
        make_sure->setText(QCoreApplication::translate("remove_make_sure", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_make_sure: public Ui_remove_make_sure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_MAKE_SURE_H
