/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeimagebase_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeimagebase_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeimagebase_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeImageBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   68, // properties
       1,  103, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      43,   22,   22,   22, 0x05,
      63,   22,   22,   22, 0x05,
     117,  108,   22,   22, 0x05,
     140,   22,   22,   22, 0x05,
     162,   22,   22,   22, 0x85,
     177,   22,   22,   22, 0x85,

 // slots: signature, parameters, type, tag, flags
     193,   22,   22,   22, 0x08,
     213,  211,   22,   22, 0x08,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       1,
       1,

 // slots: revision
       0,
       0,

 // properties: name, type, flags
     251,  244, 0x00495009,
     263,  258, 0x11495103,
     108,  270, ((uint)QMetaType::QReal << 24) | 0x00495001,
     281,  276, 0x01495103,
     294,  276, 0x01c95103,
     306,  300, 0x15495107,
     317,  276, 0x01c95103,

 // properties: notify_signal_id
       2,
       0,
       3,
       4,
       5,
       1,
       6,

 // properties: revision
       0,
       0,
       0,
       0,
       1,
       0,
       1,

 // enums: name, flags, count, data
     244, 0x0,    4,  107,

 // enum data: key, value
     324, uint(QDeclarativeImageBase::Null),
     329, uint(QDeclarativeImageBase::Ready),
     335, uint(QDeclarativeImageBase::Loading),
     343, uint(QDeclarativeImageBase::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeImageBase[] = {
    "QDeclarativeImageBase\0\0sourceChanged(QUrl)\0"
    "sourceSizeChanged()\0"
    "statusChanged(QDeclarativeImageBase::Status)\0"
    "progress\0progressChanged(qreal)\0"
    "asynchronousChanged()\0cacheChanged()\0"
    "mirrorChanged()\0requestFinished()\0,\0"
    "requestProgress(qint64,qint64)\0Status\0"
    "status\0QUrl\0source\0qreal\0bool\0"
    "asynchronous\0cache\0QSize\0sourceSize\0"
    "mirror\0Null\0Ready\0Loading\0Error\0"
};

void QDeclarativeImageBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeImageBase *_t = static_cast<QDeclarativeImageBase *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->sourceSizeChanged(); break;
        case 2: _t->statusChanged((*reinterpret_cast< QDeclarativeImageBase::Status(*)>(_a[1]))); break;
        case 3: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->asynchronousChanged(); break;
        case 5: _t->cacheChanged(); break;
        case 6: _t->mirrorChanged(); break;
        case 7: _t->requestFinished(); break;
        case 8: _t->requestProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeImageBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeImageBase::staticMetaObject = {
    { &QDeclarativeImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeImageBase,
      qt_meta_data_QDeclarativeImageBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeImageBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeImageBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeImageBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeImageBase))
        return static_cast<void*>(const_cast< QDeclarativeImageBase*>(this));
    return QDeclarativeImplicitSizeItem::qt_metacast(_clname);
}

int QDeclarativeImageBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = status(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = source(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = progress(); break;
        case 3: *reinterpret_cast< bool*>(_v) = asynchronous(); break;
        case 4: *reinterpret_cast< bool*>(_v) = cache(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = sourceSize(); break;
        case 6: *reinterpret_cast< bool*>(_v) = mirror(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: setAsynchronous(*reinterpret_cast< bool*>(_v)); break;
        case 4: setCache(*reinterpret_cast< bool*>(_v)); break;
        case 5: setSourceSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: setMirror(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 5: resetSourceSize(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeImageBase::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeImageBase::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeImageBase::statusChanged(QDeclarativeImageBase::Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativeImageBase::progressChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeImageBase::asynchronousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeImageBase::cacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeImageBase::mirrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
