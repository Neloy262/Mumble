/****************************************************************************
** Meta object code from reading C++ file 'MumbleServerIce.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/murmur/MumbleServerIce.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MumbleServerIce.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MumbleServerIce_t {
    QByteArrayData data[45];
    char stringdata0[538];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MumbleServerIce_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MumbleServerIce_t qt_meta_stringdata_MumbleServerIce = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MumbleServerIce"
QT_MOC_LITERAL(1, 16, 7), // "started"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "Server*"
QT_MOC_LITERAL(4, 33, 7), // "stopped"
QT_MOC_LITERAL(5, 41, 16), // "authenticateSlot"
QT_MOC_LITERAL(6, 58, 4), // "int&"
QT_MOC_LITERAL(7, 63, 3), // "res"
QT_MOC_LITERAL(8, 67, 8), // "QString&"
QT_MOC_LITERAL(9, 76, 5), // "uname"
QT_MOC_LITERAL(10, 82, 9), // "sessionId"
QT_MOC_LITERAL(11, 92, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(12, 115, 8), // "certlist"
QT_MOC_LITERAL(13, 124, 8), // "certhash"
QT_MOC_LITERAL(14, 133, 10), // "certstrong"
QT_MOC_LITERAL(15, 144, 2), // "pw"
QT_MOC_LITERAL(16, 147, 16), // "registerUserSlot"
QT_MOC_LITERAL(17, 164, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(18, 182, 18), // "unregisterUserSlot"
QT_MOC_LITERAL(19, 201, 2), // "id"
QT_MOC_LITERAL(20, 204, 22), // "getRegisteredUsersSlot"
QT_MOC_LITERAL(21, 227, 6), // "filter"
QT_MOC_LITERAL(22, 234, 18), // "QMap<int,QString>&"
QT_MOC_LITERAL(23, 253, 19), // "getRegistrationSlot"
QT_MOC_LITERAL(24, 273, 11), // "setInfoSlot"
QT_MOC_LITERAL(25, 285, 14), // "setTextureSlot"
QT_MOC_LITERAL(26, 300, 7), // "texture"
QT_MOC_LITERAL(27, 308, 12), // "nameToIdSlot"
QT_MOC_LITERAL(28, 321, 4), // "name"
QT_MOC_LITERAL(29, 326, 12), // "idToNameSlot"
QT_MOC_LITERAL(30, 339, 15), // "idToTextureSlot"
QT_MOC_LITERAL(31, 355, 11), // "QByteArray&"
QT_MOC_LITERAL(32, 367, 16), // "userStateChanged"
QT_MOC_LITERAL(33, 384, 11), // "const User*"
QT_MOC_LITERAL(34, 396, 1), // "p"
QT_MOC_LITERAL(35, 398, 15), // "userTextMessage"
QT_MOC_LITERAL(36, 414, 11), // "TextMessage"
QT_MOC_LITERAL(37, 426, 13), // "userConnected"
QT_MOC_LITERAL(38, 440, 16), // "userDisconnected"
QT_MOC_LITERAL(39, 457, 19), // "channelStateChanged"
QT_MOC_LITERAL(40, 477, 14), // "const Channel*"
QT_MOC_LITERAL(41, 492, 1), // "c"
QT_MOC_LITERAL(42, 494, 14), // "channelCreated"
QT_MOC_LITERAL(43, 509, 14), // "channelRemoved"
QT_MOC_LITERAL(44, 524, 13) // "contextAction"

    },
    "MumbleServerIce\0started\0\0Server*\0"
    "stopped\0authenticateSlot\0int&\0res\0"
    "QString&\0uname\0sessionId\0"
    "QList<QSslCertificate>\0certlist\0"
    "certhash\0certstrong\0pw\0registerUserSlot\0"
    "QMap<int,QString>\0unregisterUserSlot\0"
    "id\0getRegisteredUsersSlot\0filter\0"
    "QMap<int,QString>&\0getRegistrationSlot\0"
    "setInfoSlot\0setTextureSlot\0texture\0"
    "nameToIdSlot\0name\0idToNameSlot\0"
    "idToTextureSlot\0QByteArray&\0"
    "userStateChanged\0const User*\0p\0"
    "userTextMessage\0TextMessage\0userConnected\0"
    "userDisconnected\0channelStateChanged\0"
    "const Channel*\0c\0channelCreated\0"
    "channelRemoved\0contextAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MumbleServerIce[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x0a /* Public */,
       4,    1,  117,    2, 0x0a /* Public */,
       5,    7,  120,    2, 0x0a /* Public */,
      16,    2,  135,    2, 0x0a /* Public */,
      18,    2,  140,    2, 0x0a /* Public */,
      20,    2,  145,    2, 0x0a /* Public */,
      23,    3,  150,    2, 0x0a /* Public */,
      24,    3,  157,    2, 0x0a /* Public */,
      25,    3,  164,    2, 0x0a /* Public */,
      27,    2,  171,    2, 0x0a /* Public */,
      29,    2,  176,    2, 0x0a /* Public */,
      30,    2,  181,    2, 0x0a /* Public */,
      32,    1,  186,    2, 0x0a /* Public */,
      35,    2,  189,    2, 0x0a /* Public */,
      37,    1,  194,    2, 0x0a /* Public */,
      38,    1,  197,    2, 0x0a /* Public */,
      39,    1,  200,    2, 0x0a /* Public */,
      42,    1,  203,    2, 0x0a /* Public */,
      43,    1,  206,    2, 0x0a /* Public */,
      44,    4,  209,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Int, 0x80000000 | 11, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    7,    9,   10,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 17,    7,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 22,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 17,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, QMetaType::QByteArray,    7,   19,   26,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   28,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    7,   19,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Int,    7,   19,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 36,   34,    2,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 33, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    2,    2,    2,    2,

       0        // eod
};

void MumbleServerIce::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MumbleServerIce *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 1: _t->stopped((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 2: _t->authenticateSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 3: _t->registerUserSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[2]))); break;
        case 4: _t->unregisterUserSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->getRegisteredUsersSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[2]))); break;
        case 6: _t->getRegistrationSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 7: _t->setInfoSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[3]))); break;
        case 8: _t->setTextureSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 9: _t->nameToIdSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->idToNameSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->idToTextureSlot((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->userStateChanged((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 13: _t->userTextMessage((*reinterpret_cast< const User*(*)>(_a[1])),(*reinterpret_cast< const TextMessage(*)>(_a[2]))); break;
        case 14: _t->userConnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 15: _t->userDisconnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 16: _t->channelStateChanged((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 17: _t->channelCreated((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 18: _t->channelRemoved((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 19: _t->contextAction((*reinterpret_cast< const User*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MumbleServerIce::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MumbleServerIce.data,
    qt_meta_data_MumbleServerIce,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MumbleServerIce::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MumbleServerIce::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MumbleServerIce.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MumbleServerIce::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
