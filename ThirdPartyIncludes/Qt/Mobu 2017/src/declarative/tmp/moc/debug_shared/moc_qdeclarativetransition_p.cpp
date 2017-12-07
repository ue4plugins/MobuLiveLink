/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativetransition_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativetransition_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativetransition_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       4,   33, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
      34,   23,
      50,   23,

 // signals: signature, parameters, type, tag, flags
      73,   72,   72,   72, 0x05,
      87,   72,   72,   72, 0x05,
      99,   72,   72,   72, 0x05,

 // properties: name, type, flags
     127,  119, 0x0a495003,
     132,  119, 0x0a495003,
     140,  135, 0x01495103,
      23,  151, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeTransition[] = {
    "QDeclarativeTransition\0animations\0"
    "DefaultProperty\0DeferredPropertyNames\0"
    "\0fromChanged()\0toChanged()\0"
    "reversibleChanged()\0QString\0from\0to\0"
    "bool\0reversible\0"
    "QDeclarativeListProperty<QDeclarativeAbstractAnimation>\0"
};

void QDeclarativeTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeTransition *_t = static_cast<QDeclarativeTransition *>(_o);
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->toChanged(); break;
        case 2: _t->reversibleChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeTransition,
      qt_meta_data_QDeclarativeTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeTransition))
        return static_cast<void*>(const_cast< QDeclarativeTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = fromState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = toState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = reversible(); break;
        case 3: *reinterpret_cast< QDeclarativeListProperty<QDeclarativeAbstractAnimation>*>(_v) = animations(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFromState(*reinterpret_cast< QString*>(_v)); break;
        case 1: setToState(*reinterpret_cast< QString*>(_v)); break;
        case 2: setReversible(*reinterpret_cast< bool*>(_v)); break;
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
void QDeclarativeTransition::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeTransition::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeTransition::reversibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
