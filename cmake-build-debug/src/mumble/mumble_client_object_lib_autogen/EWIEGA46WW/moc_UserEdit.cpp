/****************************************************************************
** Meta object code from reading C++ file 'UserEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/UserEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserEdit_t {
    QByteArrayData data[14];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserEdit_t qt_meta_stringdata_UserEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserEdit"
QT_MOC_LITERAL(1, 9, 6), // "accept"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 23), // "on_qlSearch_textChanged"
QT_MOC_LITERAL(4, 41, 20), // "on_qpbRemove_clicked"
QT_MOC_LITERAL(5, 62, 20), // "on_qpbRename_clicked"
QT_MOC_LITERAL(6, 83, 41), // "on_qtvUserList_customContextM..."
QT_MOC_LITERAL(7, 125, 18), // "onSelectionChanged"
QT_MOC_LITERAL(8, 144, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 159, 19), // "onCurrentRowChanged"
QT_MOC_LITERAL(10, 179, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 191, 7), // "current"
QT_MOC_LITERAL(12, 199, 27), // "on_qsbInactive_valueChanged"
QT_MOC_LITERAL(13, 227, 34) // "on_qcbInactive_currentIndexCh..."

    },
    "UserEdit\0accept\0\0on_qlSearch_textChanged\0"
    "on_qpbRemove_clicked\0on_qpbRename_clicked\0"
    "on_qtvUserList_customContextMenuRequested\0"
    "onSelectionChanged\0QItemSelection\0"
    "onCurrentRowChanged\0QModelIndex\0current\0"
    "on_qsbInactive_valueChanged\0"
    "on_qcbInactive_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserEdit[] = {

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
       3,    1,   60,    2, 0x0a /* Public */,
       4,    0,   63,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       7,    2,   68,    2, 0x0a /* Public */,
       9,    2,   73,    2, 0x0a /* Public */,
      12,    1,   78,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void UserEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_qlSearch_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_qpbRemove_clicked(); break;
        case 3: _t->on_qpbRename_clicked(); break;
        case 4: _t->on_qtvUserList_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->onCurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->on_qsbInactive_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_qcbInactive_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserEdit::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_UserEdit.data,
    qt_meta_data_UserEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::UserEdit"))
        return static_cast< Ui::UserEdit*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_UserListFilterProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserListFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserListFilterProxyModel_t qt_meta_stringdata_UserListFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "UserListFilterProxyModel"
QT_MOC_LITERAL(1, 25, 28), // "setFilterMinimumInactiveDays"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 19), // "minimumInactiveDays"
QT_MOC_LITERAL(4, 75, 21), // "removeRowsInSelection"
QT_MOC_LITERAL(5, 97, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 112, 9) // "selection"

    },
    "UserListFilterProxyModel\0"
    "setFilterMinimumInactiveDays\0\0"
    "minimumInactiveDays\0removeRowsInSelection\0"
    "QItemSelection\0selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserListFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UserListFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserListFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilterMinimumInactiveDays((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->removeRowsInSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserListFilterProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_UserListFilterProxyModel.data,
    qt_meta_data_UserListFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserListFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserListFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserListFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int UserListFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
