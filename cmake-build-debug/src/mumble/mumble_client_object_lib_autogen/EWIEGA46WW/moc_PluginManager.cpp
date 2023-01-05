/****************************************************************************
** Meta object code from reading C++ file 'PluginManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/PluginManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginManager_t {
    QByteArrayData data[61];
    char stringdata0[859];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginManager_t qt_meta_stringdata_PluginManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PluginManager"
QT_MOC_LITERAL(1, 14, 8), // "keyEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "key"
QT_MOC_LITERAL(4, 28, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 50, 9), // "modifiers"
QT_MOC_LITERAL(6, 60, 7), // "isPress"
QT_MOC_LITERAL(7, 68, 14), // "pluginLostLink"
QT_MOC_LITERAL(8, 83, 18), // "mumble_plugin_id_t"
QT_MOC_LITERAL(9, 102, 8), // "pluginID"
QT_MOC_LITERAL(10, 111, 12), // "pluginLinked"
QT_MOC_LITERAL(11, 124, 31), // "pluginEncounteredPermanentError"
QT_MOC_LITERAL(12, 156, 13), // "rescanPlugins"
QT_MOC_LITERAL(13, 170, 14), // "on_receiveData"
QT_MOC_LITERAL(14, 185, 17), // "const ClientUser*"
QT_MOC_LITERAL(15, 203, 6), // "sender"
QT_MOC_LITERAL(16, 210, 14), // "const uint8_t*"
QT_MOC_LITERAL(17, 225, 4), // "data"
QT_MOC_LITERAL(18, 230, 6), // "size_t"
QT_MOC_LITERAL(19, 237, 10), // "dataLength"
QT_MOC_LITERAL(20, 248, 11), // "const char*"
QT_MOC_LITERAL(21, 260, 6), // "dataID"
QT_MOC_LITERAL(22, 267, 18), // "on_serverConnected"
QT_MOC_LITERAL(23, 286, 21), // "on_serverDisconnected"
QT_MOC_LITERAL(24, 308, 17), // "on_channelEntered"
QT_MOC_LITERAL(25, 326, 14), // "const Channel*"
QT_MOC_LITERAL(26, 341, 10), // "newChannel"
QT_MOC_LITERAL(27, 352, 11), // "prevChannel"
QT_MOC_LITERAL(28, 364, 11), // "const User*"
QT_MOC_LITERAL(29, 376, 4), // "user"
QT_MOC_LITERAL(30, 381, 16), // "on_channelExited"
QT_MOC_LITERAL(31, 398, 7), // "channel"
QT_MOC_LITERAL(32, 406, 26), // "on_userTalkingStateChanged"
QT_MOC_LITERAL(33, 433, 13), // "on_audioInput"
QT_MOC_LITERAL(34, 447, 6), // "short*"
QT_MOC_LITERAL(35, 454, 8), // "inputPCM"
QT_MOC_LITERAL(36, 463, 11), // "sampleCount"
QT_MOC_LITERAL(37, 475, 12), // "channelCount"
QT_MOC_LITERAL(38, 488, 10), // "sampleRate"
QT_MOC_LITERAL(39, 499, 8), // "isSpeech"
QT_MOC_LITERAL(40, 508, 21), // "on_audioSourceFetched"
QT_MOC_LITERAL(41, 530, 6), // "float*"
QT_MOC_LITERAL(42, 537, 9), // "outputPCM"
QT_MOC_LITERAL(43, 547, 25), // "on_audioOutputAboutToPlay"
QT_MOC_LITERAL(44, 573, 5), // "bool*"
QT_MOC_LITERAL(45, 579, 13), // "modifiedAudio"
QT_MOC_LITERAL(46, 593, 21), // "on_serverSynchronized"
QT_MOC_LITERAL(47, 615, 12), // "on_userAdded"
QT_MOC_LITERAL(48, 628, 6), // "userID"
QT_MOC_LITERAL(49, 635, 14), // "on_userRemoved"
QT_MOC_LITERAL(50, 650, 15), // "on_channelAdded"
QT_MOC_LITERAL(51, 666, 9), // "channelID"
QT_MOC_LITERAL(52, 676, 17), // "on_channelRemoved"
QT_MOC_LITERAL(53, 694, 17), // "on_channelRenamed"
QT_MOC_LITERAL(54, 712, 11), // "on_keyEvent"
QT_MOC_LITERAL(55, 724, 21), // "on_syncPositionalData"
QT_MOC_LITERAL(56, 746, 19), // "on_updatesAvailable"
QT_MOC_LITERAL(57, 766, 37), // "checkForAvailablePositionalDa..."
QT_MOC_LITERAL(58, 804, 14), // "reportLostLink"
QT_MOC_LITERAL(59, 819, 18), // "reportPluginLinked"
QT_MOC_LITERAL(60, 838, 20) // "reportPermanentError"

    },
    "PluginManager\0keyEvent\0\0key\0"
    "Qt::KeyboardModifiers\0modifiers\0isPress\0"
    "pluginLostLink\0mumble_plugin_id_t\0"
    "pluginID\0pluginLinked\0"
    "pluginEncounteredPermanentError\0"
    "rescanPlugins\0on_receiveData\0"
    "const ClientUser*\0sender\0const uint8_t*\0"
    "data\0size_t\0dataLength\0const char*\0"
    "dataID\0on_serverConnected\0"
    "on_serverDisconnected\0on_channelEntered\0"
    "const Channel*\0newChannel\0prevChannel\0"
    "const User*\0user\0on_channelExited\0"
    "channel\0on_userTalkingStateChanged\0"
    "on_audioInput\0short*\0inputPCM\0sampleCount\0"
    "channelCount\0sampleRate\0isSpeech\0"
    "on_audioSourceFetched\0float*\0outputPCM\0"
    "on_audioOutputAboutToPlay\0bool*\0"
    "modifiedAudio\0on_serverSynchronized\0"
    "on_userAdded\0userID\0on_userRemoved\0"
    "on_channelAdded\0channelID\0on_channelRemoved\0"
    "on_channelRenamed\0on_keyEvent\0"
    "on_syncPositionalData\0on_updatesAvailable\0"
    "checkForAvailablePositionalDataPlugin\0"
    "reportLostLink\0reportPluginLinked\0"
    "reportPermanentError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  149,    2, 0x06 /* Public */,
       7,    1,  156,    2, 0x06 /* Public */,
      10,    1,  159,    2, 0x06 /* Public */,
      11,    1,  162,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  165,    2, 0x0a /* Public */,
      13,    4,  166,    2, 0x0a /* Public */,
      22,    0,  175,    2, 0x0a /* Public */,
      23,    0,  176,    2, 0x0a /* Public */,
      24,    3,  177,    2, 0x0a /* Public */,
      30,    2,  184,    2, 0x0a /* Public */,
      32,    0,  189,    2, 0x0a /* Public */,
      33,    5,  190,    2, 0x0a /* Public */,
      40,    6,  201,    2, 0x0a /* Public */,
      43,    5,  214,    2, 0x0a /* Public */,
      46,    0,  225,    2, 0x0a /* Public */,
      47,    1,  226,    2, 0x0a /* Public */,
      49,    1,  229,    2, 0x0a /* Public */,
      50,    1,  232,    2, 0x0a /* Public */,
      52,    1,  235,    2, 0x0a /* Public */,
      53,    1,  238,    2, 0x0a /* Public */,
      54,    3,  241,    2, 0x0a /* Public */,
      55,    0,  248,    2, 0x0a /* Public */,
      56,    0,  249,    2, 0x0a /* Public */,
      57,    0,  250,    2, 0x09 /* Protected */,
      58,    1,  251,    2, 0x09 /* Protected */,
      59,    1,  254,    2, 0x09 /* Protected */,
      60,    1,  257,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::Bool,    3,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20,   15,   17,   19,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25, 0x80000000 | 28,   26,   27,   29,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 28,   31,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool,   35,   36,   37,   38,   39,
    QMetaType::Void, 0x80000000 | 41, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, 0x80000000 | 14,   42,   36,   37,   38,   39,   29,
    QMetaType::Void, 0x80000000 | 41, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 44,   42,   36,   37,   38,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   48,
    QMetaType::Void, QMetaType::UInt,   48,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::Bool,    3,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->pluginLostLink((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        case 2: _t->pluginLinked((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        case 3: _t->pluginEncounteredPermanentError((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        case 4: _t->rescanPlugins(); break;
        case 5: _t->on_receiveData((*reinterpret_cast< const ClientUser*(*)>(_a[1])),(*reinterpret_cast< const uint8_t*(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4]))); break;
        case 6: _t->on_serverConnected(); break;
        case 7: _t->on_serverDisconnected(); break;
        case 8: _t->on_channelEntered((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const Channel*(*)>(_a[2])),(*reinterpret_cast< const User*(*)>(_a[3]))); break;
        case 9: _t->on_channelExited((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const User*(*)>(_a[2]))); break;
        case 10: _t->on_userTalkingStateChanged(); break;
        case 11: _t->on_audioInput((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 12: _t->on_audioSourceFetched((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const ClientUser*(*)>(_a[6]))); break;
        case 13: _t->on_audioOutputAboutToPlay((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5]))); break;
        case 14: _t->on_serverSynchronized(); break;
        case 15: _t->on_userAdded((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->on_userRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: _t->on_channelAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_channelRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_channelRenamed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->on_syncPositionalData(); break;
        case 22: _t->on_updatesAvailable(); break;
        case 23: _t->checkForAvailablePositionalDataPlugin(); break;
        case 24: _t->reportLostLink((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        case 25: _t->reportPluginLinked((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        case 26: _t->reportPermanentError((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginManager::*)(unsigned int , Qt::KeyboardModifiers , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::keyEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)(mumble_plugin_id_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::pluginLostLink)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)(mumble_plugin_id_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::pluginLinked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PluginManager::*)(mumble_plugin_id_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::pluginEncounteredPermanentError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PluginManager.data,
    qt_meta_data_PluginManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void PluginManager::keyEvent(unsigned int _t1, Qt::KeyboardModifiers _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginManager::pluginLostLink(mumble_plugin_id_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PluginManager::pluginLinked(mumble_plugin_id_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PluginManager::pluginEncounteredPermanentError(mumble_plugin_id_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
