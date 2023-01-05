/****************************************************************************
** Meta object code from reading C++ file 'Meta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/murmur/Meta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Meta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Meta_t {
    QByteArrayData data[13];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Meta_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Meta_t qt_meta_stringdata_Meta = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Meta"
QT_MOC_LITERAL(1, 5, 7), // "started"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "Server*"
QT_MOC_LITERAL(4, 22, 7), // "stopped"
QT_MOC_LITERAL(5, 30, 10), // "getVersion"
QT_MOC_LITERAL(6, 41, 21), // "Version::component_t&"
QT_MOC_LITERAL(7, 63, 5), // "major"
QT_MOC_LITERAL(8, 69, 5), // "minor"
QT_MOC_LITERAL(9, 75, 5), // "patch"
QT_MOC_LITERAL(10, 81, 8), // "QString&"
QT_MOC_LITERAL(11, 90, 6), // "string"
QT_MOC_LITERAL(12, 97, 3) // "val"

    },
    "Meta\0started\0\0Server*\0stopped\0getVersion\0"
    "Version::component_t&\0major\0minor\0"
    "patch\0QString&\0string\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Meta[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    5,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 10, QMetaType::Bool,    7,    8,    9,   11,   12,

       0        // eod
};

void Meta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Meta *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 1: _t->stopped((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 2: _t->getVersion((*reinterpret_cast< Version::component_t(*)>(_a[1])),(*reinterpret_cast< Version::component_t(*)>(_a[2])),(*reinterpret_cast< Version::component_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Meta::*)(Server * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Meta::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Meta::*)(Server * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Meta::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Meta::*)(Version::component_t & , Version::component_t & , Version::component_t & , QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Meta::getVersion)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Meta::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Meta.data,
    qt_meta_data_Meta,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Meta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Meta::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Meta.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Meta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Meta::started(Server * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Meta::stopped(Server * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Meta::getVersion(Version::component_t & _t1, Version::component_t & _t2, Version::component_t & _t3, QString & _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
