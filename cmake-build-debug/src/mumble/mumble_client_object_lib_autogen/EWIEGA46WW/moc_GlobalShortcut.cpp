/****************************************************************************
** Meta object code from reading C++ file 'GlobalShortcut.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/GlobalShortcut.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlobalShortcut.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalShortcut_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalShortcut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalShortcut_t qt_meta_stringdata_GlobalShortcut = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GlobalShortcut"
QT_MOC_LITERAL(1, 15, 4), // "down"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9) // "triggered"

    },
    "GlobalShortcut\0down\0\0triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalShortcut[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,

       0        // eod
};

void GlobalShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcut *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->down((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalShortcut::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalShortcut::down)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GlobalShortcut::*)(bool , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalShortcut::triggered)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalShortcut::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GlobalShortcut.data,
    qt_meta_data_GlobalShortcut,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcut.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GlobalShortcut::down(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalShortcut::triggered(bool _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ShortcutActionWidget_t {
    QByteArrayData data[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutActionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutActionWidget_t qt_meta_stringdata_ShortcutActionWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ShortcutActionWidget"
QT_MOC_LITERAL(1, 21, 5) // "index"

    },
    "ShortcutActionWidget\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutActionWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::UInt, 0x00195103,

       0        // eod
};

void ShortcutActionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutActionWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShortcutActionWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndex(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShortcutActionWidget::staticMetaObject = { {
    &MUComboBox::staticMetaObject,
    qt_meta_stringdata_ShortcutActionWidget.data,
    qt_meta_data_ShortcutActionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutActionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutActionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutActionWidget.stringdata0))
        return static_cast<void*>(this);
    return MUComboBox::qt_metacast(_clname);
}

int ShortcutActionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MUComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ShortcutToggleWidget_t {
    QByteArrayData data[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutToggleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutToggleWidget_t qt_meta_stringdata_ShortcutToggleWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ShortcutToggleWidget"
QT_MOC_LITERAL(1, 21, 5) // "index"

    },
    "ShortcutToggleWidget\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutToggleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00195103,

       0        // eod
};

void ShortcutToggleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutToggleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShortcutToggleWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShortcutToggleWidget::staticMetaObject = { {
    &MUComboBox::staticMetaObject,
    qt_meta_stringdata_ShortcutToggleWidget.data,
    qt_meta_data_ShortcutToggleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutToggleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutToggleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutToggleWidget.stringdata0))
        return static_cast<void*>(this);
    return MUComboBox::qt_metacast(_clname);
}

int ShortcutToggleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MUComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ChannelSelectWidget_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChannelSelectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChannelSelectWidget_t qt_meta_stringdata_ChannelSelectWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ChannelSelectWidget"
QT_MOC_LITERAL(1, 20, 14), // "currentChannel"
QT_MOC_LITERAL(2, 35, 13) // "ChannelTarget"

    },
    "ChannelSelectWidget\0currentChannel\0"
    "ChannelTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelSelectWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0019510b,

       0        // eod
};

void ChannelSelectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelTarget >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChannelSelectWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChannelTarget*>(_v) = _t->currentChannel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ChannelSelectWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentChannel(*reinterpret_cast< ChannelTarget*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject ChannelSelectWidget::staticMetaObject = { {
    &MUComboBox::staticMetaObject,
    qt_meta_stringdata_ChannelSelectWidget.data,
    qt_meta_data_ChannelSelectWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChannelSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelSelectWidget.stringdata0))
        return static_cast<void*>(this);
    return MUComboBox::qt_metacast(_clname);
}

int ChannelSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MUComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ShortcutTargetDialog_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutTargetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutTargetDialog_t qt_meta_stringdata_ShortcutTargetDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ShortcutTargetDialog"
QT_MOC_LITERAL(1, 21, 6), // "accept"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 32), // "on_qcbTarget_currentIndexChanged"
QT_MOC_LITERAL(4, 62, 5), // "index"
QT_MOC_LITERAL(5, 68, 17), // "on_qpbAdd_clicked"
QT_MOC_LITERAL(6, 86, 20) // "on_qpbRemove_clicked"

    },
    "ShortcutTargetDialog\0accept\0\0"
    "on_qcbTarget_currentIndexChanged\0index\0"
    "on_qpbAdd_clicked\0on_qpbRemove_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutTargetDialog[] = {

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
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShortcutTargetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutTargetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_qcbTarget_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_qpbAdd_clicked(); break;
        case 3: _t->on_qpbRemove_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShortcutTargetDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ShortcutTargetDialog.data,
    qt_meta_data_ShortcutTargetDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutTargetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutTargetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutTargetDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GlobalShortcutTarget"))
        return static_cast< Ui::GlobalShortcutTarget*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShortcutTargetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ShortcutTargetWidget_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutTargetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutTargetWidget_t qt_meta_stringdata_ShortcutTargetWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ShortcutTargetWidget"
QT_MOC_LITERAL(1, 21, 18), // "on_qtbEdit_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "target"
QT_MOC_LITERAL(4, 48, 14) // "ShortcutTarget"

    },
    "ShortcutTargetWidget\0on_qtbEdit_clicked\0"
    "\0target\0ShortcutTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutTargetWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0019510b,

       0        // eod
};

void ShortcutTargetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutTargetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_qtbEdit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ShortcutTarget >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutTargetWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ShortcutTarget*>(_v) = _t->target(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShortcutTargetWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< ShortcutTarget*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ShortcutTargetWidget::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_ShortcutTargetWidget.data,
    qt_meta_data_ShortcutTargetWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutTargetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutTargetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutTargetWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ShortcutTargetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ShortcutDelegate_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutDelegate_t qt_meta_stringdata_ShortcutDelegate = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ShortcutDelegate"

    },
    "ShortcutDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutDelegate[] = {

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

void ShortcutDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShortcutDelegate::staticMetaObject = { {
    &QStyledItemDelegate::staticMetaObject,
    qt_meta_stringdata_ShortcutDelegate.data,
    qt_meta_data_ShortcutDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ShortcutDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GlobalShortcutConfig_t {
    QByteArrayData data[17];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalShortcutConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalShortcutConfig_t qt_meta_stringdata_GlobalShortcutConfig = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GlobalShortcutConfig"
QT_MOC_LITERAL(1, 21, 6), // "accept"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "save"
QT_MOC_LITERAL(4, 34, 4), // "load"
QT_MOC_LITERAL(5, 39, 8), // "Settings"
QT_MOC_LITERAL(6, 48, 1), // "r"
QT_MOC_LITERAL(7, 50, 6), // "reload"
QT_MOC_LITERAL(8, 57, 6), // "commit"
QT_MOC_LITERAL(9, 64, 40), // "on_qcbEnableGlobalShortcuts_s..."
QT_MOC_LITERAL(10, 105, 17), // "on_qpbAdd_clicked"
QT_MOC_LITERAL(11, 123, 20), // "on_qpbRemove_clicked"
QT_MOC_LITERAL(12, 144, 34), // "on_qtwShortcuts_currentItemCh..."
QT_MOC_LITERAL(13, 179, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 196, 27), // "on_qtwShortcuts_itemChanged"
QT_MOC_LITERAL(15, 224, 36), // "on_qpbOpenAccessibilityPrefs_..."
QT_MOC_LITERAL(16, 261, 25) // "on_qpbSkipWarning_clicked"

    },
    "GlobalShortcutConfig\0accept\0\0save\0"
    "load\0Settings\0r\0reload\0commit\0"
    "on_qcbEnableGlobalShortcuts_stateChanged\0"
    "on_qpbAdd_clicked\0on_qpbRemove_clicked\0"
    "on_qtwShortcuts_currentItemChanged\0"
    "QTreeWidgetItem*\0on_qtwShortcuts_itemChanged\0"
    "on_qpbOpenAccessibilityPrefs_clicked\0"
    "on_qpbSkipWarning_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalShortcutConfig[] = {

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
       3,    0,   75,    2, 0x0a /* Public */,
       4,    1,   76,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      12,    2,   90,    2, 0x0a /* Public */,
      14,    2,   95,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlobalShortcutConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->save(); break;
        case 2: _t->load((*reinterpret_cast< const Settings(*)>(_a[1]))); break;
        case 3: _t->reload(); break;
        case 4: _t->commit(); break;
        case 5: _t->on_qcbEnableGlobalShortcuts_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_qpbAdd_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_qpbRemove_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_qtwShortcuts_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 9: _t->on_qtwShortcuts_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_qpbOpenAccessibilityPrefs_clicked(); break;
        case 11: _t->on_qpbSkipWarning_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalShortcutConfig::staticMetaObject = { {
    &ConfigWidget::staticMetaObject,
    qt_meta_stringdata_GlobalShortcutConfig.data,
    qt_meta_data_GlobalShortcutConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalShortcutConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GlobalShortcut"))
        return static_cast< Ui::GlobalShortcut*>(this);
    return ConfigWidget::qt_metacast(_clname);
}

int GlobalShortcutConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_GlobalShortcutEngine_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalShortcutEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalShortcutEngine_t qt_meta_stringdata_GlobalShortcutEngine = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GlobalShortcutEngine"
QT_MOC_LITERAL(1, 21, 13), // "buttonPressed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4) // "last"

    },
    "GlobalShortcutEngine\0buttonPressed\0\0"
    "last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalShortcutEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void GlobalShortcutEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalShortcutEngine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalShortcutEngine::buttonPressed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalShortcutEngine::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_GlobalShortcutEngine.data,
    qt_meta_data_GlobalShortcutEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalShortcutEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutEngine.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int GlobalShortcutEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GlobalShortcutEngine::buttonPressed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
