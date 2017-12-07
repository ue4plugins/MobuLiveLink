/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativecomponent.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qml/qdeclarativecomponent.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativecomponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeComponent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      68,   22,   22,   22, 0x05,

 // methods: signature, parameters, type, tag, flags
      99,   22,   91,   22, 0x02,
     133,  126,  113,   22, 0x01,
     172,  156,  113,   22, 0x81,

 // signals: revision
       0,
       0,

 // methods: revision
       0,
       0,
       1,

 // properties: name, type, flags
     214,  208, ((uint)QMetaType::QReal << 24) | 0x00495001,
     230,  223, 0x00495009,
     242,  237, 0x11095401,

 // properties: notify_signal_id
       1,
       0,
       0,

 // enums: name, flags, count, data
     223, 0x0,    4,   60,

 // enum data: key, value
     246, uint(QDeclarativeComponent::Null),
     251, uint(QDeclarativeComponent::Ready),
     257, uint(QDeclarativeComponent::Loading),
     265, uint(QDeclarativeComponent::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeComponent[] = {
    "QDeclarativeComponent\0\0"
    "statusChanged(QDeclarativeComponent::Status)\0"
    "progressChanged(qreal)\0QString\0"
    "errorString()\0QScriptValue\0parent\0"
    "createObject(QObject*)\0parent,valuemap\0"
    "createObject(QObject*,QScriptValue)\0"
    "qreal\0progress\0Status\0status\0QUrl\0url\0"
    "Null\0Ready\0Loading\0Error\0"
};

void QDeclarativeComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeComponent *_t = static_cast<QDeclarativeComponent *>(_o);
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QDeclarativeComponent::Status(*)>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QScriptValue _r = _t->createObject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 4: { QScriptValue _r = _t->createObject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeComponent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeComponent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeComponent,
      qt_meta_data_QDeclarativeComponent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeComponent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeComponent))
        return static_cast<void*>(const_cast< QDeclarativeComponent*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = progress(); break;
        case 1: *reinterpret_cast< Status*>(_v) = status(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = url(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
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
void QDeclarativeComponent::statusChanged(QDeclarativeComponent::Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeComponent::progressChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
