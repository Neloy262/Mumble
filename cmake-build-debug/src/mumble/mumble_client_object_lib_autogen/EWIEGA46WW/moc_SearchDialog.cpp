/****************************************************************************
** Meta object code from reading C++ file 'SearchDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/SearchDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Search__SearchDialog_t {
    QByteArrayData data[28];
    char stringdata0[501];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Search__SearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Search__SearchDialog_t qt_meta_stringdata_Search__SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Search::SearchDialog"
QT_MOC_LITERAL(1, 21, 24), // "on_toggleOptions_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 28), // "on_searchField_returnPressed"
QT_MOC_LITERAL(4, 76, 26), // "on_searchField_textChanged"
QT_MOC_LITERAL(5, 103, 4), // "text"
QT_MOC_LITERAL(6, 108, 21), // "on_userOption_clicked"
QT_MOC_LITERAL(7, 130, 7), // "checked"
QT_MOC_LITERAL(8, 138, 24), // "on_channelOption_clicked"
QT_MOC_LITERAL(9, 163, 30), // "on_caseSensitiveOption_clicked"
QT_MOC_LITERAL(10, 194, 22), // "on_regexOption_clicked"
QT_MOC_LITERAL(11, 217, 38), // "on_searchResultTree_currentIt..."
QT_MOC_LITERAL(12, 256, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 273, 7), // "current"
QT_MOC_LITERAL(14, 281, 8), // "previous"
QT_MOC_LITERAL(15, 290, 33), // "on_searchResultTree_itemActiv..."
QT_MOC_LITERAL(16, 324, 4), // "item"
QT_MOC_LITERAL(17, 329, 6), // "column"
QT_MOC_LITERAL(18, 336, 11), // "searchAgain"
QT_MOC_LITERAL(19, 348, 18), // "clearSearchResults"
QT_MOC_LITERAL(20, 367, 6), // "search"
QT_MOC_LITERAL(21, 374, 10), // "searchTerm"
QT_MOC_LITERAL(22, 385, 31), // "on_serverConnectionSynchronized"
QT_MOC_LITERAL(23, 417, 21), // "on_serverDisconnected"
QT_MOC_LITERAL(24, 439, 21), // "on_clientDisconnected"
QT_MOC_LITERAL(25, 461, 11), // "userSession"
QT_MOC_LITERAL(26, 473, 17), // "on_channelRemoved"
QT_MOC_LITERAL(27, 491, 9) // "channelID"

    },
    "Search::SearchDialog\0on_toggleOptions_clicked\0"
    "\0on_searchField_returnPressed\0"
    "on_searchField_textChanged\0text\0"
    "on_userOption_clicked\0checked\0"
    "on_channelOption_clicked\0"
    "on_caseSensitiveOption_clicked\0"
    "on_regexOption_clicked\0"
    "on_searchResultTree_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_searchResultTree_itemActivated\0"
    "item\0column\0searchAgain\0clearSearchResults\0"
    "search\0searchTerm\0on_serverConnectionSynchronized\0"
    "on_serverDisconnected\0on_clientDisconnected\0"
    "userSession\0on_channelRemoved\0channelID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Search__SearchDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    1,   96,    2, 0x0a /* Public */,
       6,    1,   99,    2, 0x0a /* Public */,
       8,    1,  102,    2, 0x0a /* Public */,
       9,    1,  105,    2, 0x0a /* Public */,
      10,    1,  108,    2, 0x0a /* Public */,
      11,    2,  111,    2, 0x0a /* Public */,
      15,    2,  116,    2, 0x0a /* Public */,
      18,    0,  121,    2, 0x0a /* Public */,
      19,    0,  122,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,
      22,    0,  126,    2, 0x0a /* Public */,
      23,    0,  127,    2, 0x0a /* Public */,
      24,    1,  128,    2, 0x0a /* Public */,
      26,    1,  131,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   25,
    QMetaType::Void, QMetaType::Int,   27,

       0        // eod
};

void Search::SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toggleOptions_clicked(); break;
        case 1: _t->on_searchField_returnPressed(); break;
        case 2: _t->on_searchField_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_userOption_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_channelOption_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_caseSensitiveOption_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_regexOption_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_searchResultTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->on_searchResultTree_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->searchAgain(); break;
        case 10: _t->clearSearchResults(); break;
        case 11: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_serverConnectionSynchronized(); break;
        case 13: _t->on_serverDisconnected(); break;
        case 14: _t->on_clientDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 15: _t->on_channelRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Search::SearchDialog::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Search__SearchDialog.data,
    qt_meta_data_Search__SearchDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Search::SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Search::SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Search__SearchDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Search::SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
