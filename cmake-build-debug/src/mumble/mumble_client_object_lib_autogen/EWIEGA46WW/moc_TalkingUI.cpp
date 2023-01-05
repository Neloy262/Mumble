/****************************************************************************
** Meta object code from reading C++ file 'TalkingUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/TalkingUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TalkingUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TalkingUI_t {
    QByteArrayData data[25];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TalkingUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TalkingUI_t qt_meta_stringdata_TalkingUI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TalkingUI"
QT_MOC_LITERAL(1, 10, 22), // "on_talkingStateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "on_mainWindowSelectionChanged"
QT_MOC_LITERAL(4, 64, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 76, 7), // "current"
QT_MOC_LITERAL(6, 84, 8), // "previous"
QT_MOC_LITERAL(7, 93, 21), // "on_serverSynchronized"
QT_MOC_LITERAL(8, 115, 21), // "on_serverDisconnected"
QT_MOC_LITERAL(9, 137, 17), // "on_channelChanged"
QT_MOC_LITERAL(10, 155, 4), // "user"
QT_MOC_LITERAL(11, 160, 18), // "on_settingsChanged"
QT_MOC_LITERAL(12, 179, 21), // "on_clientDisconnected"
QT_MOC_LITERAL(13, 201, 11), // "userSession"
QT_MOC_LITERAL(14, 213, 23), // "on_muteDeafStateChanged"
QT_MOC_LITERAL(15, 237, 36), // "on_userLocalVolumeAdjustments..."
QT_MOC_LITERAL(16, 274, 13), // "newAdjustment"
QT_MOC_LITERAL(17, 288, 13), // "oldAdjustment"
QT_MOC_LITERAL(18, 302, 23), // "on_channelListenerAdded"
QT_MOC_LITERAL(19, 326, 17), // "const ClientUser*"
QT_MOC_LITERAL(20, 344, 14), // "const Channel*"
QT_MOC_LITERAL(21, 359, 7), // "channel"
QT_MOC_LITERAL(22, 367, 25), // "on_channelListenerRemoved"
QT_MOC_LITERAL(23, 393, 46), // "on_channelListenerLocalVolume..."
QT_MOC_LITERAL(24, 440, 9) // "channelID"

    },
    "TalkingUI\0on_talkingStateChanged\0\0"
    "on_mainWindowSelectionChanged\0QModelIndex\0"
    "current\0previous\0on_serverSynchronized\0"
    "on_serverDisconnected\0on_channelChanged\0"
    "user\0on_settingsChanged\0on_clientDisconnected\0"
    "userSession\0on_muteDeafStateChanged\0"
    "on_userLocalVolumeAdjustmentsChanged\0"
    "newAdjustment\0oldAdjustment\0"
    "on_channelListenerAdded\0const ClientUser*\0"
    "const Channel*\0channel\0on_channelListenerRemoved\0"
    "on_channelListenerLocalVolumeAdjustmentChanged\0"
    "channelID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TalkingUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    2,   75,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    1,   86,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,
      15,    2,   90,    2, 0x0a /* Public */,
      18,    2,   95,    2, 0x0a /* Public */,
      22,    2,  100,    2, 0x0a /* Public */,
      23,    3,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   16,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 20,   10,   21,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 20,   10,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float,   24,   16,   17,

       0        // eod
};

void TalkingUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TalkingUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_talkingStateChanged(); break;
        case 1: _t->on_mainWindowSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->on_serverSynchronized(); break;
        case 3: _t->on_serverDisconnected(); break;
        case 4: _t->on_channelChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->on_settingsChanged(); break;
        case 6: _t->on_clientDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->on_muteDeafStateChanged(); break;
        case 8: _t->on_userLocalVolumeAdjustmentsChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->on_channelListenerAdded((*reinterpret_cast< const ClientUser*(*)>(_a[1])),(*reinterpret_cast< const Channel*(*)>(_a[2]))); break;
        case 10: _t->on_channelListenerRemoved((*reinterpret_cast< const ClientUser*(*)>(_a[1])),(*reinterpret_cast< const Channel*(*)>(_a[2]))); break;
        case 11: _t->on_channelListenerLocalVolumeAdjustmentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TalkingUI::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TalkingUI.data,
    qt_meta_data_TalkingUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TalkingUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TalkingUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TalkingUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TalkingUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
