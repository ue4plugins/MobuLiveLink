/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeenginedebug_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../debugger/qdeclarativeenginedebug_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeenginedebug_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeEngineDebug[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      45,   38,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeEngineDebug[] = {
    "QDeclarativeEngineDebug\0\0newObjects()\0"
    "status\0statusChanged(Status)\0"
};

void QDeclarativeEngineDebug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeEngineDebug *_t = static_cast<QDeclarativeEngineDebug *>(_o);
        switch (_id) {
        case 0: _t->newObjects(); break;
        case 1: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeEngineDebug::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeEngineDebug::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeEngineDebug,
      qt_meta_data_QDeclarativeEngineDebug, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeEngineDebug::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeEngineDebug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeEngineDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeEngineDebug))
        return static_cast<void*>(const_cast< QDeclarativeEngineDebug*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeEngineDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDeclarativeEngineDebug::newObjects()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeEngineDebug::statusChanged(Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QDeclarativeDebugWatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      79,   68,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeDebugWatch[] = {
    "QDeclarativeDebugWatch\0\0"
    "stateChanged(QDeclarativeDebugWatch::State)\0"
    "name,value\0valueChanged(QByteArray,QVariant)\0"
};

void QDeclarativeDebugWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeDebugWatch *_t = static_cast<QDeclarativeDebugWatch *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QDeclarativeDebugWatch::State(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeDebugWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugWatch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugWatch,
      qt_meta_data_QDeclarativeDebugWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugWatch))
        return static_cast<void*>(const_cast< QDeclarativeDebugWatch*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeDebugWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDeclarativeDebugWatch::stateChanged(QDeclarativeDebugWatch::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeDebugWatch::valueChanged(const QByteArray & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QDeclarativeDebugPropertyWatch[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugPropertyWatch[] = {
    "QDeclarativeDebugPropertyWatch\0"
};

void QDeclarativeDebugPropertyWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugPropertyWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugPropertyWatch::staticMetaObject = {
    { &QDeclarativeDebugWatch::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugPropertyWatch,
      qt_meta_data_QDeclarativeDebugPropertyWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugPropertyWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugPropertyWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugPropertyWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugPropertyWatch))
        return static_cast<void*>(const_cast< QDeclarativeDebugPropertyWatch*>(this));
    return QDeclarativeDebugWatch::qt_metacast(_clname);
}

int QDeclarativeDebugPropertyWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugWatch::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeDebugObjectExpressionWatch[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugObjectExpressionWatch[] = {
    "QDeclarativeDebugObjectExpressionWatch\0"
};

void QDeclarativeDebugObjectExpressionWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugObjectExpressionWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugObjectExpressionWatch::staticMetaObject = {
    { &QDeclarativeDebugWatch::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugObjectExpressionWatch,
      qt_meta_data_QDeclarativeDebugObjectExpressionWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugObjectExpressionWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugObjectExpressionWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugObjectExpressionWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugObjectExpressionWatch))
        return static_cast<void*>(const_cast< QDeclarativeDebugObjectExpressionWatch*>(this));
    return QDeclarativeDebugWatch::qt_metacast(_clname);
}

int QDeclarativeDebugObjectExpressionWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugWatch::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeDebugQuery[] = {

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
      24,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeDebugQuery[] = {
    "QDeclarativeDebugQuery\0\0"
    "stateChanged(QDeclarativeDebugQuery::State)\0"
};

void QDeclarativeDebugQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeDebugQuery *_t = static_cast<QDeclarativeDebugQuery *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QDeclarativeDebugQuery::State(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeDebugQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugQuery,
      qt_meta_data_QDeclarativeDebugQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugQuery))
        return static_cast<void*>(const_cast< QDeclarativeDebugQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeDebugQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QDeclarativeDebugQuery::stateChanged(QDeclarativeDebugQuery::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QDeclarativeDebugEnginesQuery[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugEnginesQuery[] = {
    "QDeclarativeDebugEnginesQuery\0"
};

void QDeclarativeDebugEnginesQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugEnginesQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugEnginesQuery::staticMetaObject = {
    { &QDeclarativeDebugQuery::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugEnginesQuery,
      qt_meta_data_QDeclarativeDebugEnginesQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugEnginesQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugEnginesQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugEnginesQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugEnginesQuery))
        return static_cast<void*>(const_cast< QDeclarativeDebugEnginesQuery*>(this));
    return QDeclarativeDebugQuery::qt_metacast(_clname);
}

int QDeclarativeDebugEnginesQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeDebugRootContextQuery[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugRootContextQuery[] = {
    "QDeclarativeDebugRootContextQuery\0"
};

void QDeclarativeDebugRootContextQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugRootContextQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugRootContextQuery::staticMetaObject = {
    { &QDeclarativeDebugQuery::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugRootContextQuery,
      qt_meta_data_QDeclarativeDebugRootContextQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugRootContextQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugRootContextQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugRootContextQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugRootContextQuery))
        return static_cast<void*>(const_cast< QDeclarativeDebugRootContextQuery*>(this));
    return QDeclarativeDebugQuery::qt_metacast(_clname);
}

int QDeclarativeDebugRootContextQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeDebugObjectQuery[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugObjectQuery[] = {
    "QDeclarativeDebugObjectQuery\0"
};

void QDeclarativeDebugObjectQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugObjectQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugObjectQuery::staticMetaObject = {
    { &QDeclarativeDebugQuery::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugObjectQuery,
      qt_meta_data_QDeclarativeDebugObjectQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugObjectQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugObjectQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugObjectQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugObjectQuery))
        return static_cast<void*>(const_cast< QDeclarativeDebugObjectQuery*>(this));
    return QDeclarativeDebugQuery::qt_metacast(_clname);
}

int QDeclarativeDebugObjectQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeDebugExpressionQuery[] = {

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

static const char qt_meta_stringdata_QDeclarativeDebugExpressionQuery[] = {
    "QDeclarativeDebugExpressionQuery\0"
};

void QDeclarativeDebugExpressionQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeDebugExpressionQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeDebugExpressionQuery::staticMetaObject = {
    { &QDeclarativeDebugQuery::staticMetaObject, qt_meta_stringdata_QDeclarativeDebugExpressionQuery,
      qt_meta_data_QDeclarativeDebugExpressionQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeDebugExpressionQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeDebugExpressionQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeDebugExpressionQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeDebugExpressionQuery))
        return static_cast<void*>(const_cast< QDeclarativeDebugExpressionQuery*>(this));
    return QDeclarativeDebugQuery::qt_metacast(_clname);
}

int QDeclarativeDebugExpressionQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeDebugQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
