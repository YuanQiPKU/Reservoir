/********************************************************************************
** Form generated from reading UI file 'user_help_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_HELP_PAGE_H
#define UI_USER_HELP_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_help_page
{
public:
    QWidget *widget;

    void setupUi(QWidget *user_help_page)
    {
        if (user_help_page->objectName().isEmpty())
            user_help_page->setObjectName("user_help_page");
        user_help_page->resize(960, 540);
        user_help_page->setMinimumSize(QSize(960, 540));
        user_help_page->setMaximumSize(QSize(960, 540));
        widget = new QWidget(user_help_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(960, 540));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/pages/main_page/image/page3.png);"));

        retranslateUi(user_help_page);

        QMetaObject::connectSlotsByName(user_help_page);
    } // setupUi

    void retranslateUi(QWidget *user_help_page)
    {
        user_help_page->setWindowTitle(QCoreApplication::translate("user_help_page", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_help_page: public Ui_user_help_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_HELP_PAGE_H
