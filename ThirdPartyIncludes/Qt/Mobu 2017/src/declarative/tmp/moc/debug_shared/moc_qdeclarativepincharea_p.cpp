/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepincharea_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativepincharea_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepincharea_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativePinch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,   69, // properties
       1,  113, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      35,   18,   18,   18, 0x05,
      57,   18,   18,   18, 0x05,
      79,   18,   18,   18, 0x05,
     104,   18,   18,   18, 0x05,
     129,   18,   18,   18, 0x05,
     147,   18,   18,   18, 0x05,
     165,   18,   18,   18, 0x05,
     183,   18,   18,   18, 0x05,
     201,   18,   18,   18, 0x05,
     219,   18,   18,   18, 0x05,

 // properties: name, type, flags
     252,  235, 0x0009510f,
     265,  259, ((uint)QMetaType::QReal << 24) | 0x00495103,
     278,  259, ((uint)QMetaType::QReal << 24) | 0x00495103,
     291,  259, ((uint)QMetaType::QReal << 24) | 0x00495103,
     307,  259, ((uint)QMetaType::QReal << 24) | 0x00495103,
     328,  323, 0x0049500b,
     337,  259, ((uint)QMetaType::QReal << 24) | 0x00495003,
     346,  259, ((uint)QMetaType::QReal << 24) | 0x00495003,
     355,  259, ((uint)QMetaType::QReal << 24) | 0x00495003,
     364,  259, ((uint)QMetaType::QReal << 24) | 0x00495003,
     378,  373, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

 // enums: name, flags, count, data
     323, 0x0,    4,  117,

 // enum data: key, value
     385, uint(QDeclarativePinch::NoDrag),
     392, uint(QDeclarativePinch::XAxis),
     398, uint(QDeclarativePinch::YAxis),
     404, uint(QDeclarativePinch::XandYAxis),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePinch[] = {
    "QDeclarativePinch\0\0targetChanged()\0"
    "minimumScaleChanged()\0maximumScaleChanged()\0"
    "minimumRotationChanged()\0"
    "maximumRotationChanged()\0dragAxisChanged()\0"
    "minimumXChanged()\0maximumXChanged()\0"
    "minimumYChanged()\0maximumYChanged()\0"
    "activeChanged()\0QGraphicsObject*\0"
    "target\0qreal\0minimumScale\0maximumScale\0"
    "minimumRotation\0maximumRotation\0Axis\0"
    "dragAxis\0minimumX\0maximumX\0minimumY\0"
    "maximumY\0bool\0active\0NoDrag\0XAxis\0"
    "YAxis\0XandYAxis\0"
};

