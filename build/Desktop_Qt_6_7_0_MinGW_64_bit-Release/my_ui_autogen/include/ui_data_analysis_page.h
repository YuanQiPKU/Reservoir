/********************************************************************************
** Form generated from reading UI file 'data_analysis_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_ANALYSIS_PAGE_H
#define UI_DATA_ANALYSIS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_analysis_page
{
public:
    QWidget *widget;
    QWidget *plot_1;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ver1;
    QWidget *plot_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *ver2;
    QLCDNumber *lcdNumber;
    QLabel *label;

    void setupUi(QWidget *data_analysis_page)
    {
        if (data_analysis_page->objectName().isEmpty())
            data_analysis_page->setObjectName("data_analysis_page");
        data_analysis_page->resize(960, 540);
        data_analysis_page->setMinimumSize(QSize(960, 540));
        data_analysis_page->setMaximumSize(QSize(960, 540));
        widget = new QWidget(data_analysis_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(960, 540));
        widget->setStyleSheet(QString::fromUtf8(""));
        plot_1 = new QWidget(widget);
        plot_1->setObjectName("plot_1");
        plot_1->setGeometry(QRect(0, 0, 471, 541));
        plot_1->setStyleSheet(QString::fromUtf8("background-color: rgba(226, 239, 255, 125);"));
        verticalLayoutWidget = new QWidget(plot_1);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 471, 411));
        ver1 = new QVBoxLayout(verticalLayoutWidget);
        ver1->setObjectName("ver1");
        ver1->setContentsMargins(0, 0, 0, 0);
        plot_2 = new QWidget(widget);
        plot_2->setObjectName("plot_2");
        plot_2->setGeometry(QRect(470, 0, 491, 561));
        plot_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 231, 235, 125);"));
        verticalLayoutWidget_2 = new QWidget(plot_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 491, 411));
        ver2 = new QVBoxLayout(verticalLayoutWidget_2);
        ver2->setObjectName("ver2");
        ver2->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(plot_2);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(260, 440, 151, 41));
        label = new QLabel(plot_2);
        label->setObjectName("label");
        label->setGeometry(QRect(84, 446, 151, 31));

        retranslateUi(data_analysis_page);

        QMetaObject::connectSlotsByName(data_analysis_page);
    } // setupUi

    void retranslateUi(QWidget *data_analysis_page)
    {
        data_analysis_page->setWindowTitle(QCoreApplication::translate("data_analysis_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("data_analysis_page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#000000;\">\350\256\241\345\205\245\347\273\237\350\256\241\347\232\204\350\264\246\347\233\256\346\225\260\351\207\217:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class data_analysis_page: public Ui_data_analysis_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_ANALYSIS_PAGE_H
