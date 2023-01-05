/****************************************************************************
** Meta object code from reading C++ file 'CustomElements.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/CustomElements.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomElements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogTextBrowser_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogTextBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogTextBrowser_t qt_meta_stringdata_LogTextBrowser = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LogTextBrowser"

    },
    "LogTextBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogTextBrowser[] = {

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

void LogTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LogTextBrowser::staticMetaObject = { {
    &QTextBrowser::staticMetaObject,
    qt_meta_stringdata_LogTextBrowser.data,
    qt_meta_data_LogTextBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogTextBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int LogTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ChatbarTextEdit_t {
    QByteArrayData data[15];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatbarTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatbarTextEdit_t qt_meta_stringdata_ChatbarTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ChatbarTextEdit"
QT_MOC_LITERAL(1, 16, 10), // "tabPressed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "backtabPressed"
QT_MOC_LITERAL(4, 43, 16), // "ctrlSpacePressed"
QT_MOC_LITERAL(5, 60, 7), // "entered"
QT_MOC_LITERAL(6, 68, 16), // "ctrlEnterPressed"
QT_MOC_LITERAL(7, 85, 11), // "pastedImage"
QT_MOC_LITERAL(8, 97, 22), // "pasteAndSend_triggered"
QT_MOC_LITERAL(9, 120, 8), // "doResize"
QT_MOC_LITERAL(10, 129, 11), // "doScrollbar"
QT_MOC_LITERAL(11, 141, 12), // "addToHistory"
QT_MOC_LITERAL(12, 154, 3), // "str"
QT_MOC_LITERAL(13, 158, 9), // "historyUp"
QT_MOC_LITERAL(14, 168, 11) // "historyDown"

    },
    "ChatbarTextEdit\0tabPressed\0\0backtabPressed\0"
    "ctrlSpacePressed\0entered\0ctrlEnterPressed\0"
    "pastedImage\0pasteAndSend_triggered\0"
    "doResize\0doScrollbar\0addToHistory\0str\0"
    "historyUp\0historyDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatbarTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatbarTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatbarTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabPressed(); break;
        case 1: _t->backtabPressed(); break;
        case 2: _t->ctrlSpacePressed(); break;
        case 3: _t->entered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ctrlEnterPressed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->pastedImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->pasteAndSend_triggered(); break;
        case 7: _t->doResize(); break;
        case 8: _t->doScrollbar(); break;
        case 9: _t->addToHistory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->historyUp(); break;
        case 11: _t->historyDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatbarTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::tabPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatbarTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::backtabPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatbarTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::ctrlSpacePressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatbarTextEdit::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::entered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatbarTextEdit::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::ctrlEnterPressed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatbarTextEdit::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatbarTextEdit::pastedImage)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatbarTextEdit::staticMetaObject = { {
    &QTextEdit::staticMetaObject,
    qt_meta_stringdata_ChatbarTextEdit.data,
    qt_meta_data_ChatbarTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatbarTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatbarTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatbarTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int ChatbarTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ChatbarTextEdit::tabPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatbarTextEdit::backtabPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatbarTextEdit::ctrlSpacePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChatbarTextEdit::entered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatbarTextEdit::ctrlEnterPressed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChatbarTextEdit::pastedImage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_DockTitleBar_t {
    QByteArrayData data[3];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockTitleBar_t qt_meta_stringdata_DockTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DockTitleBar"
QT_MOC_LITERAL(1, 13, 4), // "tick"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "DockTitleBar\0tick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockTitleBar[] = {

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

void DockTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockTitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DockTitleBar::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_DockTitleBar.data,
    qt_meta_data_DockTitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockTitleBar.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int DockTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
