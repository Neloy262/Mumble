/****************************************************************************
** Meta object code from reading C++ file 'JackAudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/JackAudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JackAudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JackAudioSystem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackAudioSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackAudioSystem_t qt_meta_stringdata_JackAudioSystem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "JackAudioSystem"

    },
    "JackAudioSystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackAudioSystem[] = {

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

void JackAudioSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject JackAudioSystem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_JackAudioSystem.data,
    qt_meta_data_JackAudioSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JackAudioSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackAudioSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackAudioSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JackAudioSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_JackAudioInput_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackAudioInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackAudioInput_t qt_meta_stringdata_JackAudioInput = {
    {
QT_MOC_LITERAL(0, 0, 14) // "JackAudioInput"

    },
    "JackAudioInput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackAudioInput[] = {

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

void JackAudioInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject JackAudioInput::staticMetaObject = { {
    &AudioInput::staticMetaObject,
    qt_meta_stringdata_JackAudioInput.data,
    qt_meta_data_JackAudioInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JackAudioInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackAudioInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackAudioInput.stringdata0))
        return static_cast<void*>(this);
    return AudioInput::qt_metacast(_clname);
}

int JackAudioInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioInput::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_JackAudioOutput_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackAudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackAudioOutput_t qt_meta_stringdata_JackAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 15) // "JackAudioOutput"

    },
    "JackAudioOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackAudioOutput[] = {

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

void JackAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject JackAudioOutput::staticMetaObject = { {
    &AudioOutput::staticMetaObject,
    qt_meta_stringdata_JackAudioOutput.data,
    qt_meta_data_JackAudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JackAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackAudioOutput.stringdata0))
        return static_cast<void*>(this);
    return AudioOutput::qt_metacast(_clname);
}

int JackAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioOutput::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
