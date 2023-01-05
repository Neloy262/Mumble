/****************************************************************************
** Meta object code from reading C++ file 'OverlayUserGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/OverlayUserGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverlayUserGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverlayUserGroup_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayUserGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayUserGroup_t qt_meta_stringdata_OverlayUserGroup = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OverlayUserGroup"
QT_MOC_LITERAL(1, 17, 13), // "userDestroyed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "moveUsers"
QT_MOC_LITERAL(4, 42, 5), // "reset"
QT_MOC_LITERAL(5, 48, 11), // "updateUsers"
QT_MOC_LITERAL(6, 60, 12) // "updateLayout"

    },
    "OverlayUserGroup\0userDestroyed\0\0"
    "moveUsers\0reset\0updateUsers\0updateLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayUserGroup[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       3,    0,   42,    2, 0x09 /* Protected */,
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverlayUserGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverlayUserGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->moveUsers(); break;
        case 2: _t->reset(); break;
        case 3: _t->updateUsers(); break;
        case 4: _t->updateLayout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverlayUserGroup::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OverlayUserGroup.data,
    qt_meta_data_OverlayUserGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverlayUserGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayUserGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayUserGroup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "OverlayGroup"))
        return static_cast< OverlayGroup*>(this);
    return QObject::qt_metacast(_clname);
}

int OverlayUserGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
