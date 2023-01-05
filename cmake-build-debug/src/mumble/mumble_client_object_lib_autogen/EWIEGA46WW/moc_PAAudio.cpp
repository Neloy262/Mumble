/****************************************************************************
** Meta object code from reading C++ file 'PAAudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/PAAudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PAAudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PortAudioSystem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortAudioSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortAudioSystem_t qt_meta_stringdata_PortAudioSystem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "PortAudioSystem"

    },
    "PortAudioSystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortAudioSystem[] = {

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

void PortAudioSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PortAudioSystem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PortAudioSystem.data,
    qt_meta_data_PortAudioSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PortAudioSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortAudioSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PortAudioSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PortAudioSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PortAudioInput_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortAudioInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortAudioInput_t qt_meta_stringdata_PortAudioInput = {
    {
QT_MOC_LITERAL(0, 0, 14) // "PortAudioInput"

    },
    "PortAudioInput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortAudioInput[] = {

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

void PortAudioInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PortAudioInput::staticMetaObject = { {
    &AudioInput::staticMetaObject,
    qt_meta_stringdata_PortAudioInput.data,
    qt_meta_data_PortAudioInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PortAudioInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortAudioInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PortAudioInput.stringdata0))
        return static_cast<void*>(this);
    return AudioInput::qt_metacast(_clname);
}

int PortAudioInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioInput::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PortAudioOutput_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortAudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortAudioOutput_t qt_meta_stringdata_PortAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 15) // "PortAudioOutput"

    },
    "PortAudioOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortAudioOutput[] = {

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

void PortAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PortAudioOutput::staticMetaObject = { {
    &AudioOutput::staticMetaObject,
    qt_meta_stringdata_PortAudioOutput.data,
    qt_meta_data_PortAudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PortAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PortAudioOutput.stringdata0))
        return static_cast<void*>(this);
    return AudioOutput::qt_metacast(_clname);
}

int PortAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioOutput::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
