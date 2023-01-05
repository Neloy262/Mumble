/****************************************************************************
** Meta object code from reading C++ file 'Log.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/Log.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogConfig_t {
    QByteArrayData data[18];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogConfig_t qt_meta_stringdata_LogConfig = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LogConfig"
QT_MOC_LITERAL(1, 10, 6), // "accept"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "save"
QT_MOC_LITERAL(4, 23, 4), // "load"
QT_MOC_LITERAL(5, 28, 8), // "Settings"
QT_MOC_LITERAL(6, 37, 26), // "on_qtwMessages_itemChanged"
QT_MOC_LITERAL(7, 64, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 81, 26), // "on_qtwMessages_itemClicked"
QT_MOC_LITERAL(9, 108, 32), // "on_qtwMessages_itemDoubleClicked"
QT_MOC_LITERAL(10, 141, 18), // "browseForAudioFile"
QT_MOC_LITERAL(11, 160, 36), // "on_qsNotificationVolume_value..."
QT_MOC_LITERAL(12, 197, 5), // "value"
QT_MOC_LITERAL(13, 203, 27), // "on_qsCueVolume_valueChanged"
QT_MOC_LITERAL(14, 231, 27), // "on_qsTTSVolume_valueChanged"
QT_MOC_LITERAL(15, 259, 37), // "on_qsbNotificationVolume_valu..."
QT_MOC_LITERAL(16, 297, 28), // "on_qsbCueVolume_valueChanged"
QT_MOC_LITERAL(17, 326, 28) // "on_qsbTTSVolume_valueChanged"

    },
    "LogConfig\0accept\0\0save\0load\0Settings\0"
    "on_qtwMessages_itemChanged\0QTreeWidgetItem*\0"
    "on_qtwMessages_itemClicked\0"
    "on_qtwMessages_itemDoubleClicked\0"
    "browseForAudioFile\0"
    "on_qsNotificationVolume_valueChanged\0"
    "value\0on_qsCueVolume_valueChanged\0"
    "on_qsTTSVolume_valueChanged\0"
    "on_qsbNotificationVolume_valueChanged\0"
    "on_qsbCueVolume_valueChanged\0"
    "on_qsbTTSVolume_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    1,   81,    2, 0x0a /* Public */,
       6,    2,   84,    2, 0x0a /* Public */,
       8,    2,   89,    2, 0x0a /* Public */,
       9,    2,   94,    2, 0x0a /* Public */,
      10,    0,   99,    2, 0x0a /* Public */,
      11,    1,  100,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      15,    1,  109,    2, 0x0a /* Public */,
      16,    1,  112,    2, 0x0a /* Public */,
      17,    1,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void LogConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->save(); break;
        case 2: _t->load((*reinterpret_cast< const Settings(*)>(_a[1]))); break;
        case 3: _t->on_qtwMessages_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_qtwMessages_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_qtwMessages_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->browseForAudioFile(); break;
        case 7: _t->on_qsNotificationVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_qsCueVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_qsTTSVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_qsbNotificationVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_qsbCueVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_qsbTTSVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogConfig::staticMetaObject = { {
    &ConfigWidget::staticMetaObject,
    qt_meta_stringdata_LogConfig.data,
    qt_meta_data_LogConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::LogConfig"))
        return static_cast< Ui::LogConfig*>(this);
    return ConfigWidget::qt_metacast(_clname);
}

int LogConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_Log_t {
    QByteArrayData data[11];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Log_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Log_t qt_meta_stringdata_Log = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Log"
QT_MOC_LITERAL(1, 4, 3), // "log"
QT_MOC_LITERAL(2, 8, 0), // ""
QT_MOC_LITERAL(3, 9, 12), // "Log::MsgType"
QT_MOC_LITERAL(4, 22, 2), // "mt"
QT_MOC_LITERAL(5, 25, 7), // "console"
QT_MOC_LITERAL(6, 33, 5), // "terse"
QT_MOC_LITERAL(7, 39, 10), // "ownMessage"
QT_MOC_LITERAL(8, 50, 11), // "overrideTTS"
QT_MOC_LITERAL(9, 62, 9), // "ignoreTTS"
QT_MOC_LITERAL(10, 72, 19) // "processDeferredLogs"

    },
    "Log\0log\0\0Log::MsgType\0mt\0console\0terse\0"
    "ownMessage\0overrideTTS\0ignoreTTS\0"
    "processDeferredLogs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Log[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   44,    2, 0x0a /* Public */,
       1,    5,   57,    2, 0x2a /* Public | MethodCloned */,
       1,    4,   68,    2, 0x2a /* Public | MethodCloned */,
       1,    3,   77,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   84,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,

       0        // eod
};

void Log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Log *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->log((*reinterpret_cast< Log::MsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: _t->log((*reinterpret_cast< Log::MsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 2: _t->log((*reinterpret_cast< Log::MsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->log((*reinterpret_cast< Log::MsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->log((*reinterpret_cast< Log::MsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->processDeferredLogs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Log::MsgType >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Log::MsgType >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Log::MsgType >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Log::MsgType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Log::MsgType >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Log::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Log.data,
    qt_meta_data_Log,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Log::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Log.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_LogDocument_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDocument_t qt_meta_stringdata_LogDocument = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LogDocument"
QT_MOC_LITERAL(1, 12, 8), // "finished"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "LogDocument\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDocument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LogDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LogDocument::staticMetaObject = { {
    &QTextDocument::staticMetaObject,
    qt_meta_stringdata_LogDocument.data,
    qt_meta_data_LogDocument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDocument.stringdata0))
        return static_cast<void*>(this);
    return QTextDocument::qt_metacast(_clname);
}

int LogDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextDocument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
