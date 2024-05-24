/****************************************************************************
** Meta object code from reading C++ file 'manage_account_page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../manage_account_page.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manage_account_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmanage_account_pageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmanage_account_pageENDCLASS = QtMocHelpers::stringData(
    "manage_account_page",
    "removeItem",
    "",
    "account_item*",
    "item",
    "on_manage_money_clicked",
    "on_manage_time_clicked",
    "on_manage_name_clicked",
    "sortAccountItems",
    "descending",
    "sort_time_AccountItems",
    "sort_kind_AccountItems",
    "Kind",
    "t",
    "on_manage_kind_clicked",
    "on_manage_out_clicked",
    "on_manage_in_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmanage_account_pageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    1 /* Private */,
       5,    0,   77,    2, 0x08,    3 /* Private */,
       6,    0,   78,    2, 0x08,    4 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    1,   80,    2, 0x08,    6 /* Private */,
      10,    1,   83,    2, 0x08,    8 /* Private */,
      11,    1,   86,    2, 0x08,   10 /* Private */,
      14,    0,   89,    2, 0x08,   12 /* Private */,
      15,    0,   90,    2, 0x08,   13 /* Private */,
      16,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject manage_account_page::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSmanage_account_pageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmanage_account_pageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmanage_account_pageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<manage_account_page, std::true_type>,
        // method 'removeItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<account_item *, std::false_type>,
        // method 'on_manage_money_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manage_time_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manage_name_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortAccountItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sort_time_AccountItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sort_kind_AccountItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Kind, std::false_type>,
        // method 'on_manage_kind_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manage_out_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manage_in_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void manage_account_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<manage_account_page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->removeItem((*reinterpret_cast< std::add_pointer_t<account_item*>>(_a[1]))); break;
        case 1: _t->on_manage_money_clicked(); break;
        case 2: _t->on_manage_time_clicked(); break;
        case 3: _t->on_manage_name_clicked(); break;
        case 4: _t->sortAccountItems((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->sort_time_AccountItems((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->sort_kind_AccountItems((*reinterpret_cast< std::add_pointer_t<Kind>>(_a[1]))); break;
        case 7: _t->on_manage_kind_clicked(); break;
        case 8: _t->on_manage_out_clicked(); break;
        case 9: _t->on_manage_in_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< account_item* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *manage_account_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manage_account_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmanage_account_pageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int manage_account_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
