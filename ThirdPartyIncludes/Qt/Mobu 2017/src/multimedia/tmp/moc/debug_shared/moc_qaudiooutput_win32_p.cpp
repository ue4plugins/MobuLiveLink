/****************************************************************************
** Meta object code from reading C++ file 'qaudiooutput_win32_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../audio/qaudiooutput_win32_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudiooutput_win32_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAudioOutputPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      37,   20,   32,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAudioOutputPrivate[] = {
    "QAudioOutputPrivate\0\0feedback()\0bool\0"
    "deviceReady()\0"
};

void QAudioOutputPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAudioOutputPrivate *_t = static_cast<QAudioOutputPrivate *>(_o);
        switch (_id) {
        case 0: _t->feedback(); break;
        case 1: { bool _r = _t->deviceReady();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAudioOutputPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAudioOutputPrivate::staticMetaObject = {
    { &QAbstractAudioOutput::staticMetaObject, qt_meta_stringdata_QAudioOutputPrivate,
      qt_meta_data_QAudioOutputPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAudioOutputPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAudioOutputPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAudioOutputPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioOutputPrivate))
        return static_cast<void*>(const_cast< QAudioOutputPrivate*>(this));
    return QAbstractAudioOutput::qt_metacast(_clname);
}

int QAudioOutputPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAudioOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_OutputPrivate[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_OutputPrivate[] = {
    "OutputPrivate\0"
};

void OutputPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OutputPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OutputPrivate::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_OutputPrivate,
      qt_meta_data_OutputPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputPrivate))
        return static_cast<void*>(const_cast< OutputPrivate*>(this));
    return QIODevice::qt_metacast(_clname);
}

int OutputPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
