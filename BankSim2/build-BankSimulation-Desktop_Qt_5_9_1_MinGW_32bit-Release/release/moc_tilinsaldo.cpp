/****************************************************************************
** Meta object code from reading C++ file 'tilinsaldo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BankSimulation/tilinsaldo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilinsaldo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TilinSaldo_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TilinSaldo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TilinSaldo_t qt_meta_stringdata_TilinSaldo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TilinSaldo"
QT_MOC_LITERAL(1, 11, 16), // "sigPalaaTakaisin"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "takaisin"
QT_MOC_LITERAL(4, 38, 29) // "on_buttonKirjauduUlos_clicked"

    },
    "TilinSaldo\0sigPalaaTakaisin\0\0takaisin\0"
    "on_buttonKirjauduUlos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TilinSaldo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TilinSaldo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TilinSaldo *_t = static_cast<TilinSaldo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigPalaaTakaisin(); break;
        case 1: _t->takaisin(); break;
        case 2: _t->on_buttonKirjauduUlos_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TilinSaldo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TilinSaldo::sigPalaaTakaisin)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TilinSaldo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TilinSaldo.data,
      qt_meta_data_TilinSaldo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TilinSaldo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TilinSaldo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TilinSaldo.stringdata0))
        return static_cast<void*>(const_cast< TilinSaldo*>(this));
    return QWidget::qt_metacast(_clname);
}

int TilinSaldo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TilinSaldo::sigPalaaTakaisin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
