/****************************************************************************
** Meta object code from reading C++ file 'pincode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pincode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pincode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PinCode_t {
    QByteArrayData data[16];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PinCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PinCode_t qt_meta_stringdata_PinCode = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PinCode"
QT_MOC_LITERAL(1, 8, 19), // "sigBackToMainWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_button1_clicked"
QT_MOC_LITERAL(4, 48, 18), // "on_button2_clicked"
QT_MOC_LITERAL(5, 67, 18), // "on_button3_clicked"
QT_MOC_LITERAL(6, 86, 18), // "on_button4_clicked"
QT_MOC_LITERAL(7, 105, 18), // "on_button5_clicked"
QT_MOC_LITERAL(8, 124, 18), // "on_button6_clicked"
QT_MOC_LITERAL(9, 143, 18), // "on_button7_clicked"
QT_MOC_LITERAL(10, 162, 18), // "on_button8_clicked"
QT_MOC_LITERAL(11, 181, 18), // "on_button9_clicked"
QT_MOC_LITERAL(12, 200, 18), // "on_button0_clicked"
QT_MOC_LITERAL(13, 219, 22), // "on_buttonClear_clicked"
QT_MOC_LITERAL(14, 242, 22), // "on_buttonEnter_clicked"
QT_MOC_LITERAL(15, 265, 21) // "on_buttonBack_clicked"

    },
    "PinCode\0sigBackToMainWindow\0\0"
    "on_button1_clicked\0on_button2_clicked\0"
    "on_button3_clicked\0on_button4_clicked\0"
    "on_button5_clicked\0on_button6_clicked\0"
    "on_button7_clicked\0on_button8_clicked\0"
    "on_button9_clicked\0on_button0_clicked\0"
    "on_buttonClear_clicked\0on_buttonEnter_clicked\0"
    "on_buttonBack_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PinCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PinCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PinCode *_t = static_cast<PinCode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigBackToMainWindow(); break;
        case 1: _t->on_button1_clicked(); break;
        case 2: _t->on_button2_clicked(); break;
        case 3: _t->on_button3_clicked(); break;
        case 4: _t->on_button4_clicked(); break;
        case 5: _t->on_button5_clicked(); break;
        case 6: _t->on_button6_clicked(); break;
        case 7: _t->on_button7_clicked(); break;
        case 8: _t->on_button8_clicked(); break;
        case 9: _t->on_button9_clicked(); break;
        case 10: _t->on_button0_clicked(); break;
        case 11: _t->on_buttonClear_clicked(); break;
        case 12: _t->on_buttonEnter_clicked(); break;
        case 13: _t->on_buttonBack_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PinCode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PinCode::sigBackToMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PinCode::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PinCode.data,
      qt_meta_data_PinCode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PinCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PinCode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PinCode.stringdata0))
        return static_cast<void*>(const_cast< PinCode*>(this));
    return QWidget::qt_metacast(_clname);
}

int PinCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PinCode::sigBackToMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
