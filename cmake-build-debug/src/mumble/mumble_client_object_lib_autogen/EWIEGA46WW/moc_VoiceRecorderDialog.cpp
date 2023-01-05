/****************************************************************************
** Meta object code from reading C++ file 'VoiceRecorderDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/VoiceRecorderDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VoiceRecorderDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VoiceRecorderDialog_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VoiceRecorderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VoiceRecorderDialog_t qt_meta_stringdata_VoiceRecorderDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VoiceRecorderDialog"
QT_MOC_LITERAL(1, 20, 19), // "on_qpbStart_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "on_qpbStop_clicked"
QT_MOC_LITERAL(4, 60, 18), // "on_qtTimer_timeout"
QT_MOC_LITERAL(5, 79, 35), // "on_qpbTargetDirectoryBrowse_c..."
QT_MOC_LITERAL(6, 115, 17), // "onRecorderStopped"
QT_MOC_LITERAL(7, 133, 17), // "onRecorderStarted"
QT_MOC_LITERAL(8, 151, 15), // "onRecorderError"
QT_MOC_LITERAL(9, 167, 3), // "err"
QT_MOC_LITERAL(10, 171, 6), // "strerr"
QT_MOC_LITERAL(11, 178, 5), // "reset"
QT_MOC_LITERAL(12, 184, 10) // "resettimer"

    },
    "VoiceRecorderDialog\0on_qpbStart_clicked\0"
    "\0on_qpbStop_clicked\0on_qtTimer_timeout\0"
    "on_qpbTargetDirectoryBrowse_clicked\0"
    "onRecorderStopped\0onRecorderStarted\0"
    "onRecorderError\0err\0strerr\0reset\0"
    "resettimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VoiceRecorderDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    2,   65,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void VoiceRecorderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoiceRecorderDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_qpbStart_clicked(); break;
        case 1: _t->on_qpbStop_clicked(); break;
        case 2: _t->on_qtTimer_timeout(); break;
        case 3: _t->on_qpbTargetDirectoryBrowse_clicked(); break;
        case 4: _t->onRecorderStopped(); break;
        case 5: _t->onRecorderStarted(); break;
        case 6: _t->onRecorderError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->reset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VoiceRecorderDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_VoiceRecorderDialog.data,
    qt_meta_data_VoiceRecorderDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VoiceRecorderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoiceRecorderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VoiceRecorderDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VoiceRecorderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