void QDeclarativePinch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePinch *_t = static_cast<QDeclarativePinch *>(_o);
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->minimumScaleChanged(); break;
        case 2: _t->maximumScaleChanged(); break;
        case 3: _t->minimumRotationChanged(); break;
        case 4: _t->maximumRotationChanged(); break;
        case 5: _t->dragAxisChanged(); break;
        case 6: _t->minimumXChanged(); break;
        case 7: _t->maximumXChanged(); break;
        case 8: _t->minimumYChanged(); break;
        case 9: _t->maximumYChanged(); break;
        case 10: _t->activeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePinch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePinch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePinch,
      qt_meta_data_QDeclarativePinch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePinch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePinch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePinch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePinch))
        return static_cast<void*>(const_cast< QDeclarativePinch*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativePinch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsObject**>(_v) = target(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = minimumScale(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = maximumScale(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = minimumRotation(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = maximumRotation(); break;
        case 5: *reinterpret_cast< Axis*>(_v) = axis(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = xmin(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = xmax(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = ymin(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = ymax(); break;
        case 10: *reinterpret_cast< bool*>(_v) = active(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTarget(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 1: setMinimumScale(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setMaximumScale(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setMinimumRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setMaximumRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setAxis(*reinterpret_cast< Axis*>(_v)); break;
        case 6: setXmin(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setXmax(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setYmin(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setYmax(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetTarget(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePinch::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePinch::minimumScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativePinch::maximumScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativePinch::minimumRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativePinch::maximumRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativePinch::dragAxisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativePinch::minimumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativePinch::maximumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativePinch::minimumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativePinch::maximumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativePinch::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
static const uint qt_meta_data_QDeclarativePinchEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      14,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      31,   23, 0x1a095001,
      38,   23, 0x1a095001,
      50,   23, 0x1a095001,
      71,   65, ((uint)QMetaType::QReal << 24) | 0x00095001,
      77,   65, ((uint)QMetaType::QReal << 24) | 0x00095001,
      91,   65, ((uint)QMetaType::QReal << 24) | 0x00095001,
      97,   65, ((uint)QMetaType::QReal << 24) | 0x00095001,
     111,   65, ((uint)QMetaType::QReal << 24) | 0x00095001,
     120,   23, 0x1a095001,
     127,   23, 0x1a095001,
     139,   23, 0x1a095001,
     146,   23, 0x1a095001,
     162,  158, 0x02095001,
     178,  173, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePinchEvent[] = {
    "QDeclarativePinchEvent\0QPointF\0center\0"
    "startCenter\0previousCenter\0qreal\0scale\0"
    "previousScale\0angle\0previousAngle\0"
    "rotation\0point1\0startPoint1\0point2\0"
    "startPoint2\0int\0pointCount\0bool\0"
    "accepted\0"
};

void QDeclarativePinchEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePinchEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePinchEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePinchEvent,
      qt_meta_data_QDeclarativePinchEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePinchEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePinchEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePinchEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePinchEvent))
        return static_cast<void*>(const_cast< QDeclarativePinchEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativePinchEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = center(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = startCenter(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = previousCenter(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = previousScale(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = angle(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = previousAngle(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 8: *reinterpret_cast< QPointF*>(_v) = point1(); break;
        case 9: *reinterpret_cast< QPointF*>(_v) = startPoint1(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = point2(); break;
        case 11: *reinterpret_cast< QPointF*>(_v) = startPoint2(); break;
        case 12: *reinterpret_cast< int*>(_v) = pointCount(); break;
        case 13: *reinterpret_cast< bool*>(_v) = accepted(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 13: setAccepted(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QDeclarativePinchArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      46,   40,   22,   22, 0x05,
      84,   40,   22,   22, 0x05,
     122,   40,   22,   22, 0x05,

 // properties: name, type, flags
     166,  161, 0x01495103,
      40,  174, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePinchArea[] = {
    "QDeclarativePinchArea\0\0enabledChanged()\0"
    "pinch\0pinchStarted(QDeclarativePinchEvent*)\0"
    "pinchUpdated(QDeclarativePinchEvent*)\0"
    "pinchFinished(QDeclarativePinchEvent*)\0"
    "bool\0enabled\0QDeclarativePinch*\0"
};

void QDeclarativePinchArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePinchArea *_t = static_cast<QDeclarativePinchArea *>(_o);
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->pinchStarted((*reinterpret_cast< QDeclarativePinchEvent*(*)>(_a[1]))); break;
        case 2: _t->pinchUpdated((*reinterpret_cast< QDeclarativePinchEvent*(*)>(_a[1]))); break;
        case 3: _t->pinchFinished((*reinterpret_cast< QDeclarativePinchEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativePinchArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePinchArea::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativePinchArea,
      qt_meta_data_QDeclarativePinchArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePinchArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePinchArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePinchArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePinchArea))
        return static_cast<void*>(const_cast< QDeclarativePinchArea*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativePinchArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 1: *reinterpret_cast< QDeclarativePinch**>(_v) = pinch(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePinchArea::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePinchArea::pinchStarted(QDeclarativePinchEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativePinchArea::pinchUpdated(QDeclarativePinchEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativePinchArea::pinchFinished(QDeclarativePinchEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
