/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeparticles_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdeclarativeparticles_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeparticles_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeParticleMotion[] = {

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

static const char qt_meta_stringdata_QDeclarativeParticleMotion[] = {
    "QDeclarativeParticleMotion\0"
};

void QDeclarativeParticleMotion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeParticleMotion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParticleMotion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeParticleMotion,
      qt_meta_data_QDeclarativeParticleMotion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParticleMotion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParticleMotion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParticleMotion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParticleMotion))
        return static_cast<void*>(const_cast< QDeclarativeParticleMotion*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeParticleMotion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeParticleMotionLinear[] = {

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

static const char qt_meta_stringdata_QDeclarativeParticleMotionLinear[] = {
    "QDeclarativeParticleMotionLinear\0"
};

void QDeclarativeParticleMotionLinear::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeParticleMotionLinear::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParticleMotionLinear::staticMetaObject = {
    { &QDeclarativeParticleMotion::staticMetaObject, qt_meta_stringdata_QDeclarativeParticleMotionLinear,
      qt_meta_data_QDeclarativeParticleMotionLinear, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParticleMotionLinear::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParticleMotionLinear::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParticleMotionLinear::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParticleMotionLinear))
        return static_cast<void*>(const_cast< QDeclarativeParticleMotionLinear*>(this));
    return QDeclarativeParticleMotion::qt_metacast(_clname);
}

int QDeclarativeParticleMotionLinear::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeParticleMotion::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeParticleMotionGravity[] = {

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
      35,   34,   34,   34, 0x05,
      55,   34,   34,   34, 0x05,
      75,   34,   34,   34, 0x05,

 // properties: name, type, flags
     103,   97, ((uint)QMetaType::QReal << 24) | 0x00495003,
     114,   97, ((uint)QMetaType::QReal << 24) | 0x00495003,
     125,   97, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeParticleMotionGravity[] = {
    "QDeclarativeParticleMotionGravity\0\0"
    "xattractorChanged()\0yattractorChanged()\0"
    "accelerationChanged()\0qreal\0xattractor\0"
    "yattractor\0acceleration\0"
};

void QDeclarativeParticleMotionGravity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeParticleMotionGravity *_t = static_cast<QDeclarativeParticleMotionGravity *>(_o);
        switch (_id) {
        case 0: _t->xattractorChanged(); break;
        case 1: _t->yattractorChanged(); break;
        case 2: _t->accelerationChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeParticleMotionGravity::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParticleMotionGravity::staticMetaObject = {
    { &QDeclarativeParticleMotion::staticMetaObject, qt_meta_stringdata_QDeclarativeParticleMotionGravity,
      qt_meta_data_QDeclarativeParticleMotionGravity, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParticleMotionGravity::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParticleMotionGravity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParticleMotionGravity::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParticleMotionGravity))
        return static_cast<void*>(const_cast< QDeclarativeParticleMotionGravity*>(this));
    return QDeclarativeParticleMotion::qt_metacast(_clname);
}

int QDeclarativeParticleMotionGravity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeParticleMotion::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = xAttractor(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = yAttractor(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = acceleration(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setXAttractor(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setYAttractor(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativeParticleMotionGravity::xattractorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeParticleMotionGravity::yattractorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeParticleMotionGravity::accelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QDeclarativeParticleMotionWander[] = {

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
      34,   33,   33,   33, 0x05,
      53,   33,   33,   33, 0x05,
      72,   33,   33,   33, 0x05,

 // properties: name, type, flags
      92,   86, ((uint)QMetaType::QReal << 24) | 0x00495003,
     102,   86, ((uint)QMetaType::QReal << 24) | 0x00495003,
     112,   86, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeParticleMotionWander[] = {
    "QDeclarativeParticleMotionWander\0\0"
    "xvarianceChanged()\0yvarianceChanged()\0"
    "paceChanged()\0qreal\0xvariance\0yvariance\0"
    "pace\0"
};

void QDeclarativeParticleMotionWander::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeParticleMotionWander *_t = static_cast<QDeclarativeParticleMotionWander *>(_o);
        switch (_id) {
        case 0: _t->xvarianceChanged(); break;
        case 1: _t->yvarianceChanged(); break;
        case 2: _t->paceChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeParticleMotionWander::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParticleMotionWander::staticMetaObject = {
    { &QDeclarativeParticleMotion::staticMetaObject, qt_meta_stringdata_QDeclarativeParticleMotionWander,
      qt_meta_data_QDeclarativeParticleMotionWander, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParticleMotionWander::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParticleMotionWander::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParticleMotionWander::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParticleMotionWander))
        return static_cast<void*>(const_cast< QDeclarativeParticleMotionWander*>(this));
    return QDeclarativeParticleMotion::qt_metacast(_clname);
}

int QDeclarativeParticleMotionWander::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeParticleMotion::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = xVariance(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = yVariance(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = pace(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setXVariance(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setYVariance(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setPace(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativeParticleMotionWander::xvarianceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeParticleMotionWander::yvarianceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeParticleMotionWander::paceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QDeclarativeParticles[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      17,   16, // methods
      13,  101, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // classinfo: key, value
      29,   22,

 // signals: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x05,
      62,   45,   45,   45, 0x05,
      77,   45,   45,   45, 0x05,
      99,   45,   45,   45, 0x05,
     125,   45,   45,   45, 0x05,
     143,   45,   45,   45, 0x05,
     170,   45,   45,   45, 0x05,
     194,   45,   45,   45, 0x05,
     219,   45,   45,   45, 0x05,
     234,   45,   45,   45, 0x05,
     258,   45,   45,   45, 0x05,
     276,   45,   45,   45, 0x05,
     303,   45,   45,   45, 0x05,
     321,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     356,  337,   45,   45, 0x0a,
     377,  371,   45,   45, 0x2a,
     388,   45,   45,   45, 0x08,

 // properties: name, type, flags
     407,  402, 0x11495103,
     371,  414, 0x02495103,
     418,  414, 0x02495103,
     437,  431, ((uint)QMetaType::QReal << 24) | 0x00495103,
     454,  414, 0x02495103,
     463,  414, 0x02495103,
     481,  414, 0x02495103,
     496,  414, 0x02495103,
     512,  431, ((uint)QMetaType::QReal << 24) | 0x00495103,
     518,  431, ((uint)QMetaType::QReal << 24) | 0x00495103,
     533,  431, ((uint)QMetaType::QReal << 24) | 0x00495103,
     542,  431, ((uint)QMetaType::QReal << 24) | 0x00495103,
      22,  560, 0x0049510b,

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
      11,
      13,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeParticles[] = {
    "QDeclarativeParticles\0motion\0"
    "DefaultProperty\0\0sourceChanged()\0"
    "countChanged()\0emissionRateChanged()\0"
    "emissionVarianceChanged()\0lifeSpanChanged()\0"
    "lifeSpanDeviationChanged()\0"
    "fadeInDurationChanged()\0"
    "fadeOutDurationChanged()\0angleChanged()\0"
    "angleDeviationChanged()\0velocityChanged()\0"
    "velocityDeviationChanged()\0emittingChanged()\0"
    "motionChanged()\0count,emissionRate\0"
    "burst(int,int)\0count\0burst(int)\0"
    "imageLoaded()\0QUrl\0source\0int\0"
    "emissionRate\0qreal\0emissionVariance\0"
    "lifeSpan\0lifeSpanDeviation\0fadeInDuration\0"
    "fadeOutDuration\0angle\0angleDeviation\0"
    "velocity\0velocityDeviation\0"
    "QDeclarativeParticleMotion*\0"
};

void QDeclarativeParticles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeParticles *_t = static_cast<QDeclarativeParticles *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->countChanged(); break;
        case 2: _t->emissionRateChanged(); break;
        case 3: _t->emissionVarianceChanged(); break;
        case 4: _t->lifeSpanChanged(); break;
        case 5: _t->lifeSpanDeviationChanged(); break;
        case 6: _t->fadeInDurationChanged(); break;
        case 7: _t->fadeOutDurationChanged(); break;
        case 8: _t->angleChanged(); break;
        case 9: _t->angleDeviationChanged(); break;
        case 10: _t->velocityChanged(); break;
        case 11: _t->velocityDeviationChanged(); break;
        case 12: _t->emittingChanged(); break;
        case 13: _t->motionChanged(); break;
        case 14: _t->burst((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->burst((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->imageLoaded(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeParticles::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParticles::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeParticles,
      qt_meta_data_QDeclarativeParticles, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParticles::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParticles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParticles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParticles))
        return static_cast<void*>(const_cast< QDeclarativeParticles*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeParticles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = source(); break;
        case 1: *reinterpret_cast< int*>(_v) = count(); break;
        case 2: *reinterpret_cast< int*>(_v) = emissionRate(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = emissionVariance(); break;
        case 4: *reinterpret_cast< int*>(_v) = lifeSpan(); break;
        case 5: *reinterpret_cast< int*>(_v) = lifeSpanDeviation(); break;
        case 6: *reinterpret_cast< int*>(_v) = fadeInDuration(); break;
        case 7: *reinterpret_cast< int*>(_v) = fadeOutDuration(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = angle(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = angleDeviation(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = velocity(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = velocityDeviation(); break;
        case 12: *reinterpret_cast< QDeclarativeParticleMotion**>(_v) = motion(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: setCount(*reinterpret_cast< int*>(_v)); break;
        case 2: setEmissionRate(*reinterpret_cast< int*>(_v)); break;
        case 3: setEmissionVariance(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setLifeSpan(*reinterpret_cast< int*>(_v)); break;
        case 5: setLifeSpanDeviation(*reinterpret_cast< int*>(_v)); break;
        case 6: setFadeInDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: setFadeOutDuration(*reinterpret_cast< int*>(_v)); break;
        case 8: setAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setAngleDeviation(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setVelocityDeviation(*reinterpret_cast< qreal*>(_v)); break;
        case 12: setMotion(*reinterpret_cast< QDeclarativeParticleMotion**>(_v)); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeParticles::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeParticles::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeParticles::emissionRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeParticles::emissionVarianceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeParticles::lifeSpanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeParticles::lifeSpanDeviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeParticles::fadeInDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeParticles::fadeOutDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativeParticles::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativeParticles::angleDeviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativeParticles::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QDeclarativeParticles::velocityDeviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDeclarativeParticles::emittingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QDeclarativeParticles::motionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}
QT_END_MOC_NAMESPACE
