/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      43,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   17,   17,   17, 0x08,

 // properties: name, type, flags
     112,  101, 0x0009510b,
     130,  123, 0x00495009,
     142,  137, 0x11095103,

 // properties: notify_signal_id
       0,
       1,
       0,

 // enums: name, flags, count, data
     101, 0x0,    2,   49,
     123, 0x0,    4,   53,

 // enum data: key, value
     149, uint(QDeclarativeView::SizeViewToRootObject),
     170, uint(QDeclarativeView::SizeRootObjectToView),
     191, uint(QDeclarativeView::Null),
     196, uint(QDeclarativeView::Ready),
     202, uint(QDeclarativeView::Loading),
     210, uint(QDeclarativeView::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeView[] = {
    "QDeclarativeView\0\0size\0sceneResized(QSize)\0"
    "statusChanged(QDeclarativeView::Status)\0"
    "continueExecute()\0ResizeMode\0resizeMode\0"
    "Status\0status\0QUrl\0source\0"
    "SizeViewToRootObject\0SizeRootObjectToView\0"
    "Null\0Ready\0Loading\0Error\0"
};

void QDeclarativeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeView *_t = static_cast<QDeclarativeView *>(_o);
        switch (_id) {
        case 0: _t->sceneResized((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< QDeclarativeView::Status(*)>(_a[1]))); break;
        case 2: _t->continueExecute(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QDeclarativeView,
      qt_meta_data_QDeclarativeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeView))
        return static_cast<void*>(const_cast< QDeclarativeView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QDeclarativeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< ResizeMode*>(_v) = resizeMode(); break;
        case 1: *reinterpret_cast< Status*>(_v) = status(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = source(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 2: setSource(*reinterpret_cast< QUrl*>(_v)); break;
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
void QDeclarativeView::sceneResized(QSize _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeView::statusChanged(QDeclarativeView::Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
