/****************************************************************************
** Meta object code from reading C++ file 'PluginUpdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/PluginUpdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginUpdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginUpdater_t {
    QByteArrayData data[15];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginUpdater_t qt_meta_stringdata_PluginUpdater = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PluginUpdater"
QT_MOC_LITERAL(1, 14, 16), // "updatesAvailable"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "updatingFinished"
QT_MOC_LITERAL(4, 49, 17), // "updateInterrupted"
QT_MOC_LITERAL(5, 67, 7), // "clearUI"
QT_MOC_LITERAL(6, 75, 12), // "on_selectAll"
QT_MOC_LITERAL(7, 88, 10), // "checkState"
QT_MOC_LITERAL(8, 99, 25), // "on_singleSelectionChanged"
QT_MOC_LITERAL(9, 125, 11), // "on_finished"
QT_MOC_LITERAL(10, 137, 6), // "result"
QT_MOC_LITERAL(11, 144, 9), // "interrupt"
QT_MOC_LITERAL(12, 154, 19), // "on_updateDownloaded"
QT_MOC_LITERAL(13, 174, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 189, 5) // "reply"

    },
    "PluginUpdater\0updatesAvailable\0\0"
    "updatingFinished\0updateInterrupted\0"
    "clearUI\0on_selectAll\0checkState\0"
    "on_singleSelectionChanged\0on_finished\0"
    "result\0interrupt\0on_updateDownloaded\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginUpdater[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void PluginUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginUpdater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatesAvailable(); break;
        case 1: _t->updatingFinished(); break;
        case 2: _t->updateInterrupted(); break;
        case 3: _t->clearUI(); break;
        case 4: _t->on_selectAll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_singleSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->interrupt(); break;
        case 8: _t->on_updateDownloaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginUpdater::updatesAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PluginUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginUpdater::updatingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PluginUpdater::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginUpdater::updateInterrupted)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginUpdater::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PluginUpdater.data,
    qt_meta_data_PluginUpdater,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginUpdater.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PluginUpdater"))
        return static_cast< Ui::PluginUpdater*>(this);
    return QDialog::qt_metacast(_clname);
}

int PluginUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PluginUpdater::updatesAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PluginUpdater::updatingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PluginUpdater::updateInterrupted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
