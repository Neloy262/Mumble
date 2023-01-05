/****************************************************************************
** Meta object code from reading C++ file 'LCD.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/LCD.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LCD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LCDConfig_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCDConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCDConfig_t qt_meta_stringdata_LCDConfig = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LCDConfig"
QT_MOC_LITERAL(1, 10, 29), // "on_qsMinColWidth_valueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 1), // "v"
QT_MOC_LITERAL(4, 43, 31), // "on_qsSplitterWidth_valueChanged"
QT_MOC_LITERAL(5, 75, 6), // "accept"
QT_MOC_LITERAL(6, 82, 4), // "save"
QT_MOC_LITERAL(7, 87, 4), // "load"
QT_MOC_LITERAL(8, 92, 8), // "Settings"
QT_MOC_LITERAL(9, 101, 1) // "r"

    },
    "LCDConfig\0on_qsMinColWidth_valueChanged\0"
    "\0v\0on_qsSplitterWidth_valueChanged\0"
    "accept\0save\0load\0Settings\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCDConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void LCDConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCDConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_qsMinColWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_qsSplitterWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->accept(); break;
        case 3: _t->save(); break;
        case 4: _t->load((*reinterpret_cast< const Settings(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LCDConfig::staticMetaObject = { {
    &ConfigWidget::staticMetaObject,
    qt_meta_stringdata_LCDConfig.data,
    qt_meta_data_LCDConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LCDConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCDConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCDConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::LCDConfig"))
        return static_cast< Ui::LCDConfig*>(this);
    return ConfigWidget::qt_metacast(_clname);
}

int LCDConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_LCDEngine_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCDEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCDEngine_t qt_meta_stringdata_LCDEngine = {
    {
QT_MOC_LITERAL(0, 0, 9) // "LCDEngine"

    },
    "LCDEngine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCDEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LCDEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LCDEngine::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LCDEngine.data,
    qt_meta_data_LCDEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LCDEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCDEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCDEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LCDEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LCD_t {
    QByteArrayData data[3];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCD_t qt_meta_stringdata_LCD = {
    {
QT_MOC_LITERAL(0, 0, 3), // "LCD"
QT_MOC_LITERAL(1, 4, 4), // "tick"
QT_MOC_LITERAL(2, 9, 0) // ""

    },
    "LCD\0tick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCD[] = {

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

void LCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LCD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LCD::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LCD.data,
    qt_meta_data_LCD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
