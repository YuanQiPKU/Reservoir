/********************************************************************************
** Form generated from reading UI file 'changepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPAGE_H
#define UI_CHANGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepage
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *change_name_line;
    QLineEdit *change_time_line;
    QLineEdit *change_kind_line;
    QLineEdit *change_money_line;
    QPushButton *make_sure;

    void setupUi(QWidget *changepage)
    {
        if (changepage->objectName().isEmpty())
            changepage->setObjectName("changepage");
        changepage->resize(648, 365);
        label_2 = new QLabel(changepage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 49, 51, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 116, 255);"));
        label_3 = new QLabel(changepage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 130, 51, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 234, 255);"));
        label_4 = new QLabel(changepage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 210, 51, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 255, 110);"));
        label_5 = new QLabel(changepage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 280, 51, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 153, 185);"));
        change_name_line = new QLineEdit(changepage);
        change_name_line->setObjectName("change_name_line");
        change_name_line->setGeometry(QRect(150, 50, 291, 41));
        change_name_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(125, 116, 255);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        change_time_line = new QLineEdit(changepage);
        change_time_line->setObjectName("change_time_line");
        change_time_line->setGeometry(QRect(150, 130, 291, 41));
        change_time_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(131, 234, 255);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        change_kind_line = new QLineEdit(changepage);
        change_kind_line->setObjectName("change_kind_line");
        change_kind_line->setGeometry(QRect(150, 210, 291, 41));
        change_kind_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(221, 255, 110);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        change_money_line = new QLineEdit(changepage);
        change_money_line->setObjectName("change_money_line");
        change_money_line->setGeometry(QRect(150, 280, 291, 41));
        change_money_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(255, 153, 185);\n"
"   border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}"));
        make_sure = new QPushButton(changepage);
        make_sure->setObjectName("make_sure");
        make_sure->setGeometry(QRect(540, 330, 93, 28));

        retranslateUi(changepage);

        QMetaObject::connectSlotsByName(changepage);
    } // setupUi

    void retranslateUi(QWidget *changepage)
    {
        changepage->setWindowTitle(QCoreApplication::translate("changepage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("changepage", "  \345\220\215 \345\255\227", nullptr));
        label_3->setText(QCoreApplication::translate("changepage", "  \346\227\266 \351\227\264 ", nullptr));
        label_4->setText(QCoreApplication::translate("changepage", "  \347\261\273 \345\236\213", nullptr));
        label_5->setText(QCoreApplication::translate("changepage", "  \351\207\221 \351\242\235", nullptr));
        make_sure->setText(QCoreApplication::translate("changepage", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepage: public Ui_changepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPAGE_H
