/****************************************************************************
** Meta object code from reading C++ file 'RichTextEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/RichTextEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RichTextEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RichTextHtmlEdit_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RichTextHtmlEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RichTextHtmlEdit_t qt_meta_stringdata_RichTextHtmlEdit = {
    {
QT_MOC_LITERAL(0, 0, 16) // "RichTextHtmlEdit"

    },
    "RichTextHtmlEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RichTextHtmlEdit[] = {

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

void RichTextHtmlEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RichTextHtmlEdit::staticMetaObject = { {
    &QTextEdit::staticMetaObject,
    qt_meta_stringdata_RichTextHtmlEdit.data,
    qt_meta_data_RichTextHtmlEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RichTextHtmlEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RichTextHtmlEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RichTextHtmlEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int RichTextHtmlEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RichTextEditorLink_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RichTextEditorLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RichTextEditorLink_t qt_meta_stringdata_RichTextEditorLink = {
    {
QT_MOC_LITERAL(0, 0, 18) // "RichTextEditorLink"

    },
    "RichTextEditorLink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RichTextEditorLink[] = {

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

void RichTextEditorLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RichTextEditorLink::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_RichTextEditorLink.data,
    qt_meta_data_RichTextEditorLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RichTextEditorLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RichTextEditorLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RichTextEditorLink.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::RichTextEditorLink"))
        return static_cast< Ui::RichTextEditorLink*>(this);
    return QDialog::qt_metacast(_clname);
}

int RichTextEditorLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RichTextEditor_t {
    QByteArrayData data[19];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RichTextEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RichTextEditor_t qt_meta_stringdata_RichTextEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RichTextEditor"
QT_MOC_LITERAL(1, 15, 6), // "accept"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "setText"
QT_MOC_LITERAL(4, 31, 4), // "text"
QT_MOC_LITERAL(5, 36, 8), // "readonly"
QT_MOC_LITERAL(6, 45, 11), // "updateColor"
QT_MOC_LITERAL(7, 57, 13), // "updateActions"
QT_MOC_LITERAL(8, 71, 19), // "on_qaBold_triggered"
QT_MOC_LITERAL(9, 91, 21), // "on_qaItalic_triggered"
QT_MOC_LITERAL(10, 113, 24), // "on_qaUnderline_triggered"
QT_MOC_LITERAL(11, 138, 20), // "on_qaColor_triggered"
QT_MOC_LITERAL(12, 159, 19), // "on_qaLink_triggered"
QT_MOC_LITERAL(13, 179, 20), // "on_qaImage_triggered"
QT_MOC_LITERAL(14, 200, 28), // "on_qptePlainText_textChanged"
QT_MOC_LITERAL(15, 229, 26), // "on_qteRichText_textChanged"
QT_MOC_LITERAL(16, 256, 36), // "on_qteRichText_cursorPosition..."
QT_MOC_LITERAL(17, 293, 39), // "on_qteRichText_currentCharFor..."
QT_MOC_LITERAL(18, 333, 16) // "onCurrentChanged"

    },
    "RichTextEditor\0accept\0\0setText\0text\0"
    "readonly\0updateColor\0updateActions\0"
    "on_qaBold_triggered\0on_qaItalic_triggered\0"
    "on_qaUnderline_triggered\0on_qaColor_triggered\0"
    "on_qaLink_triggered\0on_qaImage_triggered\0"
    "on_qptePlainText_textChanged\0"
    "on_qteRichText_textChanged\0"
    "on_qteRichText_cursorPositionChanged\0"
    "on_qteRichText_currentCharFormatChanged\0"
    "onCurrentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RichTextEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   95,    2, 0x0a /* Public */,
       3,    1,  100,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  103,    2, 0x0a /* Public */,
       7,    0,  106,    2, 0x0a /* Public */,
       8,    1,  107,    2, 0x09 /* Protected */,
       9,    1,  110,    2, 0x09 /* Protected */,
      10,    1,  113,    2, 0x09 /* Protected */,
      11,    0,  116,    2, 0x09 /* Protected */,
      12,    0,  117,    2, 0x09 /* Protected */,
      13,    0,  118,    2, 0x09 /* Protected */,
      14,    0,  119,    2, 0x09 /* Protected */,
      15,    0,  120,    2, 0x09 /* Protected */,
      16,    0,  121,    2, 0x09 /* Protected */,
      17,    0,  122,    2, 0x09 /* Protected */,
      18,    1,  123,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
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

void RichTextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RichTextEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->updateActions(); break;
        case 5: _t->on_qaBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_qaItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_qaUnderline_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_qaColor_triggered(); break;
        case 9: _t->on_qaLink_triggered(); break;
        case 10: _t->on_qaImage_triggered(); break;
        case 11: _t->on_qptePlainText_textChanged(); break;
        case 12: _t->on_qteRichText_textChanged(); break;
        case 13: _t->on_qteRichText_cursorPositionChanged(); break;
        case 14: _t->on_qteRichText_currentCharFormatChanged(); break;
        case 15: _t->onCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RichTextEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RichTextEditor::accept)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RichTextEditor::staticMetaObject = { {
    &QTabWidget::staticMetaObject,
    qt_meta_stringdata_RichTextEditor.data,
    qt_meta_data_RichTextEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RichTextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RichTextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RichTextEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::RichTextEditor"))
        return static_cast< Ui::RichTextEditor*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int RichTextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void RichTextEditor::accept()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
