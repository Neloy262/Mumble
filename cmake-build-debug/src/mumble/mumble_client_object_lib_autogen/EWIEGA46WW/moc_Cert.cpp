/****************************************************************************
** Meta object code from reading C++ file 'Cert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/Cert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CertView_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CertView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CertView_t qt_meta_stringdata_CertView = {
    {
QT_MOC_LITERAL(0, 0, 8) // "CertView"

    },
    "CertView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CertView[] = {

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

void CertView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CertView::staticMetaObject = { {
    &QGroupBox::staticMetaObject,
    qt_meta_stringdata_CertView.data,
    qt_meta_data_CertView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CertView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CertView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CertView.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int CertView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CertWizard_t {
    QByteArrayData data[9];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CertWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CertWizard_t qt_meta_stringdata_CertWizard = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CertWizard"
QT_MOC_LITERAL(1, 11, 23), // "on_qleEmail_textChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_qpbExportFile_clicked"
QT_MOC_LITERAL(4, 61, 28), // "on_qleExportFile_textChanged"
QT_MOC_LITERAL(5, 90, 24), // "on_qpbImportFile_clicked"
QT_MOC_LITERAL(6, 115, 28), // "on_qleImportFile_textChanged"
QT_MOC_LITERAL(7, 144, 26), // "on_qlePassword_textChanged"
QT_MOC_LITERAL(8, 171, 28) // "on_qlIntroText_linkActivated"

    },
    "CertWizard\0on_qleEmail_textChanged\0\0"
    "on_qpbExportFile_clicked\0"
    "on_qleExportFile_textChanged\0"
    "on_qpbImportFile_clicked\0"
    "on_qleImportFile_textChanged\0"
    "on_qlePassword_textChanged\0"
    "on_qlIntroText_linkActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CertWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    0,   52,    2, 0x0a /* Public */,
       4,    1,   53,    2, 0x0a /* Public */,
       5,    0,   56,    2, 0x0a /* Public */,
       6,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void CertWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CertWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_qleEmail_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_qpbExportFile_clicked(); break;
        case 2: _t->on_qleExportFile_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_qpbImportFile_clicked(); break;
        case 4: _t->on_qleImportFile_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_qlePassword_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_qlIntroText_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CertWizard::staticMetaObject = { {
    &QWizard::staticMetaObject,
    qt_meta_stringdata_CertWizard.data,
    qt_meta_data_CertWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CertWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CertWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CertWizard.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::Certificates"))
        return static_cast< Ui::Certificates*>(this);
    return QWizard::qt_metacast(_clname);
}

int CertWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
