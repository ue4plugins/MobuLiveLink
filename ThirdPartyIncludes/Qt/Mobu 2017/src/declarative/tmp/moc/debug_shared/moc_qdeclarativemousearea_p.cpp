/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativemousearea_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativemousearea_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativemousearea_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeDrag[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   54, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      34,   17,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,
      66,   17,   17,   17, 0x05,
      84,   17,   17,   17, 0x05,
     102,   17,   17,   17, 0x05,
     120,   17,   17,   17, 0x05,
     136,   17,   17,   17, 0x05,

 // properties: name, type, flags
     177,  160, 0x0049510f,
     189,  184, 0x0049510b,
     200,  194, ((uint)QMetaType::QReal << 24) | 0x00495003,
     209,  194, ((uint)QMetaType::QReal << 24) | 0x00495003,
     218,  194, ((uint)QMetaType::QReal << 24) | 0x00495003,
     227,  194, ((uint)QMetaType::QReal << 24) | 0x00495003,
     241,  236, 0x01495001,
     248,  236, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

 // enums: name, flags, count, data
     184, 0x0,    3,   90,

 // enum data: key, value
     263, uint(QDeclarativeDrag::XAxis),
     269, uint(QDeclarativeDrag::YAxis),
     275, uint(QDeclarativeDrag::XandYAxis),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeDrag[] = {
    "QDeclarativeDrag\0\0targetChanged()\0"
    "axisChanged()\0minimumXChanged()\0"
    "maximumXChanged()\0minimumYChanged()\0"
    "maximumYChanged()\0activeChanged()\0"
    "filterChildrenChanged()\0QGraphicsObject*\0"
    "target\0Axis\0axis\0qreal\0minimumX\0"
    "maximumX\0minimumY\0maximumY\0bool\0active\0"
    "filterChildren\0XAxis\0YAxis\0XandYAxis\0"
};

void QDeclarativeDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeDrag *_t = static_cast<QDeclarativeDrag *>(_o);
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->axisChanged(); break;
        case 2: _t->minimumXChanged(); break;
        case 3: _t->maximumXChanged(); break;
        case 4: _t->minimumYChanged(); break;
        case 5: _t->maximumYChanged(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->filterChildrenChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDrag::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDrag::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeDrag,
      qt_meta_data_QDeclarativeDrag, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDrag::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDrag))
        return static_cast<void*>(const_cast< QDeclarativeDrag*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsObject**>(_v) = target(); break;
        case 1: *reinterpret_cast< Axis*>(_v) = axis(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = xmin(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = xmax(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = ymin(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = ymax(); break;
        case 6: *reinterpret_cast< bool*>(_v) = active(); break;
        case 7: *reinterpret_cast< bool*>(_v) = filterChildren(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTarget(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 1: setAxis(*reinterpret_cast< Axis*>(_v)); break;
        case 2: setXmin(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setXmax(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setYmin(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setYmax(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setFilterChildren(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetTarget(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeDrag::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeDrag::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeDrag::minimumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeDrag::maximumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeDrag::minimumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeDrag::maximumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeDrag::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeDrag::filterChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
static const uint qt_meta_data_QDeclarativeMouseArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      10,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      40,   22,   22,   22, 0x05,
      57,   22,   22,   22, 0x05,
      74,   22,   22,   22, 0x05,
      99,   22,   22,   22, 0x05,
     127,  121,   22,   22, 0x05,
     168,  121,   22,   22, 0x05,
     214,   22,   22,   22, 0x85,
     239,  121,   22,   22, 0x05,
     272,  121,   22,   22, 0x05,
     310,  121,   22,   22, 0x05,
     344,  121,   22,   22, 0x05,
     377,  121,   22,   22, 0x05,
     416,   22,   22,   22, 0x05,
     426,   22,   22,   22, 0x05,
     435,   22,   22,   22, 0x05,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // properties: name, type, flags
     452,  446, ((uint)QMetaType::QReal << 24) | 0x00495001,
     459,  446, ((uint)QMetaType::QReal << 24) | 0x00495001,
     471,  466, 0x01495001,
     485,  466, 0x01495001,
     493,  466, 0x01495103,
     518,  501, 0x00495009,
     533,  501, 0x0049510b,
     549,  466, 0x01495103,
     580,  562, 0x00095409,
     585,  466, 0x01c95103,

 // properties: notify_signal_id
       6,
       6,
       0,
       1,
       2,
       1,
       3,
       4,
       0,
       7,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeMouseArea[] = {
    "QDeclarativeMouseArea\0\0hoveredChanged()\0"
    "pressedChanged()\0enabledChanged()\0"
    "acceptedButtonsChanged()\0hoverEnabledChanged()\0"
    "mouse\0positionChanged(QDeclarativeMouseEvent*)\0"
    "mousePositionChanged(QDeclarativeMouseEvent*)\0"
    "preventStealingChanged()\0"
    "pressed(QDeclarativeMouseEvent*)\0"
    "pressAndHold(QDeclarativeMouseEvent*)\0"
    "released(QDeclarativeMouseEvent*)\0"
    "clicked(QDeclarativeMouseEvent*)\0"
    "doubleClicked(QDeclarativeMouseEvent*)\0"
    "entered()\0exited()\0canceled()\0qreal\0"
    "mouseX\0mouseY\0bool\0containsMouse\0"
    "pressed\0enabled\0Qt::MouseButtons\0"
    "pressedButtons\0acceptedButtons\0"
    "hoverEnabled\0QDeclarativeDrag*\0drag\0"
    "preventStealing\0"
};

void QDeclarativeMouseArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeMouseArea *_t = static_cast<QDeclarativeMouseArea *>(_o);
        switch (_id) {
        case 0: _t->hoveredChanged(); break;
        case 1: _t->pressedChanged(); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->acceptedButtonsChanged(); break;
        case 4: _t->hoverEnabledChanged(); break;
        case 5: _t->positionChanged((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mousePositionChanged((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->preventStealingChanged(); break;
        case 8: _t->pressed((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->pressAndHold((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->released((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->clicked((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->doubleClicked((*reinterpret_cast< QDeclarativeMouseEvent*(*)>(_a[1]))); break;
        case 13: _t->entered(); break;
        case 14: _t->exited(); break;
        case 15: _t->canceled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeMouseArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeMouseArea::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeMouseArea,
      qt_meta_data_QDeclarativeMouseArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeMouseArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeMouseArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeMouseArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeMouseArea))
        return static_cast<void*>(const_cast< QDeclarativeMouseArea*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeMouseArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = mouseX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = mouseY(); break;
        case 2: *reinterpret_cast< bool*>(_v) = hovered(); break;
        case 3: *reinterpret_cast< bool*>(_v) = pressed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 5: *reinterpret_cast< Qt::MouseButtons*>(_v) = pressedButtons(); break;
        case 6: *reinterpret_cast< Qt::MouseButtons*>(_v) = acceptedButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = hoverEnabled(); break;
        case 8: *reinterpret_cast< QDeclarativeDrag**>(_v) = drag(); break;
        case 9: *reinterpret_cast< bool*>(_v) = preventStealing(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setAcceptedButtons(*reinterpret_cast< Qt::MouseButtons*>(_v)); break;
        case 7: setHoverEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: setPreventStealing(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeMouseArea::hoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeMouseArea::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeMouseArea::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeMouseArea::acceptedButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeMouseArea::hoverEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeMouseArea::positionChanged(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QDeclarativeMouseArea::mousePositionChanged(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QDeclarativeMouseArea::preventStealingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativeMouseArea::pressed(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QDeclarativeMouseArea::pressAndHold(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QDeclarativeMouseArea::released(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QDeclarativeMouseArea::clicked(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QDeclarativeMouseArea::doubleClicked(QDeclarativeMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QDeclarativeMouseArea::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QDeclarativeMouseArea::exited()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QDeclarativeMouseArea::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}
QT_END_MOC_NAMESPACE
