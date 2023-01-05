/****************************************************************************
** Meta object code from reading C++ file 'OverlayEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/OverlayEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverlayEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverlayEditor_t {
    QByteArrayData data[16];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayEditor_t qt_meta_stringdata_OverlayEditor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OverlayEditor"
QT_MOC_LITERAL(1, 14, 13), // "applySettings"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "reset"
QT_MOC_LITERAL(4, 35, 5), // "apply"
QT_MOC_LITERAL(5, 41, 6), // "accept"
QT_MOC_LITERAL(6, 48, 21), // "on_qrbPassive_clicked"
QT_MOC_LITERAL(7, 70, 21), // "on_qrbTalking_clicked"
QT_MOC_LITERAL(8, 92, 21), // "on_qrbWhisper_clicked"
QT_MOC_LITERAL(9, 114, 19), // "on_qrbShout_clicked"
QT_MOC_LITERAL(10, 134, 20), // "on_qcbAvatar_clicked"
QT_MOC_LITERAL(11, 155, 18), // "on_qcbUser_clicked"
QT_MOC_LITERAL(12, 174, 21), // "on_qcbChannel_clicked"
QT_MOC_LITERAL(13, 196, 27), // "on_qcbMutedDeafened_clicked"
QT_MOC_LITERAL(14, 224, 17), // "on_qcbBox_clicked"
QT_MOC_LITERAL(15, 242, 22) // "on_qsZoom_valueChanged"

    },
    "OverlayEditor\0applySettings\0\0reset\0"
    "apply\0accept\0on_qrbPassive_clicked\0"
    "on_qrbTalking_clicked\0on_qrbWhisper_clicked\0"
    "on_qrbShout_clicked\0on_qcbAvatar_clicked\0"
    "on_qcbUser_clicked\0on_qcbChannel_clicked\0"
    "on_qcbMutedDeafened_clicked\0"
    "on_qcbBox_clicked\0on_qsZoom_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void OverlayEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverlayEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applySettings(); break;
        case 1: _t->reset(); break;
        case 2: _t->apply(); break;
        case 3: _t->accept(); break;
        case 4: _t->on_qrbPassive_clicked(); break;
        case 5: _t->on_qrbTalking_clicked(); break;
        case 6: _t->on_qrbWhisper_clicked(); break;
        case 7: _t->on_qrbShout_clicked(); break;
        case 8: _t->on_qcbAvatar_clicked(); break;
        case 9: _t->on_qcbUser_clicked(); break;
        case 10: _t->on_qcbChannel_clicked(); break;
        case 11: _t->on_qcbMutedDeafened_clicked(); break;
        case 12: _t->on_qcbBox_clicked(); break;
        case 13: _t->on_qsZoom_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverlayEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverlayEditor::applySettings)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverlayEditor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_OverlayEditor.data,
    qt_meta_data_OverlayEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverlayEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::OverlayEditor"))
        return static_cast< Ui::OverlayEditor*>(this);
    return QDialog::qt_metacast(_clname);
}

int OverlayEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OverlayEditor::applySettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
