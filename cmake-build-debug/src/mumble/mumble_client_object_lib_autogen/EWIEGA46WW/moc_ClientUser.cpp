/****************************************************************************
** Meta object code from reading C++ file 'ClientUser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/ClientUser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientUser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientUser_t {
    QByteArrayData data[34];
    char stringdata0[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientUser_t qt_meta_stringdata_ClientUser = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClientUser"
QT_MOC_LITERAL(1, 11, 19), // "talkingStateChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "muteDeafStateChanged"
QT_MOC_LITERAL(4, 53, 27), // "prioritySpeakerStateChanged"
QT_MOC_LITERAL(5, 81, 21), // "recordingStateChanged"
QT_MOC_LITERAL(6, 103, 29), // "localVolumeAdjustmentsChanged"
QT_MOC_LITERAL(7, 133, 13), // "newAdjustment"
QT_MOC_LITERAL(8, 147, 13), // "oldAdjustment"
QT_MOC_LITERAL(9, 161, 20), // "localNicknameChanged"
QT_MOC_LITERAL(10, 182, 10), // "setTalking"
QT_MOC_LITERAL(11, 193, 19), // "Settings::TalkState"
QT_MOC_LITERAL(12, 213, 2), // "ts"
QT_MOC_LITERAL(13, 216, 7), // "setMute"
QT_MOC_LITERAL(14, 224, 4), // "mute"
QT_MOC_LITERAL(15, 229, 7), // "setDeaf"
QT_MOC_LITERAL(16, 237, 4), // "deaf"
QT_MOC_LITERAL(17, 242, 11), // "setSuppress"
QT_MOC_LITERAL(18, 254, 8), // "suppress"
QT_MOC_LITERAL(19, 263, 14), // "setLocalIgnore"
QT_MOC_LITERAL(20, 278, 6), // "ignore"
QT_MOC_LITERAL(21, 285, 17), // "setLocalIgnoreTTS"
QT_MOC_LITERAL(22, 303, 9), // "ignoreTTS"
QT_MOC_LITERAL(23, 313, 12), // "setLocalMute"
QT_MOC_LITERAL(24, 326, 11), // "setSelfMute"
QT_MOC_LITERAL(25, 338, 11), // "setSelfDeaf"
QT_MOC_LITERAL(26, 350, 18), // "setPrioritySpeaker"
QT_MOC_LITERAL(27, 369, 8), // "priority"
QT_MOC_LITERAL(28, 378, 12), // "setRecording"
QT_MOC_LITERAL(29, 391, 9), // "recording"
QT_MOC_LITERAL(30, 401, 24), // "setLocalVolumeAdjustment"
QT_MOC_LITERAL(31, 426, 10), // "adjustment"
QT_MOC_LITERAL(32, 437, 16), // "setLocalNickname"
QT_MOC_LITERAL(33, 454, 8) // "nickname"

    },
    "ClientUser\0talkingStateChanged\0\0"
    "muteDeafStateChanged\0prioritySpeakerStateChanged\0"
    "recordingStateChanged\0"
    "localVolumeAdjustmentsChanged\0"
    "newAdjustment\0oldAdjustment\0"
    "localNicknameChanged\0setTalking\0"
    "Settings::TalkState\0ts\0setMute\0mute\0"
    "setDeaf\0deaf\0setSuppress\0suppress\0"
    "setLocalIgnore\0ignore\0setLocalIgnoreTTS\0"
    "ignoreTTS\0setLocalMute\0setSelfMute\0"
    "setSelfDeaf\0setPrioritySpeaker\0priority\0"
    "setRecording\0recording\0setLocalVolumeAdjustment\0"
    "adjustment\0setLocalNickname\0nickname"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientUser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    2,  113,    2, 0x06 /* Public */,
       9,    0,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  119,    2, 0x0a /* Public */,
      13,    1,  122,    2, 0x0a /* Public */,
      15,    1,  125,    2, 0x0a /* Public */,
      17,    1,  128,    2, 0x0a /* Public */,
      19,    1,  131,    2, 0x0a /* Public */,
      21,    1,  134,    2, 0x0a /* Public */,
      23,    1,  137,    2, 0x0a /* Public */,
      24,    1,  140,    2, 0x0a /* Public */,
      25,    1,  143,    2, 0x0a /* Public */,
      26,    1,  146,    2, 0x0a /* Public */,
      28,    1,  149,    2, 0x0a /* Public */,
      30,    1,  152,    2, 0x0a /* Public */,
      32,    1,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, QMetaType::QString,   33,

       0        // eod
};

void ClientUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->talkingStateChanged(); break;
        case 1: _t->muteDeafStateChanged(); break;
        case 2: _t->prioritySpeakerStateChanged(); break;
        case 3: _t->recordingStateChanged(); break;
        case 4: _t->localVolumeAdjustmentsChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->localNicknameChanged(); break;
        case 6: _t->setTalking((*reinterpret_cast< Settings::TalkState(*)>(_a[1]))); break;
        case 7: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDeaf((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setSuppress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setLocalIgnore((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setLocalIgnoreTTS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setLocalMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setSelfMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setSelfDeaf((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setPrioritySpeaker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setRecording((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setLocalVolumeAdjustment((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setLocalNickname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientUser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::talkingStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientUser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::muteDeafStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientUser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::prioritySpeakerStateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientUser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::recordingStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientUser::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::localVolumeAdjustmentsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientUser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientUser::localNicknameChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientUser::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientUser.data,
    qt_meta_data_ClientUser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientUser.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "User"))
        return static_cast< User*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ClientUser::talkingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientUser::muteDeafStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientUser::prioritySpeakerStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClientUser::recordingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ClientUser::localVolumeAdjustmentsChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientUser::localNicknameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
