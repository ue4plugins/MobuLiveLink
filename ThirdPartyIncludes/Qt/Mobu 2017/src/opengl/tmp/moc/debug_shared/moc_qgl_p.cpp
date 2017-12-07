/****************************************************************************
** Meta object code from reading C++ file 'qgl_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qgl_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGLTextureDestroyer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   21,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGLTextureDestroyer[] = {
    "QGLTextureDestroyer\0\0context,boundPixmap,id\0"
    "freeTexture(QGLContext*,QPixmapData*,GLuint)\0"
    "freeTexture_slot(QGLContext*,QPixmapData*,GLuint)\0"
};

void QGLTextureDestroyer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGLTextureDestroyer *_t = static_cast<QGLTextureDestroyer *>(_o);
        switch (_id) {
        case 0: _t->freeTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< QPixmapData*(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 1: _t->freeTexture_slot((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< QPixmapData*(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGLTextureDestroyer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGLTextureDestroyer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGLTextureDestroyer,
      qt_meta_data_QGLTextureDestroyer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGLTextureDestroyer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGLTextureDestroyer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGLTextureDestroyer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGLTextureDestroyer))
        return static_cast<void*>(const_cast< QGLTextureDestroyer*>(this));
    return QObject::qt_metacast(_clname);
}

int QGLTextureDestroyer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGLTextureDestroyer::freeTexture(QGLContext * _t1, QPixmapData * _t2, GLuint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QGLSignalProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QGLSignalProxy[] = {
    "QGLSignalProxy\0\0context\0"
    "aboutToDestroyContext(const QGLContext*)\0"
};

void QGLSignalProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGLSignalProxy *_t = static_cast<QGLSignalProxy *>(_o);
        switch (_id) {
        case 0: _t->aboutToDestroyContext((*reinterpret_cast< const QGLContext*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGLSignalProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGLSignalProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGLSignalProxy,
      qt_meta_data_QGLSignalProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGLSignalProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGLSignalProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGLSignalProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGLSignalProxy))
        return static_cast<void*>(const_cast< QGLSignalProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int QGLSignalProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGLSignalProxy::aboutToDestroyContext(const QGLContext * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
