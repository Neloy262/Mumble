/****************************************************************************
** Meta object code from reading C++ file 'BonjourServiceResolver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../3rdparty/qqbonjour/BonjourServiceResolver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BonjourServiceResolver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BonjourServiceResolver_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BonjourServiceResolver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BonjourServiceResolver_t qt_meta_stringdata_BonjourServiceResolver = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BonjourServiceResolver"
QT_MOC_LITERAL(1, 23, 21), // "bonjourRecordResolved"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "BonjourRecord"
QT_MOC_LITERAL(4, 60, 6), // "record"
QT_MOC_LITERAL(5, 67, 8), // "hostname"
QT_MOC_LITERAL(6, 76, 4), // "port"
QT_MOC_LITERAL(7, 81, 5), // "error"
QT_MOC_LITERAL(8, 87, 19), // "DNSServiceErrorType"
QT_MOC_LITERAL(9, 107, 22) // "bonjourSocketReadyRead"

    },
    "BonjourServiceResolver\0bonjourRecordResolved\0"
    "\0BonjourRecord\0record\0hostname\0port\0"
    "error\0DNSServiceErrorType\0"
    "bonjourSocketReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BonjourServiceResolver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       7,    2,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BonjourServiceResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BonjourServiceResolver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bonjourRecordResolved((*reinterpret_cast< BonjourRecord(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->error((*reinterpret_cast< BonjourRecord(*)>(_a[1])),(*reinterpret_cast< DNSServiceErrorType(*)>(_a[2]))); break;
        case 2: _t->bonjourSocketReadyRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BonjourRecord >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BonjourRecord >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BonjourServiceResolver::*)(BonjourRecord , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BonjourServiceResolver::bonjourRecordResolved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BonjourServiceResolver::*)(BonjourRecord , DNSServiceErrorType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BonjourServiceResolver::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BonjourServiceResolver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BonjourServiceResolver.data,
    qt_meta_data_BonjourServiceResolver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BonjourServiceResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BonjourServiceResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BonjourServiceResolver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BonjourServiceResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BonjourServiceResolver::bonjourRecordResolved(BonjourRecord _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BonjourServiceResolver::error(BonjourRecord _t1, DNSServiceErrorType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
