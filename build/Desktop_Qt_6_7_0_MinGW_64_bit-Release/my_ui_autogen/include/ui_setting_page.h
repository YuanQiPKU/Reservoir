/********************************************************************************
** Form generated from reading UI file 'setting_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_PAGE_H
#define UI_SETTING_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting_page
{
public:

    void setupUi(QWidget *setting_page)
    {
        if (setting_page->objectName().isEmpty())
            setting_page->setObjectName("setting_page");
        setting_page->resize(960, 540);
        setting_page->setMinimumSize(QSize(960, 540));
        setting_page->setMaximumSize(QSize(960, 540));

        retranslateUi(setting_page);

        QMetaObject::connectSlotsByName(setting_page);
    } // setupUi

    void retranslateUi(QWidget *setting_page)
    {
        setting_page->setWindowTitle(QCoreApplication::translate("setting_page", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting_page: public Ui_setting_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_PAGE_H
