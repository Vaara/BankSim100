/****************************************************************************
** Meta object code from reading C++ file 'nostarahaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nostarahaa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nostarahaa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NostaRahaa_t {
    QByteArrayData data[13];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NostaRahaa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NostaRahaa_t qt_meta_stringdata_NostaRahaa = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NostaRahaa"
QT_MOC_LITERAL(1, 11, 16), // "sigPalaaTakaisin"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "on_buttonSyotaSumma_clicked"
QT_MOC_LITERAL(4, 57, 28), // "on_buttonPalaaAlkuun_clicked"
QT_MOC_LITERAL(5, 86, 24), // "on_buttonNosta20_clicked"
QT_MOC_LITERAL(6, 111, 24), // "on_buttonNosta40_clicked"
QT_MOC_LITERAL(7, 136, 24), // "on_buttonNosta60_clicked"
QT_MOC_LITERAL(8, 161, 24), // "on_buttonNosta90_clicked"
QT_MOC_LITERAL(9, 186, 25), // "on_buttonNosta140_clicked"
QT_MOC_LITERAL(10, 212, 25), // "on_buttonNosta240_clicked"
QT_MOC_LITERAL(11, 238, 8), // "takaisin"
QT_MOC_LITERAL(12, 247, 20) // "sloPalaaRahanNostoon"

    },
    "NostaRahaa\0sigPalaaTakaisin\0\0"
    "on_buttonSyotaSumma_clicked\0"
    "on_buttonPalaaAlkuun_clicked\0"
    "on_buttonNosta20_clicked\0"
    "on_buttonNosta40_clicked\0"
    "on_buttonNosta60_clicked\0"
    "on_buttonNosta90_clicked\0"
    "on_buttonNosta140_clicked\0"
    "on_buttonNosta240_clicked\0takaisin\0"
    "sloPalaaRahanNostoon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NostaRahaa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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

       0        // eod
};

void NostaRahaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NostaRahaa *_t = static_cast<NostaRahaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigPalaaTakaisin(); break;
        case 1: _t->on_buttonSyotaSumma_clicked(); break;
        case 2: _t->on_buttonPalaaAlkuun_clicked(); break;
        case 3: _t->on_buttonNosta20_clicked(); break;
        case 4: _t->on_buttonNosta40_clicked(); break;
        case 5: _t->on_buttonNosta60_clicked(); break;
        case 6: _t->on_buttonNosta90_clicked(); break;
        case 7: _t->on_buttonNosta140_clicked(); break;
        case 8: _t->on_buttonNosta240_clicked(); break;
        case 9: _t->takaisin(); break;
        case 10: _t->sloPalaaRahanNostoon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NostaRahaa::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NostaRahaa::sigPalaaTakaisin)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NostaRahaa::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NostaRahaa.data,
      qt_meta_data_NostaRahaa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NostaRahaa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NostaRahaa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NostaRahaa.stringdata0))
        return static_cast<void*>(const_cast< NostaRahaa*>(this));
    return QWidget::qt_metacast(_clname);
}

int NostaRahaa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NostaRahaa::sigPalaaTakaisin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
