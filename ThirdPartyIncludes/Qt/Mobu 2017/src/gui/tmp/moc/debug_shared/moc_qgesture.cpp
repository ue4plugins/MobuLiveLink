/****************************************************************************
** Meta object code from reading C++ file 'qgesture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qgesture.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      26,    9, 0x00095009,
      48,   32, 0x00095009,
      90,   60, 0x0009510b,
     118,  110, 0x1a095107,
     131,  126, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_QGesture[] = {
    "QGesture\0Qt::GestureState\0state\0"
    "Qt::GestureType\0gestureType\0"
    "QGesture::GestureCancelPolicy\0"
    "gestureCancelPolicy\0QPointF\0hotSpot\0"
    "bool\0hasHotSpot\0"
};

void QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGesture,
      qt_meta_data_QGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGesture))
        return static_cast<void*>(const_cast< QGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::GestureState*>(_v) = state(); break;
        case 1: *reinterpret_cast< Qt::GestureType*>(_v) = gestureType(); break;
        case 2: *reinterpret_cast< QGesture::GestureCancelPolicy*>(_v) = gestureCancelPolicy(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = hotSpot(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hasHotSpot(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setGestureCancelPolicy(*reinterpret_cast< QGesture::GestureCancelPolicy*>(_v)); break;
        case 3: setHotSpot(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 3: unsetHotSpot(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QPanGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      20,   12, 0x1a095103,
      31,   12, 0x1a095103,
      38,   12, 0x1a085001,
      50,   44, ((uint)QMetaType::QReal << 24) | 0x00095103,
      63,   44, ((uint)QMetaType::QReal << 24) | 0x00095103,
      82,   44, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QPanGesture[] = {
    "QPanGesture\0QPointF\0lastOffset\0offset\0"
    "delta\0qreal\0acceleration\0horizontalVelocity\0"
    "verticalVelocity\0"
};

void QPanGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QPanGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPanGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPanGesture,
      qt_meta_data_QPanGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPanGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPanGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPanGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPanGesture))
        return static_cast<void*>(const_cast< QPanGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPanGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = lastOffset(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = offset(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = delta(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = acceleration(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = QPanGesture::d_func()->horizontalVelocity(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = QPanGesture::d_func()->verticalVelocity(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLastOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 4: QPanGesture::d_func()->setHorizontalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 5: QPanGesture::d_func()->setVerticalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QPinchGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       2,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      26,   14, 0x0009510b,
      43,   14, 0x0009510b,
      61,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
      78,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
      94,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
     106,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
     125,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
     143,   55, ((uint)QMetaType::QReal << 24) | 0x00095103,
     165,  157, 0x1a095103,
     182,  157, 0x1a095103,
     198,  157, 0x1a095103,

 // enums: name, flags, count, data
     210, 0x1,    3,   55,
      14, 0x1,    3,   61,

 // enum data: key, value
     221, uint(QPinchGesture::ScaleFactorChanged),
     240, uint(QPinchGesture::RotationAngleChanged),
     261, uint(QPinchGesture::CenterPointChanged),
     221, uint(QPinchGesture::ScaleFactorChanged),
     240, uint(QPinchGesture::RotationAngleChanged),
     261, uint(QPinchGesture::CenterPointChanged),

       0        // eod
};

static const char qt_meta_stringdata_QPinchGesture[] = {
    "QPinchGesture\0ChangeFlags\0totalChangeFlags\0"
    "changeFlags\0qreal\0totalScaleFactor\0"
    "lastScaleFactor\0scaleFactor\0"
    "totalRotationAngle\0lastRotationAngle\0"
    "rotationAngle\0QPointF\0startCenterPoint\0"
    "lastCenterPoint\0centerPoint\0ChangeFlag\0"
    "ScaleFactorChanged\0RotationAngleChanged\0"
    "CenterPointChanged\0"
};

void QPinchGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QPinchGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPinchGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPinchGesture,
      qt_meta_data_QPinchGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPinchGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPinchGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPinchGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPinchGesture))
        return static_cast<void*>(const_cast< QPinchGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPinchGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(totalChangeFlags()); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(changeFlags()); break;
        case 2: *reinterpret_cast< qreal*>(_v) = totalScaleFactor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = lastScaleFactor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = scaleFactor(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = totalRotationAngle(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = lastRotationAngle(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = rotationAngle(); break;
        case 8: *reinterpret_cast< QPointF*>(_v) = startCenterPoint(); break;
        case 9: *reinterpret_cast< QPointF*>(_v) = lastCenterPoint(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = centerPoint(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTotalChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setTotalScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setLastScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setTotalRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setLastRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setStartCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 9: setLastCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 10: setCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
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
static const uint qt_meta_data_QSwipeGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      29,   14, 0x00085009,
      49,   14, 0x00085009,
      73,   67, ((uint)QMetaType::QReal << 24) | 0x00095103,
      84,   67, ((uint)QMetaType::QReal << 24) | 0x00095103,

 // enums: name, flags, count, data
      14, 0x0,    5,   30,

 // enum data: key, value
      93, uint(QSwipeGesture::NoDirection),
     105, uint(QSwipeGesture::Left),
     110, uint(QSwipeGesture::Right),
     116, uint(QSwipeGesture::Up),
     119, uint(QSwipeGesture::Down),

       0        // eod
};

static const char qt_meta_stringdata_QSwipeGesture[] = {
    "QSwipeGesture\0SwipeDirection\0"
    "horizontalDirection\0verticalDirection\0"
    "qreal\0swipeAngle\0velocity\0NoDirection\0"
    "Left\0Right\0Up\0Down\0"
};

void QSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QSwipeGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSwipeGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QSwipeGesture,
      qt_meta_data_QSwipeGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSwipeGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSwipeGesture))
        return static_cast<void*>(const_cast< QSwipeGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SwipeDirection*>(_v) = horizontalDirection(); break;
        case 1: *reinterpret_cast< SwipeDirection*>(_v) = verticalDirection(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = swipeAngle(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = QSwipeGesture::d_func()->velocity(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setSwipeAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 3: QSwipeGesture::d_func()->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QTapGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      20,   12, 0x1a095103,

       0        // eod
};

static const char qt_meta_stringdata_QTapGesture[] = {
    "QTapGesture\0QPointF\0position\0"
};

void QTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QTapGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTapGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapGesture,
      qt_meta_data_QTapGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTapGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTapGesture))
        return static_cast<void*>(const_cast< QTapGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = position(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QTapAndHoldGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      27,   19, 0x1a095103,

       0        // eod
};

static const char qt_meta_stringdata_QTapAndHoldGesture[] = {
    "QTapAndHoldGesture\0QPointF\0position\0"
};

void QTapAndHoldGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QTapAndHoldGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTapAndHoldGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapAndHoldGesture,
      qt_meta_data_QTapAndHoldGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTapAndHoldGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTapAndHoldGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTapAndHoldGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTapAndHoldGesture))
        return static_cast<void*>(const_cast< QTapAndHoldGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapAndHoldGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = position(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
