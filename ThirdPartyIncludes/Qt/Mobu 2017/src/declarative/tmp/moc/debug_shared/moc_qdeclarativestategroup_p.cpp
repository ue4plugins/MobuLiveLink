/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativestategroup_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativestategroup_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativestategroup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeStateGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // properties: name, type, flags
      54,   46, 0x0a495103,
     104,   60, 0x00094009,
     160,  111, 0x00094009,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeStateGroup[] = {
    "QDeclarativeStateGroup\0\0stateChanged(QString)\0"
    "QString\0state\0QDeclarativeListProperty<QDeclarativeState>\0"
    "states\0QDeclarativeListProperty<QDeclarativeTransition>\0"
    "transitions\0"
};

void QDeclarativeStateGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeStateGroup *_t = static_cast<QDeclarativeStateGroup *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeStateGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeStateGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeStateGroup,
      qt_meta_data_QDeclarativeStateGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeStateGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeStateGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeStateGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeStateGroup))
        return static_cast<void*>(const_cast< QDeclarativeStateGroup*>(this));
    if (!strcmp(_clname, "QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeStateGroup*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeStateGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeStateGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = state(); break;
        case 1: *reinterpret_cast< QDeclarativeListProperty<QDeclarativeState>*>(_v) = statesProperty(); break;
        case 2: *reinterpret_cast< QDeclarativeListProperty<QDeclarativeTransition>*>(_v) = transitionsProperty(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setState(*reinterpret_cast< QString*>(_v)); break;
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
void QDeclarativeStateGroup::stateChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
