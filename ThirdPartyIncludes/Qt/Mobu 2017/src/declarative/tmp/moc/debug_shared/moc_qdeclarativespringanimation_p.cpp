/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativespringanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativespringanimation_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativespringanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeSpringAnimation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      46,   28,   28,   28, 0x05,
      60,   28,   28,   28, 0x05,

 // properties: name, type, flags
      80,   74, ((uint)QMetaType::QReal << 24) | 0x00095103,
      89,   74, ((uint)QMetaType::QReal << 24) | 0x00095103,
      96,   74, ((uint)QMetaType::QReal << 24) | 0x00095103,
     104,   74, ((uint)QMetaType::QReal << 24) | 0x00095103,
     112,   74, ((uint)QMetaType::QReal << 24) | 0x00495103,
     120,   74, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeSpringAnimation[] = {
    "QDeclarativeSpringAnimation\0\0"
    "modulusChanged()\0massChanged()\0"
    "syncChanged()\0qreal\0velocity\0spring\0"
    "damping\0epsilon\0modulus\0mass\0"
};

void QDeclarativeSpringAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeSpringAnimation *_t = static_cast<QDeclarativeSpringAnimation *>(_o);
        switch (_id) {
        case 0: _t->modulusChanged(); break;
        case 1: _t->massChanged(); break;
        case 2: _t->syncChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeSpringAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeSpringAnimation::staticMetaObject = {
    { &QDeclarativeNumberAnimation::staticMetaObject, qt_meta_stringdata_QDeclarativeSpringAnimation,
      qt_meta_data_QDeclarativeSpringAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeSpringAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeSpringAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeSpringAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSpringAnimation))
        return static_cast<void*>(const_cast< QDeclarativeSpringAnimation*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativePropertyValueSource"))
        return static_cast< QDeclarativePropertyValueSource*>(const_cast< QDeclarativeSpringAnimation*>(this));
    return QDeclarativeNumberAnimation::qt_metacast(_clname);
}

int QDeclarativeSpringAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 1: *reinterpret_cast< qreal*>(_v) = spring(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = damping(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = epsilon(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = modulus(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = mass(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setSpring(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setDamping(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setEpsilon(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setModulus(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setMass(*reinterpret_cast< qreal*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeSpringAnimation::modulusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeSpringAnimation::massChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeSpringAnimation::syncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
