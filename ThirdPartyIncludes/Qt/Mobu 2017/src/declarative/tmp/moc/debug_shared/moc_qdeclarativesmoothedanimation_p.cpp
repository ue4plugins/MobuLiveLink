/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativesmoothedanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativesmoothedanimation_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativesmoothedanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeSmoothedAnimation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       1,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      49,   30,   30,   30, 0x05,
      72,   30,   30,   30, 0x05,

 // properties: name, type, flags
     105,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,
     128,  114, 0x0049510b,
     142,   99, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
     114, 0x0,    3,   45,

 // enum data: key, value
     160, uint(QDeclarativeSmoothedAnimation::Eased),
     166, uint(QDeclarativeSmoothedAnimation::Immediate),
     176, uint(QDeclarativeSmoothedAnimation::Sync),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeSmoothedAnimation[] = {
    "QDeclarativeSmoothedAnimation\0\0"
    "velocityChanged()\0reversingModeChanged()\0"
    "maximumEasingTimeChanged()\0qreal\0"
    "velocity\0ReversingMode\0reversingMode\0"
    "maximumEasingTime\0Eased\0Immediate\0"
    "Sync\0"
};

void QDeclarativeSmoothedAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeSmoothedAnimation *_t = static_cast<QDeclarativeSmoothedAnimation *>(_o);
        switch (_id) {
        case 0: _t->velocityChanged(); break;
        case 1: _t->reversingModeChanged(); break;
        case 2: _t->maximumEasingTimeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeSmoothedAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeSmoothedAnimation::staticMetaObject = {
    { &QDeclarativeNumberAnimation::staticMetaObject, qt_meta_stringdata_QDeclarativeSmoothedAnimation,
      qt_meta_data_QDeclarativeSmoothedAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeSmoothedAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeSmoothedAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeSmoothedAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSmoothedAnimation))
        return static_cast<void*>(const_cast< QDeclarativeSmoothedAnimation*>(this));
    return QDeclarativeNumberAnimation::qt_metacast(_clname);
}

int QDeclarativeSmoothedAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeNumberAnimation::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = velocity(); break;
        case 1: *reinterpret_cast< ReversingMode*>(_v) = reversingMode(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = maximumEasingTime(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setReversingMode(*reinterpret_cast< ReversingMode*>(_v)); break;
        case 2: setMaximumEasingTime(*reinterpret_cast< qreal*>(_v)); break;
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
void QDeclarativeSmoothedAnimation::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeSmoothedAnimation::reversingModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeSmoothedAnimation::maximumEasingTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
