/********************************************************************************
** Form generated from reading UI file 'account_item_name.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_ITEM_NAME_H
#define UI_ACCOUNT_ITEM_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account_item_name
{
public:

    void setupUi(QWidget *account_item_name)
    {
        if (account_item_name->objectName().isEmpty())
            account_item_name->setObjectName("account_item_name");
        account_item_name->resize(400, 300);

        retranslateUi(account_item_name);

        QMetaObject::connectSlotsByName(account_item_name);
    } // setupUi

    void retranslateUi(QWidget *account_item_name)
    {
        account_item_name->setWindowTitle(QCoreApplication::translate("account_item_name", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_item_name: public Ui_account_item_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_ITEM_NAME_H
