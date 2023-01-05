/****************************************************************************
** Meta object code from reading C++ file 'ConnectDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/ConnectDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerViewDelegate_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerViewDelegate_t qt_meta_stringdata_ServerViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ServerViewDelegate"

    },
    "ServerViewDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerViewDelegate[] = {

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

void ServerViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ServerViewDelegate::staticMetaObject = { {
    &QStyledItemDelegate::staticMetaObject,
    qt_meta_stringdata_ServerViewDelegate.data,
    qt_meta_data_ServerViewDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerViewDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ServerViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ServerView_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerView_t qt_meta_stringdata_ServerView = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ServerView"

    },
    "ServerView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerView[] = {

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

void ServerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ServerView::staticMetaObject = { {
    &QTreeWidget::staticMetaObject,
    qt_meta_stringdata_ServerView.data,
    qt_meta_data_ServerView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int ServerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ConnectDialogEdit_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectDialogEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectDialogEdit_t qt_meta_stringdata_ConnectDialogEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConnectDialogEdit"
QT_MOC_LITERAL(1, 18, 8), // "validate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "accept"
QT_MOC_LITERAL(4, 35, 17), // "on_qbFill_clicked"
QT_MOC_LITERAL(5, 53, 20), // "on_qbDiscard_clicked"
QT_MOC_LITERAL(6, 74, 26), // "on_qcbShowPassword_toggled"
QT_MOC_LITERAL(7, 101, 21), // "on_qleName_textEdited"
QT_MOC_LITERAL(8, 123, 23), // "on_qleServer_textEdited"
QT_MOC_LITERAL(9, 147, 10), // "showNotice"
QT_MOC_LITERAL(10, 158, 4), // "text"
QT_MOC_LITERAL(11, 163, 19) // "updateFromClipboard"

    },
    "ConnectDialogEdit\0validate\0\0accept\0"
    "on_qbFill_clicked\0on_qbDiscard_clicked\0"
    "on_qcbShowPassword_toggled\0"
    "on_qleName_textEdited\0on_qleServer_textEdited\0"
    "showNotice\0text\0updateFromClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectDialogEdit[] = {

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
       6,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Bool,

       0        // eod
};

void ConnectDialogEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectDialogEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validate(); break;
        case 1: _t->accept(); break;
        case 2: _t->on_qbFill_clicked(); break;
        case 3: _t->on_qbDiscard_clicked(); break;
        case 4: _t->on_qcbShowPassword_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_qleName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_qleServer_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->showNotice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { bool _r = _t->updateFromClipboard();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectDialogEdit::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ConnectDialogEdit.data,
    qt_meta_data_ConnectDialogEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConnectDialogEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectDialogEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectDialogEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ConnectDialogEdit"))
        return static_cast< Ui::ConnectDialogEdit*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConnectDialogEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ConnectDialog_t {
    QByteArrayData data[37];
    char stringdata0[736];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectDialog_t qt_meta_stringdata_ConnectDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConnectDialog"
QT_MOC_LITERAL(1, 14, 6), // "accept"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "fetched"
QT_MOC_LITERAL(4, 30, 7), // "xmlData"
QT_MOC_LITERAL(5, 38, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(6, 60, 8), // "udpReply"
QT_MOC_LITERAL(7, 69, 8), // "lookedUp"
QT_MOC_LITERAL(8, 78, 8), // "timeTick"
QT_MOC_LITERAL(9, 87, 26), // "on_qaFavoriteAdd_triggered"
QT_MOC_LITERAL(10, 114, 29), // "on_qaFavoriteAddNew_triggered"
QT_MOC_LITERAL(11, 144, 27), // "on_qaFavoriteEdit_triggered"
QT_MOC_LITERAL(12, 172, 29), // "on_qaFavoriteRemove_triggered"
QT_MOC_LITERAL(13, 202, 27), // "on_qaFavoriteCopy_triggered"
QT_MOC_LITERAL(14, 230, 28), // "on_qaFavoritePaste_triggered"
QT_MOC_LITERAL(15, 259, 18), // "on_qaUrl_triggered"
QT_MOC_LITERAL(16, 278, 32), // "on_qtwServers_currentItemChanged"
QT_MOC_LITERAL(17, 311, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 328, 31), // "on_qtwServers_itemDoubleClicked"
QT_MOC_LITERAL(19, 360, 40), // "on_qtwServers_customContextMe..."
QT_MOC_LITERAL(20, 401, 26), // "on_qtwServers_itemExpanded"
QT_MOC_LITERAL(21, 428, 4), // "item"
QT_MOC_LITERAL(22, 433, 27), // "on_qtwServers_itemCollapsed"
QT_MOC_LITERAL(23, 461, 13), // "OnSortChanged"
QT_MOC_LITERAL(24, 475, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(25, 489, 15), // "onUpdateLanList"
QT_MOC_LITERAL(26, 505, 20), // "QList<BonjourRecord>"
QT_MOC_LITERAL(27, 526, 10), // "onResolved"
QT_MOC_LITERAL(28, 537, 13), // "BonjourRecord"
QT_MOC_LITERAL(29, 551, 8), // "uint16_t"
QT_MOC_LITERAL(30, 560, 17), // "onLanResolveError"
QT_MOC_LITERAL(31, 578, 34), // "on_qleSearchServername_textCh..."
QT_MOC_LITERAL(32, 613, 16), // "searchServername"
QT_MOC_LITERAL(33, 630, 40), // "on_qcbSearchLocation_currentI..."
QT_MOC_LITERAL(34, 671, 19), // "searchLocationIndex"
QT_MOC_LITERAL(35, 691, 32), // "on_qcbFilter_currentIndexChanged"
QT_MOC_LITERAL(36, 724, 11) // "filterIndex"

    },
    "ConnectDialog\0accept\0\0fetched\0xmlData\0"
    "QMap<QString,QString>\0udpReply\0lookedUp\0"
    "timeTick\0on_qaFavoriteAdd_triggered\0"
    "on_qaFavoriteAddNew_triggered\0"
    "on_qaFavoriteEdit_triggered\0"
    "on_qaFavoriteRemove_triggered\0"
    "on_qaFavoriteCopy_triggered\0"
    "on_qaFavoritePaste_triggered\0"
    "on_qaUrl_triggered\0on_qtwServers_currentItemChanged\0"
    "QTreeWidgetItem*\0on_qtwServers_itemDoubleClicked\0"
    "on_qtwServers_customContextMenuRequested\0"
    "on_qtwServers_itemExpanded\0item\0"
    "on_qtwServers_itemCollapsed\0OnSortChanged\0"
    "Qt::SortOrder\0onUpdateLanList\0"
    "QList<BonjourRecord>\0onResolved\0"
    "BonjourRecord\0uint16_t\0onLanResolveError\0"
    "on_qleSearchServername_textChanged\0"
    "searchServername\0"
    "on_qcbSearchLocation_currentIndexChanged\0"
    "searchLocationIndex\0"
    "on_qcbFilter_currentIndexChanged\0"
    "filterIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x0a /* Public */,
       3,    3,  135,    2, 0x0a /* Public */,
       6,    0,  142,    2, 0x0a /* Public */,
       7,    0,  143,    2, 0x0a /* Public */,
       8,    0,  144,    2, 0x0a /* Public */,
       9,    0,  145,    2, 0x0a /* Public */,
      10,    0,  146,    2, 0x0a /* Public */,
      11,    0,  147,    2, 0x0a /* Public */,
      12,    0,  148,    2, 0x0a /* Public */,
      13,    0,  149,    2, 0x0a /* Public */,
      14,    0,  150,    2, 0x0a /* Public */,
      15,    0,  151,    2, 0x0a /* Public */,
      16,    2,  152,    2, 0x0a /* Public */,
      18,    2,  157,    2, 0x0a /* Public */,
      19,    1,  162,    2, 0x0a /* Public */,
      20,    1,  165,    2, 0x0a /* Public */,
      22,    1,  168,    2, 0x0a /* Public */,
      23,    2,  171,    2, 0x0a /* Public */,
      25,    1,  176,    2, 0x0a /* Public */,
      27,    3,  179,    2, 0x0a /* Public */,
      30,    1,  186,    2, 0x0a /* Public */,
      31,    1,  189,    2, 0x08 /* Private */,
      33,    1,  192,    2, 0x08 /* Private */,
      35,    1,  195,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl, 0x80000000 | 5,    4,    2,    2,
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
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,    2,    2,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 17,   21,
    QMetaType::Void, 0x80000000 | 17,   21,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 24,    2,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28, QMetaType::QString, 0x80000000 | 29,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   36,

       0        // eod
};

void ConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->fetched((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[3]))); break;
        case 2: _t->udpReply(); break;
        case 3: _t->lookedUp(); break;
        case 4: _t->timeTick(); break;
        case 5: _t->on_qaFavoriteAdd_triggered(); break;
        case 6: _t->on_qaFavoriteAddNew_triggered(); break;
        case 7: _t->on_qaFavoriteEdit_triggered(); break;
        case 8: _t->on_qaFavoriteRemove_triggered(); break;
        case 9: _t->on_qaFavoriteCopy_triggered(); break;
        case 10: _t->on_qaFavoritePaste_triggered(); break;
        case 11: _t->on_qaUrl_triggered(); break;
        case 12: _t->on_qtwServers_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 13: _t->on_qtwServers_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_qtwServers_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 15: _t->on_qtwServers_itemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 16: _t->on_qtwServers_itemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->OnSortChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 18: _t->onUpdateLanList((*reinterpret_cast< const QList<BonjourRecord>(*)>(_a[1]))); break;
        case 19: _t->onResolved((*reinterpret_cast< const BonjourRecord(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const uint16_t(*)>(_a[3]))); break;
        case 20: _t->onLanResolveError((*reinterpret_cast< const BonjourRecord(*)>(_a[1]))); break;
        case 21: _t->on_qleSearchServername_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_qcbSearchLocation_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_qcbFilter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<BonjourRecord> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BonjourRecord >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BonjourRecord >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ConnectDialog.data,
    qt_meta_data_ConnectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ConnectDialog"))
        return static_cast< Ui::ConnectDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
