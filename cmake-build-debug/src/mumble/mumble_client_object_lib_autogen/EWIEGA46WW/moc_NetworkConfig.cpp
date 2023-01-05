/****************************************************************************
** Meta object code from reading C++ file 'NetworkConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/NetworkConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkConfig_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkConfig_t qt_meta_stringdata_NetworkConfig = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkConfig"
QT_MOC_LITERAL(1, 14, 6), // "accept"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "save"
QT_MOC_LITERAL(4, 27, 4), // "load"
QT_MOC_LITERAL(5, 32, 8), // "Settings"
QT_MOC_LITERAL(6, 41, 1), // "r"
QT_MOC_LITERAL(7, 43, 30), // "on_qcbType_currentIndexChanged"
QT_MOC_LITERAL(8, 74, 1) // "v"

    },
    "NetworkConfig\0accept\0\0save\0load\0"
    "Settings\0r\0on_qcbType_currentIndexChanged\0"
    "v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void NetworkConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->save(); break;
        case 2: _t->load((*reinterpret_cast< const Settings(*)>(_a[1]))); break;
        case 3: _t->on_qcbType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkConfig::staticMetaObject = { {
    &ConfigWidget::staticMetaObject,
    qt_meta_stringdata_NetworkConfig.data,
    qt_meta_data_NetworkConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::NetworkConfig"))
        return static_cast< Ui::NetworkConfig*>(this);
    return ConfigWidget::qt_metacast(_clname);
}

int NetworkConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
