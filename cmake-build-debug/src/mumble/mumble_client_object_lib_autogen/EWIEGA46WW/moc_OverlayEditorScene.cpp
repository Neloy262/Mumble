/****************************************************************************
** Meta object code from reading C++ file 'OverlayEditorScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/OverlayEditorScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverlayEditorScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverlayEditorScene_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayEditorScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayEditorScene_t qt_meta_stringdata_OverlayEditorScene = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OverlayEditorScene"
QT_MOC_LITERAL(1, 19, 6), // "resync"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "updateSelected"
QT_MOC_LITERAL(4, 42, 11), // "updateMuted"
QT_MOC_LITERAL(5, 54, 14), // "updateUserName"
QT_MOC_LITERAL(6, 69, 13), // "updateChannel"
QT_MOC_LITERAL(7, 83, 12), // "updateAvatar"
QT_MOC_LITERAL(8, 96, 9), // "moveMuted"
QT_MOC_LITERAL(9, 106, 12), // "moveUserName"
QT_MOC_LITERAL(10, 119, 11), // "moveChannel"
QT_MOC_LITERAL(11, 131, 10), // "moveAvatar"
QT_MOC_LITERAL(12, 142, 7) // "moveBox"

    },
    "OverlayEditorScene\0resync\0\0updateSelected\0"
    "updateMuted\0updateUserName\0updateChannel\0"
    "updateAvatar\0moveMuted\0moveUserName\0"
    "moveChannel\0moveAvatar\0moveBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayEditorScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverlayEditorScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverlayEditorScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resync(); break;
        case 1: _t->updateSelected(); break;
        case 2: _t->updateMuted(); break;
        case 3: _t->updateUserName(); break;
        case 4: _t->updateChannel(); break;
        case 5: _t->updateAvatar(); break;
        case 6: _t->moveMuted(); break;
        case 7: _t->moveUserName(); break;
        case 8: _t->moveChannel(); break;
        case 9: _t->moveAvatar(); break;
        case 10: _t->moveBox(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OverlayEditorScene::staticMetaObject = { {
    &QGraphicsScene::staticMetaObject,
    qt_meta_stringdata_OverlayEditorScene.data,
    qt_meta_data_OverlayEditorScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverlayEditorScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayEditorScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayEditorScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int OverlayEditorScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
