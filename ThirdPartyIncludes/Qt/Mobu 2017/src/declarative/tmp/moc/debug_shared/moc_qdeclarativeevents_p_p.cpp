/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeevents_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeevents_p_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeevents_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeKeyEvent[] = {

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
      25,   21, 0x02095001,
      37,   29, 0x0a095001,
      42,   21, 0x02095001,
      57,   52, 0x01095001,
      70,   21, 0x02095001,
      76,   52, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeKeyEvent[] = {
    "QDeclarativeKeyEvent\0int\0key\0QString\0"
    "text\0modifiers\0bool\0isAutoRepeat\0count\0"
    "accepted\0"
};

void QDeclarativeKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeKeyEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeKeyEvent,
      qt_meta_data_QDeclarativeKeyEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeKeyEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeKeyEvent))
        return static_cast<void*>(const_cast< QDeclarativeKeyEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< int*>(_v) = modifiers(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isAutoRepeat(); break;
        case 4: *reinterpret_cast< int*>(_v) = count(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isAccepted(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: setAccepted(*reinterpret_cast< bool*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeMouseEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      27,   23, 0x02095001,
      29,   23, 0x02095001,
      31,   23, 0x02095001,
      38,   23, 0x02095001,
      46,   23, 0x02095001,
      61,   56, 0x01095001,
      69,   56, 0x01095001,
      77,   56, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeMouseEvent[] = {
    "QDeclarativeMouseEvent\0int\0x\0y\0button\0"
    "buttons\0modifiers\0bool\0wasHeld\0isClick\0"
    "accepted\0"
};

void QDeclarativeMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeMouseEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeMouseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeMouseEvent,
      qt_meta_data_QDeclarativeMouseEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeMouseEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeMouseEvent))
        return static_cast<void*>(const_cast< QDeclarativeMouseEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = x(); break;
        case 1: *reinterpret_cast< int*>(_v) = y(); break;
        case 2: *reinterpret_cast< int*>(_v) = button(); break;
        case 3: *reinterpret_cast< int*>(_v) = buttons(); break;
        case 4: *reinterpret_cast< int*>(_v) = modifiers(); break;
        case 5: *reinterpret_cast< bool*>(_v) = wasHeld(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isClick(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isAccepted(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 7: setAccepted(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
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
QT_END_MOC_NAMESPACE
