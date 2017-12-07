/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativevaluetype_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qml/qdeclarativevaluetype_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativevaluetype_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeValueType[] = {

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

static const char qt_meta_stringdata_QDeclarativeValueType[] = {
    "QDeclarativeValueType\0"
};

void QDeclarativeValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeValueType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeValueType,
      qt_meta_data_QDeclarativeValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeValueType))
        return static_cast<void*>(const_cast< QDeclarativeValueType*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativePointFValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      34,   28, ((uint)QMetaType::QReal << 24) | 0x00095103,
      36,   28, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePointFValueType[] = {
    "QDeclarativePointFValueType\0qreal\0x\0"
    "y\0"
};

void QDeclarativePointFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePointFValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePointFValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativePointFValueType,
      qt_meta_data_QDeclarativePointFValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePointFValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePointFValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePointFValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePointFValueType))
        return static_cast<void*>(const_cast< QDeclarativePointFValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativePointFValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
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
static const uint qt_meta_data_QDeclarativePointValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      31,   27, 0x02095103,
      33,   27, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePointValueType[] = {
    "QDeclarativePointValueType\0int\0x\0y\0"
};

void QDeclarativePointValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePointValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePointValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativePointValueType,
      qt_meta_data_QDeclarativePointValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePointValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePointValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePointValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePointValueType))
        return static_cast<void*>(const_cast< QDeclarativePointValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativePointValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = x(); break;
        case 1: *reinterpret_cast< int*>(_v) = y(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< int*>(_v)); break;
        case 1: setY(*reinterpret_cast< int*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeSizeFValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      33,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,
      39,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeSizeFValueType[] = {
    "QDeclarativeSizeFValueType\0qreal\0width\0"
    "height\0"
};

void QDeclarativeSizeFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeSizeFValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeSizeFValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeSizeFValueType,
      qt_meta_data_QDeclarativeSizeFValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeSizeFValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeSizeFValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeSizeFValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSizeFValueType))
        return static_cast<void*>(const_cast< QDeclarativeSizeFValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeSizeFValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = width(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = height(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setHeight(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeSizeValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      30,   26, 0x02095103,
      36,   26, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeSizeValueType[] = {
    "QDeclarativeSizeValueType\0int\0width\0"
    "height\0"
};

void QDeclarativeSizeValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeSizeValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeSizeValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeSizeValueType,
      qt_meta_data_QDeclarativeSizeValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeSizeValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeSizeValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeSizeValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSizeValueType))
        return static_cast<void*>(const_cast< QDeclarativeSizeValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeSizeValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = width(); break;
        case 1: *reinterpret_cast< int*>(_v) = height(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: setHeight(*reinterpret_cast< int*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeRectFValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      33,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,
      35,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,
      37,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,
      43,   27, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeRectFValueType[] = {
    "QDeclarativeRectFValueType\0qreal\0x\0y\0"
    "width\0height\0"
};

void QDeclarativeRectFValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeRectFValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeRectFValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeRectFValueType,
      qt_meta_data_QDeclarativeRectFValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeRectFValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeRectFValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeRectFValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeRectFValueType))
        return static_cast<void*>(const_cast< QDeclarativeRectFValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeRectFValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = width(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = height(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setHeight(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeRectValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      30,   26, 0x02095103,
      32,   26, 0x02095103,
      34,   26, 0x02095103,
      40,   26, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeRectValueType[] = {
    "QDeclarativeRectValueType\0int\0x\0y\0"
    "width\0height\0"
};

void QDeclarativeRectValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeRectValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeRectValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeRectValueType,
      qt_meta_data_QDeclarativeRectValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeRectValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeRectValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeRectValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeRectValueType))
        return static_cast<void*>(const_cast< QDeclarativeRectValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeRectValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = x(); break;
        case 1: *reinterpret_cast< int*>(_v) = y(); break;
        case 2: *reinterpret_cast< int*>(_v) = width(); break;
        case 3: *reinterpret_cast< int*>(_v) = height(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< int*>(_v)); break;
        case 1: setY(*reinterpret_cast< int*>(_v)); break;
        case 2: setWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: setHeight(*reinterpret_cast< int*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeVector2DValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      36,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      38,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVector2DValueType[] = {
    "QDeclarativeVector2DValueType\0qreal\0"
    "x\0y\0"
};

void QDeclarativeVector2DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVector2DValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVector2DValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeVector2DValueType,
      qt_meta_data_QDeclarativeVector2DValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVector2DValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVector2DValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVector2DValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVector2DValueType))
        return static_cast<void*>(const_cast< QDeclarativeVector2DValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeVector2DValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
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
static const uint qt_meta_data_QDeclarativeVector3DValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      36,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      38,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      40,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVector3DValueType[] = {
    "QDeclarativeVector3DValueType\0qreal\0"
    "x\0y\0z\0"
};

void QDeclarativeVector3DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVector3DValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVector3DValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeVector3DValueType,
      qt_meta_data_QDeclarativeVector3DValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVector3DValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVector3DValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVector3DValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVector3DValueType))
        return static_cast<void*>(const_cast< QDeclarativeVector3DValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeVector3DValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = z(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setZ(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeVector4DValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      36,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      38,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      40,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,
      42,   30, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVector4DValueType[] = {
    "QDeclarativeVector4DValueType\0qreal\0"
    "x\0y\0z\0w\0"
};

void QDeclarativeVector4DValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVector4DValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVector4DValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeVector4DValueType,
      qt_meta_data_QDeclarativeVector4DValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVector4DValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVector4DValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVector4DValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVector4DValueType))
        return static_cast<void*>(const_cast< QDeclarativeVector4DValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeVector4DValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = z(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = w(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setZ(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setW(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeQuaternionValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      38,   32, ((uint)QMetaType::QReal << 24) | 0x00095103,
      45,   32, ((uint)QMetaType::QReal << 24) | 0x00095103,
      47,   32, ((uint)QMetaType::QReal << 24) | 0x00095103,
      49,   32, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeQuaternionValueType[] = {
    "QDeclarativeQuaternionValueType\0qreal\0"
    "scalar\0x\0y\0z\0"
};

void QDeclarativeQuaternionValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeQuaternionValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeQuaternionValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeQuaternionValueType,
      qt_meta_data_QDeclarativeQuaternionValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeQuaternionValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeQuaternionValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeQuaternionValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeQuaternionValueType))
        return static_cast<void*>(const_cast< QDeclarativeQuaternionValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeQuaternionValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = scalar(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = y(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = z(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setScalar(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setY(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setZ(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeMatrix4x4ValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      16,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      37,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      41,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      45,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      49,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      53,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      57,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      61,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      65,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      69,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      73,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      77,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      81,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      85,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      89,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      93,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,
      97,   31, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeMatrix4x4ValueType[] = {
    "QDeclarativeMatrix4x4ValueType\0qreal\0"
    "m11\0m12\0m13\0m14\0m21\0m22\0m23\0m24\0m31\0"
    "m32\0m33\0m34\0m41\0m42\0m43\0m44\0"
};

void QDeclarativeMatrix4x4ValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeMatrix4x4ValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeMatrix4x4ValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeMatrix4x4ValueType,
      qt_meta_data_QDeclarativeMatrix4x4ValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeMatrix4x4ValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeMatrix4x4ValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeMatrix4x4ValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeMatrix4x4ValueType))
        return static_cast<void*>(const_cast< QDeclarativeMatrix4x4ValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeMatrix4x4ValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = m11(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = m12(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = m13(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = m14(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = m21(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = m22(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = m23(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = m24(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = m31(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = m32(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = m33(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = m34(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = m41(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = m42(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = m43(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = m44(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setM11(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setM12(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setM13(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setM14(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setM21(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setM22(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setM23(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setM24(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setM31(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setM32(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setM33(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setM34(*reinterpret_cast< qreal*>(_v)); break;
        case 12: setM41(*reinterpret_cast< qreal*>(_v)); break;
        case 13: setM42(*reinterpret_cast< qreal*>(_v)); break;
        case 14: setM43(*reinterpret_cast< qreal*>(_v)); break;
        case 15: setM44(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QDeclarativeEasingValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      62,   28, 0x0009510b,
      73,   67, ((uint)QMetaType::QReal << 24) | 0x00095103,
      83,   67, ((uint)QMetaType::QReal << 24) | 0x00095103,
      93,   67, ((uint)QMetaType::QReal << 24) | 0x00095103,

 // enums: name, flags, count, data
     100, 0x0,   45,   30,

 // enum data: key, value
     105, uint(QDeclarativeEasingValueType::Linear),
     112, uint(QDeclarativeEasingValueType::InQuad),
     119, uint(QDeclarativeEasingValueType::OutQuad),
     127, uint(QDeclarativeEasingValueType::InOutQuad),
     137, uint(QDeclarativeEasingValueType::OutInQuad),
     147, uint(QDeclarativeEasingValueType::InCubic),
     155, uint(QDeclarativeEasingValueType::OutCubic),
     164, uint(QDeclarativeEasingValueType::InOutCubic),
     175, uint(QDeclarativeEasingValueType::OutInCubic),
     186, uint(QDeclarativeEasingValueType::InQuart),
     194, uint(QDeclarativeEasingValueType::OutQuart),
     203, uint(QDeclarativeEasingValueType::InOutQuart),
     214, uint(QDeclarativeEasingValueType::OutInQuart),
     225, uint(QDeclarativeEasingValueType::InQuint),
     233, uint(QDeclarativeEasingValueType::OutQuint),
     242, uint(QDeclarativeEasingValueType::InOutQuint),
     253, uint(QDeclarativeEasingValueType::OutInQuint),
     264, uint(QDeclarativeEasingValueType::InSine),
     271, uint(QDeclarativeEasingValueType::OutSine),
     279, uint(QDeclarativeEasingValueType::InOutSine),
     289, uint(QDeclarativeEasingValueType::OutInSine),
     299, uint(QDeclarativeEasingValueType::InExpo),
     306, uint(QDeclarativeEasingValueType::OutExpo),
     314, uint(QDeclarativeEasingValueType::InOutExpo),
     324, uint(QDeclarativeEasingValueType::OutInExpo),
     334, uint(QDeclarativeEasingValueType::InCirc),
     341, uint(QDeclarativeEasingValueType::OutCirc),
     349, uint(QDeclarativeEasingValueType::InOutCirc),
     359, uint(QDeclarativeEasingValueType::OutInCirc),
     369, uint(QDeclarativeEasingValueType::InElastic),
     379, uint(QDeclarativeEasingValueType::OutElastic),
     390, uint(QDeclarativeEasingValueType::InOutElastic),
     403, uint(QDeclarativeEasingValueType::OutInElastic),
     416, uint(QDeclarativeEasingValueType::InBack),
     423, uint(QDeclarativeEasingValueType::OutBack),
     431, uint(QDeclarativeEasingValueType::InOutBack),
     441, uint(QDeclarativeEasingValueType::OutInBack),
     451, uint(QDeclarativeEasingValueType::InBounce),
     460, uint(QDeclarativeEasingValueType::OutBounce),
     470, uint(QDeclarativeEasingValueType::InOutBounce),
     482, uint(QDeclarativeEasingValueType::OutInBounce),
     494, uint(QDeclarativeEasingValueType::InCurve),
     502, uint(QDeclarativeEasingValueType::OutCurve),
     511, uint(QDeclarativeEasingValueType::SineCurve),
     521, uint(QDeclarativeEasingValueType::CosineCurve),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeEasingValueType[] = {
    "QDeclarativeEasingValueType\0"
    "QDeclarativeEasingValueType::Type\0"
    "type\0qreal\0amplitude\0overshoot\0period\0"
    "Type\0Linear\0InQuad\0OutQuad\0InOutQuad\0"
    "OutInQuad\0InCubic\0OutCubic\0InOutCubic\0"
    "OutInCubic\0InQuart\0OutQuart\0InOutQuart\0"
    "OutInQuart\0InQuint\0OutQuint\0InOutQuint\0"
    "OutInQuint\0InSine\0OutSine\0InOutSine\0"
    "OutInSine\0InExpo\0OutExpo\0InOutExpo\0"
    "OutInExpo\0InCirc\0OutCirc\0InOutCirc\0"
    "OutInCirc\0InElastic\0OutElastic\0"
    "InOutElastic\0OutInElastic\0InBack\0"
    "OutBack\0InOutBack\0OutInBack\0InBounce\0"
    "OutBounce\0InOutBounce\0OutInBounce\0"
    "InCurve\0OutCurve\0SineCurve\0CosineCurve\0"
};

void QDeclarativeEasingValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeEasingValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeEasingValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeEasingValueType,
      qt_meta_data_QDeclarativeEasingValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeEasingValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeEasingValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeEasingValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeEasingValueType))
        return static_cast<void*>(const_cast< QDeclarativeEasingValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeEasingValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeEasingValueType::Type*>(_v) = type(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = amplitude(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = overshoot(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = period(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< QDeclarativeEasingValueType::Type*>(_v)); break;
        case 1: setAmplitude(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setOvershoot(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setPeriod(*reinterpret_cast< qreal*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeFontValueType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      34,   26, 0x0a095103,
      46,   41, 0x01095103,
      62,   51, 0x0009510b,
      69,   41, 0x01095103,
      76,   41, 0x01095103,
      86,   41, 0x01095103,
      95,   41, 0x01095103,
     111,  105, ((uint)QMetaType::QReal << 24) | 0x00095103,
     125,  121, 0x02095103,
     150,  135, 0x0009510b,
     165,  105, ((uint)QMetaType::QReal << 24) | 0x00095103,
     179,  105, ((uint)QMetaType::QReal << 24) | 0x00095103,

 // enums: name, flags, count, data
      51, 0x0,    5,   58,
     135, 0x0,    5,   68,

 // enum data: key, value
     191, uint(QDeclarativeFontValueType::Light),
     197, uint(QDeclarativeFontValueType::Normal),
     204, uint(QDeclarativeFontValueType::DemiBold),
     213, uint(QDeclarativeFontValueType::Bold),
     218, uint(QDeclarativeFontValueType::Black),
     224, uint(QDeclarativeFontValueType::MixedCase),
     234, uint(QDeclarativeFontValueType::AllUppercase),
     247, uint(QDeclarativeFontValueType::AllLowercase),
     260, uint(QDeclarativeFontValueType::SmallCaps),
     270, uint(QDeclarativeFontValueType::Capitalize),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeFontValueType[] = {
    "QDeclarativeFontValueType\0QString\0"
    "family\0bool\0bold\0FontWeight\0weight\0"
    "italic\0underline\0overline\0strikeout\0"
    "qreal\0pointSize\0int\0pixelSize\0"
    "Capitalization\0capitalization\0"
    "letterSpacing\0wordSpacing\0Light\0Normal\0"
    "DemiBold\0Bold\0Black\0MixedCase\0"
    "AllUppercase\0AllLowercase\0SmallCaps\0"
    "Capitalize\0"
};

void QDeclarativeFontValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeFontValueType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeFontValueType::staticMetaObject = {
    { &QDeclarativeValueType::staticMetaObject, qt_meta_stringdata_QDeclarativeFontValueType,
      qt_meta_data_QDeclarativeFontValueType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeFontValueType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeFontValueType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeFontValueType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeFontValueType))
        return static_cast<void*>(const_cast< QDeclarativeFontValueType*>(this));
    return QDeclarativeValueType::qt_metacast(_clname);
}

int QDeclarativeFontValueType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeValueType::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = family(); break;
        case 1: *reinterpret_cast< bool*>(_v) = bold(); break;
        case 2: *reinterpret_cast< FontWeight*>(_v) = weight(); break;
        case 3: *reinterpret_cast< bool*>(_v) = italic(); break;
        case 4: *reinterpret_cast< bool*>(_v) = underline(); break;
        case 5: *reinterpret_cast< bool*>(_v) = overline(); break;
        case 6: *reinterpret_cast< bool*>(_v) = strikeout(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = pointSize(); break;
        case 8: *reinterpret_cast< int*>(_v) = pixelSize(); break;
        case 9: *reinterpret_cast< Capitalization*>(_v) = capitalization(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = letterSpacing(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = wordSpacing(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFamily(*reinterpret_cast< QString*>(_v)); break;
        case 1: setBold(*reinterpret_cast< bool*>(_v)); break;
        case 2: setWeight(*reinterpret_cast< FontWeight*>(_v)); break;
        case 3: setItalic(*reinterpret_cast< bool*>(_v)); break;
        case 4: setUnderline(*reinterpret_cast< bool*>(_v)); break;
        case 5: setOverline(*reinterpret_cast< bool*>(_v)); break;
        case 6: setStrikeout(*reinterpret_cast< bool*>(_v)); break;
        case 7: setPointSize(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setPixelSize(*reinterpret_cast< int*>(_v)); break;
        case 9: setCapitalization(*reinterpret_cast< Capitalization*>(_v)); break;
        case 10: setLetterSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setWordSpacing(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
