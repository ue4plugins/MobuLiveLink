/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepath_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativepath_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepath_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativePathElement[] = {

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
      25,   24,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathElement[] = {
    "QDeclarativePathElement\0\0changed()\0"
};

void QDeclarativePathElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathElement *_t = static_cast<QDeclarativePathElement *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePathElement,
      qt_meta_data_QDeclarativePathElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathElement))
        return static_cast<void*>(const_cast< QDeclarativePathElement*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativePathElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QDeclarativePathElement::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QDeclarativePathAttribute[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      41,   26,   26,   26, 0x05,

 // properties: name, type, flags
      64,   56, 0x0a495103,
      75,   69, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathAttribute[] = {
    "QDeclarativePathAttribute\0\0nameChanged()\0"
    "valueChanged()\0QString\0name\0qreal\0"
    "value\0"
};

void QDeclarativePathAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathAttribute *_t = static_cast<QDeclarativePathAttribute *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->valueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathAttribute::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathAttribute::staticMetaObject = {
    { &QDeclarativePathElement::staticMetaObject, qt_meta_stringdata_QDeclarativePathAttribute,
      qt_meta_data_QDeclarativePathAttribute, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathAttribute::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathAttribute))
        return static_cast<void*>(const_cast< QDeclarativePathAttribute*>(this));
    return QDeclarativePathElement::qt_metacast(_clname);
}

int QDeclarativePathAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativePathElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = value(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setValue(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativePathAttribute::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePathAttribute::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QDeclarativeCurve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      30,   18,   18,   18, 0x05,

 // properties: name, type, flags
      47,   41, ((uint)QMetaType::QReal << 24) | 0x00495103,
      49,   41, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeCurve[] = {
    "QDeclarativeCurve\0\0xChanged()\0yChanged()\0"
    "qreal\0x\0y\0"
};

void QDeclarativeCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeCurve *_t = static_cast<QDeclarativeCurve *>(_o);
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeCurve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeCurve::staticMetaObject = {
    { &QDeclarativePathElement::staticMetaObject, qt_meta_stringdata_QDeclarativeCurve,
      qt_meta_data_QDeclarativeCurve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeCurve))
        return static_cast<void*>(const_cast< QDeclarativeCurve*>(this));
    return QDeclarativePathElement::qt_metacast(_clname);
}

int QDeclarativeCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativePathElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = y(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setY(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativeCurve::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeCurve::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QDeclarativePathLine[] = {

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

static const char qt_meta_stringdata_QDeclarativePathLine[] = {
    "QDeclarativePathLine\0"
};

void QDeclarativePathLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathLine::staticMetaObject = {
    { &QDeclarativeCurve::staticMetaObject, qt_meta_stringdata_QDeclarativePathLine,
      qt_meta_data_QDeclarativePathLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathLine))
        return static_cast<void*>(const_cast< QDeclarativePathLine*>(this));
    return QDeclarativeCurve::qt_metacast(_clname);
}

int QDeclarativePathLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeCurve::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativePathQuad[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      40,   21,   21,   21, 0x05,

 // properties: name, type, flags
      64,   58, ((uint)QMetaType::QReal << 24) | 0x00495103,
      73,   58, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathQuad[] = {
    "QDeclarativePathQuad\0\0controlXChanged()\0"
    "controlYChanged()\0qreal\0controlX\0"
    "controlY\0"
};

void QDeclarativePathQuad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathQuad *_t = static_cast<QDeclarativePathQuad *>(_o);
        switch (_id) {
        case 0: _t->controlXChanged(); break;
        case 1: _t->controlYChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathQuad::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathQuad::staticMetaObject = {
    { &QDeclarativeCurve::staticMetaObject, qt_meta_stringdata_QDeclarativePathQuad,
      qt_meta_data_QDeclarativePathQuad, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathQuad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathQuad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathQuad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathQuad))
        return static_cast<void*>(const_cast< QDeclarativePathQuad*>(this));
    return QDeclarativeCurve::qt_metacast(_clname);
}

int QDeclarativePathQuad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeCurve::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = controlX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = controlY(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setControlX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setControlY(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativePathQuad::controlXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePathQuad::controlYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QDeclarativePathCubic[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      42,   22,   22,   22, 0x05,
      61,   22,   22,   22, 0x05,
      80,   22,   22,   22, 0x05,

 // properties: name, type, flags
     105,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,
     115,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,
     125,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,
     135,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathCubic[] = {
    "QDeclarativePathCubic\0\0control1XChanged()\0"
    "control1YChanged()\0control2XChanged()\0"
    "control2YChanged()\0qreal\0control1X\0"
    "control1Y\0control2X\0control2Y\0"
};

void QDeclarativePathCubic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathCubic *_t = static_cast<QDeclarativePathCubic *>(_o);
        switch (_id) {
        case 0: _t->control1XChanged(); break;
        case 1: _t->control1YChanged(); break;
        case 2: _t->control2XChanged(); break;
        case 3: _t->control2YChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathCubic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathCubic::staticMetaObject = {
    { &QDeclarativeCurve::staticMetaObject, qt_meta_stringdata_QDeclarativePathCubic,
      qt_meta_data_QDeclarativePathCubic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathCubic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathCubic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathCubic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathCubic))
        return static_cast<void*>(const_cast< QDeclarativePathCubic*>(this));
    return QDeclarativeCurve::qt_metacast(_clname);
}

int QDeclarativePathCubic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeCurve::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = control1X(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = control1Y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = control2X(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = control2Y(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setControl1X(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setControl1Y(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setControl2X(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setControl2Y(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativePathCubic::control1XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePathCubic::control1YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativePathCubic::control2XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativePathCubic::control2YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_QDeclarativePathPercent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // properties: name, type, flags
      46,   40, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathPercent[] = {
    "QDeclarativePathPercent\0\0valueChanged()\0"
    "qreal\0value\0"
};

void QDeclarativePathPercent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathPercent *_t = static_cast<QDeclarativePathPercent *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathPercent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathPercent::staticMetaObject = {
    { &QDeclarativePathElement::staticMetaObject, qt_meta_stringdata_QDeclarativePathPercent,
      qt_meta_data_QDeclarativePathPercent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathPercent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathPercent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathPercent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathPercent))
        return static_cast<void*>(const_cast< QDeclarativePathPercent*>(this));
    return QDeclarativePathElement::qt_metacast(_clname);
}

int QDeclarativePathPercent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativePathElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< qreal*>(_v)); break;
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

// SIGNAL 0
void QDeclarativePathPercent::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QDeclarativePath[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       4,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
      30,   17,

 // signals: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x05,
      57,   46,   46,   46, 0x05,
      73,   46,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   46,   46,   46, 0x08,

 // properties: name, type, flags
      17,  103, 0x00095009,
     159,  153, ((uint)QMetaType::QReal << 24) | 0x00495103,
     166,  153, ((uint)QMetaType::QReal << 24) | 0x00495103,
     178,  173, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePath[] = {
    "QDeclarativePath\0pathElements\0"
    "DefaultProperty\0\0changed()\0startXChanged()\0"
    "startYChanged()\0processPath()\0"
    "QDeclarativeListProperty<QDeclarativePathElement>\0"
    "qreal\0startX\0startY\0bool\0closed\0"
};

void QDeclarativePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePath *_t = static_cast<QDeclarativePath *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->startXChanged(); break;
        case 2: _t->startYChanged(); break;
        case 3: _t->processPath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePath::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePath::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePath,
      qt_meta_data_QDeclarativePath, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePath::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePath::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePath))
        return static_cast<void*>(const_cast< QDeclarativePath*>(this));
    if (!strcmp(_clname, "QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativePath*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativePath*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativePath*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QDeclarativeListProperty<QDeclarativePathElement>*>(_v) = pathElements(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = startX(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = startY(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isClosed(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setStartX(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setStartY(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativePath::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePath::startXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativePath::startYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
