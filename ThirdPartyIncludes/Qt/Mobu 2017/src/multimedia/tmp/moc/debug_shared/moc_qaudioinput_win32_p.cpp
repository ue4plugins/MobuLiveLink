/****************************************************************************
** Meta object code from reading C++ file 'qaudioinput_win32_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../audio/qaudioinput_win32_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudioinput_win32_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAudioInputPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   19,   19,   19, 0x08,
      50,   19,   45,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAudioInputPrivate[] = {
    "QAudioInputPrivate\0\0processMore()\0"
    "feedback()\0bool\0deviceReady()\0"
};

void QAudioInputPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAudioInputPrivate *_t = static_cast<QAudioInputPrivate *>(_o);
        switch (_id) {
        case 0: _t->processMore(); break;
        case 1: _t->feedback(); break;
        case 2: { bool _r = _t->deviceReady();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAudioInputPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAudioInputPrivate::staticMetaObject = {
    { &QAbstractAudioInput::staticMetaObject, qt_meta_stringdata_QAudioInputPrivate,
      qt_meta_data_QAudioInputPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAudioInputPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAudioInputPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAudioInputPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioInputPrivate))
        return static_cast<void*>(const_cast< QAudioInputPrivate*>(this));
    return QAbstractAudioInput::qt_metacast(_clname);
}

int QAudioInputPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAudioInput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAudioInputPrivate::processMore()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_InputPrivate[] = {

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

static const char qt_meta_stringdata_InputPrivate[] = {
    "InputPrivate\0"
};

void InputPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData InputPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InputPrivate::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_InputPrivate,
      qt_meta_data_InputPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputPrivate))
        return static_cast<void*>(const_cast< InputPrivate*>(this));
    return QIODevice::qt_metacast(_clname);
}

int InputPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
