/****************************************************************************
** Meta object code from reading C++ file 'Channel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/Channel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Channel_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Channel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Channel_t qt_meta_stringdata_Channel = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Channel"
QT_MOC_LITERAL(1, 8, 14), // "channelEntered"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "const Channel*"
QT_MOC_LITERAL(4, 39, 10), // "newChannel"
QT_MOC_LITERAL(5, 50, 11), // "prevChannel"
QT_MOC_LITERAL(6, 62, 11), // "const User*"
QT_MOC_LITERAL(7, 74, 4), // "user"
QT_MOC_LITERAL(8, 79, 13), // "channelExited"
QT_MOC_LITERAL(9, 93, 7) // "channel"

    },
    "Channel\0channelEntered\0\0const Channel*\0"
    "newChannel\0prevChannel\0const User*\0"
    "user\0channelExited\0channel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Channel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       8,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    9,    7,

       0        // eod
};

void Channel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Channel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelEntered((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const Channel*(*)>(_a[2])),(*reinterpret_cast< const User*(*)>(_a[3]))); break;
        case 1: _t->channelExited((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const User*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Channel::*)(const Channel * , const Channel * , const User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Channel::channelEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Channel::*)(const Channel * , const User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Channel::channelExited)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Channel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Channel.data,
    qt_meta_data_Channel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Channel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Channel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Channel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Channel::channelEntered(const Channel * _t1, const Channel * _t2, const User * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Channel::channelExited(const Channel * _t1, const User * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
