/****************************************************************************
** Meta object code from reading C++ file 'add_account_page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../add_account_page.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_account_page.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadd_account_pageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSadd_account_pageENDCLASS = QtMocHelpers::stringData(
    "add_account_page",
    "on_btnYes_clicked",
    "",
    "on_btnConfirm_clicked",
    "on_btnIn_clicked",
    "on_lineEdit_editingFinished",
    "on_btnOut_clicked",
    "on_lineEdit_2_editingFinished",
    "on_consume_clicked",
    "on_maintain_clicked",
    "on_social_clicked",
    "on_develop_clicked",
    "on_other_clicked",
    "on_dateTimeEdit_dateTimeChanged",
    "dateTime"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadd_account_pageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    0,   96,    2, 0x08,   11 /* Private */,
      13,    1,   97,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject add_account_page::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSadd_account_pageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadd_account_pageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadd_account_pageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<add_account_page, std::true_type>,
        // method 'on_btnYes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnConfirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnIn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnOut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_2_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_consume_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_maintain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_social_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_develop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_other_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateTimeEdit_dateTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>
    >,
    nullptr
} };

void add_account_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<add_account_page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnYes_clicked(); break;
        case 1: _t->on_btnConfirm_clicked(); break;
        case 2: _t->on_btnIn_clicked(); break;
        case 3: _t->on_lineEdit_editingFinished(); break;
        case 4: _t->on_btnOut_clicked(); break;
        case 5: _t->on_lineEdit_2_editingFinished(); break;
        case 6: _t->on_consume_clicked(); break;
        case 7: _t->on_maintain_clicked(); break;
        case 8: _t->on_social_clicked(); break;
        case 9: _t->on_develop_clicked(); break;
        case 10: _t->on_other_clicked(); break;
        case 11: _t->on_dateTimeEdit_dateTimeChanged((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *add_account_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_account_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadd_account_pageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int add_account_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
