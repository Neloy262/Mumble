/****************************************************************************
** Meta object code from reading C++ file 'Zeroconf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/Zeroconf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Zeroconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Zeroconf_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Zeroconf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Zeroconf_t qt_meta_stringdata_Zeroconf = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Zeroconf"
QT_MOC_LITERAL(1, 9, 14), // "recordsChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "QList<BonjourRecord>"
QT_MOC_LITERAL(4, 46, 7), // "records"
QT_MOC_LITERAL(5, 54, 14), // "recordResolved"
QT_MOC_LITERAL(6, 69, 13), // "BonjourRecord"
QT_MOC_LITERAL(7, 83, 6), // "record"
QT_MOC_LITERAL(8, 90, 8), // "hostname"
QT_MOC_LITERAL(9, 99, 8), // "uint16_t"
QT_MOC_LITERAL(10, 108, 4), // "port"
QT_MOC_LITERAL(11, 113, 12) // "resolveError"

    },
    "Zeroconf\0recordsChanged\0\0QList<BonjourRecord>\0"
    "records\0recordResolved\0BonjourRecord\0"
    "record\0hostname\0uint16_t\0port\0"
    "resolveError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Zeroconf[] = {

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
       5,    3,   32,    2, 0x06 /* Public */,
      11,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9,    7,    8,   10,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Zeroconf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Zeroconf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordsChanged((*reinterpret_cast< const QList<BonjourRecord>(*)>(_a[1]))); break;
        case 1: _t->recordResolved((*reinterpret_cast< const BonjourRecord(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const uint16_t(*)>(_a[3]))); break;
        case 2: _t->resolveError((*reinterpret_cast< const BonjourRecord(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<BonjourRecord> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BonjourRecord >(); break;
            }
            break;
        case 2:
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
            using _t = void (Zeroconf::*)(const QList<BonjourRecord> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Zeroconf::recordsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Zeroconf::*)(const BonjourRecord , const QString , const uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Zeroconf::recordResolved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Zeroconf::*)(const BonjourRecord );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Zeroconf::resolveError)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Zeroconf::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Zeroconf.data,
    qt_meta_data_Zeroconf,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Zeroconf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Zeroconf::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Zeroconf.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Zeroconf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Zeroconf::recordsChanged(const QList<BonjourRecord> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Zeroconf::recordResolved(const BonjourRecord _t1, const QString _t2, const uint16_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Zeroconf::resolveError(const BonjourRecord _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
