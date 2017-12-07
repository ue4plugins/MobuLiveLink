/****************************************************************************
** Meta object code from reading C++ file 'qnoncontiguousbytedevice_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../io/qnoncontiguousbytedevice_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnoncontiguousbytedevice_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNonContiguousByteDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      52,   38,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QNonContiguousByteDevice[] = {
    "QNonContiguousByteDevice\0\0readyRead()\0"
    "current,total\0readProgress(qint64,qint64)\0"
};

void QNonContiguousByteDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNonContiguousByteDevice *_t = static_cast<QNonContiguousByteDevice *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->readProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNonContiguousByteDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNonContiguousByteDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDevice,
      qt_meta_data_QNonContiguousByteDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNonContiguousByteDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNonContiguousByteDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNonContiguousByteDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDevice))
        return static_cast<void*>(const_cast< QNonContiguousByteDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int QNonContiguousByteDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QNonContiguousByteDevice::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QNonContiguousByteDevice::readProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QNonContiguousByteDeviceIoDeviceImpl[] = {

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

static const char qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl[] = {
    "QNonContiguousByteDeviceIoDeviceImpl\0"
};

void QNonContiguousByteDeviceIoDeviceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QNonContiguousByteDeviceIoDeviceImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNonContiguousByteDeviceIoDeviceImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl,
      qt_meta_data_QNonContiguousByteDeviceIoDeviceImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNonContiguousByteDeviceIoDeviceImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNonContiguousByteDeviceIoDeviceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNonContiguousByteDeviceIoDeviceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceIoDeviceImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceIoDeviceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QNonContiguousByteDeviceBufferImpl[] = {

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

static const char qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl[] = {
    "QNonContiguousByteDeviceBufferImpl\0"
};

void QNonContiguousByteDeviceBufferImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QNonContiguousByteDeviceBufferImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNonContiguousByteDeviceBufferImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl,
      qt_meta_data_QNonContiguousByteDeviceBufferImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNonContiguousByteDeviceBufferImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNonContiguousByteDeviceBufferImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNonContiguousByteDeviceBufferImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceBufferImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceBufferImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
