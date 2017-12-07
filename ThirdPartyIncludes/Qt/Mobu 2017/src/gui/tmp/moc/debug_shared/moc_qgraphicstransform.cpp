/****************************************************************************
** Meta object code from reading C++ file 'qgraphicstransform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsview/qgraphicstransform.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicstransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsTransform[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsTransform[] = {
    "QGraphicsTransform\0\0update()\0"
};

void QGraphicsTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsTransform *_t = static_cast<QGraphicsTransform *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGraphicsTransform::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsTransform,
      qt_meta_data_QGraphicsTransform, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsTransform::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsTransform))
        return static_cast<void*>(const_cast< QGraphicsTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_QGraphicsScale[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      32,   15,   15,   15, 0x05,
      48,   15,   15,   15, 0x05,
      64,   15,   15,   15, 0x05,
      80,   15,   15,   15, 0x05,

 // properties: name, type, flags
     105,   95, 0x54495103,
     118,  112, ((uint)QMetaType::QReal << 24) | 0x00495103,
     125,  112, ((uint)QMetaType::QReal << 24) | 0x00495103,
     132,  112, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsScale[] = {
    "QGraphicsScale\0\0originChanged()\0"
    "xScaleChanged()\0yScaleChanged()\0"
    "zScaleChanged()\0scaleChanged()\0QVector3D\0"
    "origin\0qreal\0xScale\0yScale\0zScale\0"
};

void QGraphicsScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsScale *_t = static_cast<QGraphicsScale *>(_o);
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->xScaleChanged(); break;
        case 2: _t->yScaleChanged(); break;
        case 3: _t->zScaleChanged(); break;
        case 4: _t->scaleChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGraphicsScale::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsScale::staticMetaObject = {
    { &QGraphicsTransform::staticMetaObject, qt_meta_stringdata_QGraphicsScale,
      qt_meta_data_QGraphicsScale, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsScale::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsScale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsScale))
        return static_cast<void*>(const_cast< QGraphicsScale*>(this));
    return QGraphicsTransform::qt_metacast(_clname);
}

int QGraphicsScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = xScale(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = yScale(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = zScale(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: setXScale(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setYScale(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setZScale(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsScale::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGraphicsScale::xScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QGraphicsScale::yScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QGraphicsScale::zScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QGraphicsScale::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
static const uint qt_meta_data_QGraphicsRotation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      35,   18,   18,   18, 0x05,
      50,   18,   18,   18, 0x05,

 // properties: name, type, flags
      74,   64, 0x54495103,
      87,   81, ((uint)QMetaType::QReal << 24) | 0x00495103,
      93,   64, 0x54495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsRotation[] = {
    "QGraphicsRotation\0\0originChanged()\0"
    "angleChanged()\0axisChanged()\0QVector3D\0"
    "origin\0qreal\0angle\0axis\0"
};

void QGraphicsRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsRotation *_t = static_cast<QGraphicsRotation *>(_o);
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->angleChanged(); break;
        case 2: _t->axisChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGraphicsRotation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsRotation::staticMetaObject = {
    { &QGraphicsTransform::staticMetaObject, qt_meta_stringdata_QGraphicsRotation,
      qt_meta_data_QGraphicsRotation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsRotation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsRotation))
        return static_cast<void*>(const_cast< QGraphicsRotation*>(this));
    return QGraphicsTransform::qt_metacast(_clname);
}

int QGraphicsRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = angle(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = axis(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: setAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setAxis(*reinterpret_cast< QVector3D*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsRotation::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGraphicsRotation::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QGraphicsRotation::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
