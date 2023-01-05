/****************************************************************************
** Meta object code from reading C++ file 'DBus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/DBus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MumbleDBus_t {
    QByteArrayData data[24];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MumbleDBus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MumbleDBus_t qt_meta_stringdata_MumbleDBus = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MumbleDBus"
QT_MOC_LITERAL(1, 11, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 27, 29), // "net.sourceforge.mumble.Mumble"
QT_MOC_LITERAL(3, 57, 7), // "openUrl"
QT_MOC_LITERAL(4, 65, 0), // ""
QT_MOC_LITERAL(5, 66, 3), // "url"
QT_MOC_LITERAL(6, 70, 12), // "QDBusMessage"
QT_MOC_LITERAL(7, 83, 13), // "getCurrentUrl"
QT_MOC_LITERAL(8, 97, 15), // "getTalkingUsers"
QT_MOC_LITERAL(9, 113, 5), // "focus"
QT_MOC_LITERAL(10, 119, 15), // "setTransmitMode"
QT_MOC_LITERAL(11, 135, 4), // "mode"
QT_MOC_LITERAL(12, 140, 15), // "getTransmitMode"
QT_MOC_LITERAL(13, 156, 15), // "toggleSelfMuted"
QT_MOC_LITERAL(14, 172, 14), // "toggleSelfDeaf"
QT_MOC_LITERAL(15, 187, 12), // "setSelfMuted"
QT_MOC_LITERAL(16, 200, 4), // "mute"
QT_MOC_LITERAL(17, 205, 11), // "setSelfDeaf"
QT_MOC_LITERAL(18, 217, 6), // "deafen"
QT_MOC_LITERAL(19, 224, 11), // "isSelfMuted"
QT_MOC_LITERAL(20, 236, 10), // "isSelfDeaf"
QT_MOC_LITERAL(21, 247, 12), // "startTalking"
QT_MOC_LITERAL(22, 260, 11), // "stopTalking"
QT_MOC_LITERAL(23, 272, 4) // "deaf"

    },
    "MumbleDBus\0D-Bus Interface\0"
    "net.sourceforge.mumble.Mumble\0openUrl\0"
    "\0url\0QDBusMessage\0getCurrentUrl\0"
    "getTalkingUsers\0focus\0setTransmitMode\0"
    "mode\0getTransmitMode\0toggleSelfMuted\0"
    "toggleSelfDeaf\0setSelfMuted\0mute\0"
    "setSelfDeaf\0deafen\0isSelfMuted\0"
    "isSelfDeaf\0startTalking\0stopTalking\0"
    "deaf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MumbleDBus[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
       2,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   86,    4, 0x0a /* Public */,
       7,    1,   91,    4, 0x0a /* Public */,
       8,    1,   94,    4, 0x0a /* Public */,
       9,    0,   97,    4, 0x0a /* Public */,
      10,    2,   98,    4, 0x0a /* Public */,
      12,    0,  103,    4, 0x0a /* Public */,
      13,    0,  104,    4, 0x0a /* Public */,
      14,    0,  105,    4, 0x0a /* Public */,
      15,    1,  106,    4, 0x0a /* Public */,
      17,    1,  109,    4, 0x0a /* Public */,
      19,    0,  112,    4, 0x0a /* Public */,
      20,    0,  113,    4, 0x0a /* Public */,
      21,    0,  114,    4, 0x0a /* Public */,
      22,    0,  115,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,   11,    4,
    QMetaType::UInt,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095003,
      23, QMetaType::Bool, 0x00095003,

       0        // eod
};

void MumbleDBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MumbleDBus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 1: _t->getCurrentUrl((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 2: _t->getTalkingUsers((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 3: _t->focus(); break;
        case 4: _t->setTransmitMode((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 5: { uint _r = _t->getTransmitMode();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->toggleSelfMuted(); break;
        case 7: _t->toggleSelfDeaf(); break;
        case 8: _t->setSelfMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setSelfDeaf((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { bool _r = _t->isSelfMuted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isSelfDeaf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->startTalking(); break;
        case 13: _t->stopTalking(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MumbleDBus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSelfMuted(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSelfDeaf(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MumbleDBus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelfMuted(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSelfDeaf(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MumbleDBus::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_MumbleDBus.data,
    qt_meta_data_MumbleDBus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MumbleDBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MumbleDBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MumbleDBus.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MumbleDBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
