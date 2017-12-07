/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativetimer_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativetimer_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativetimer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      31,   18,   18,   18, 0x05,
      48,   18,   18,   18, 0x05,
      66,   18,   18,   18, 0x05,
      82,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   18,   18,   18, 0x0a,
     116,   18,   18,   18, 0x0a,
     123,   18,   18,   18, 0x0a,
     133,   18,   18,   18, 0x08,
     142,   18,   18,   18, 0x08,

 // properties: name, type, flags
     157,  153, 0x02495103,
     171,  166, 0x01495103,
     179,  166, 0x01495003,
     186,  166, 0x01495103,
     212,  203, 0x88095401,

 // properties: notify_signal_id
       2,
       1,
       3,
       4,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeTimer[] = {
    "QDeclarativeTimer\0\0triggered()\0"
    "runningChanged()\0intervalChanged()\0"
    "repeatChanged()\0triggeredOnStartChanged()\0"
    "start()\0stop()\0restart()\0ticked()\0"
    "finished()\0int\0interval\0bool\0running\0"
    "repeat\0triggeredOnStart\0QObject*\0"
    "parent\0"
};

void QDeclarativeTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeTimer *_t = static_cast<QDeclarativeTimer *>(_o);
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->intervalChanged(); break;
        case 3: _t->repeatChanged(); break;
        case 4: _t->triggeredOnStartChanged(); break;
        case 5: _t->start(); break;
        case 6: _t->stop(); break;
        case 7: _t->restart(); break;
        case 8: _t->ticked(); break;
        case 9: _t->finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeTimer,
      qt_meta_data_QDeclarativeTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeTimer))
        return static_cast<void*>(const_cast< QDeclarativeTimer*>(this));
    if (!strcmp(_clname, "QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeTimer*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = interval(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isRunning(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isRepeating(); break;
        case 3: *reinterpret_cast< bool*>(_v) = triggeredOnStart(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = parent(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInterval(*reinterpret_cast< int*>(_v)); break;
        case 1: setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 2: setRepeating(*reinterpret_cast< bool*>(_v)); break;
        case 3: setTriggeredOnStart(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
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

// SIGNAL 0
void QDeclarativeTimer::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeTimer::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeTimer::intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeTimer::repeatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeTimer::triggeredOnStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
