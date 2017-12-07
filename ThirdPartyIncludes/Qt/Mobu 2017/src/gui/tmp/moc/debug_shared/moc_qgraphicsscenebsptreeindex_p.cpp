/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsscenebsptreeindex_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsview/qgraphicsscenebsptreeindex_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsscenebsptreeindex_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsSceneBspTreeIndex[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   28,   27,   27, 0x09,
      57,   27,   27,   27, 0x08,
      78,   27,   27,   27, 0x08,

 // properties: name, type, flags
      99,   95, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsSceneBspTreeIndex[] = {
    "QGraphicsSceneBspTreeIndex\0\0rect\0"
    "updateSceneRect(QRectF)\0_q_updateSortCache()\0"
    "_q_updateIndex()\0int\0bspTreeDepth\0"
};

void QGraphicsSceneBspTreeIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsSceneBspTreeIndex *_t = static_cast<QGraphicsSceneBspTreeIndex *>(_o);
        switch (_id) {
        case 0: _t->updateSceneRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_updateSortCache(); break;
        case 2: _t->d_func()->_q_updateIndex(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsSceneBspTreeIndex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsSceneBspTreeIndex::staticMetaObject = {
    { &QGraphicsSceneIndex::staticMetaObject, qt_meta_stringdata_QGraphicsSceneBspTreeIndex,
      qt_meta_data_QGraphicsSceneBspTreeIndex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsSceneBspTreeIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsSceneBspTreeIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsSceneBspTreeIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsSceneBspTreeIndex))
        return static_cast<void*>(const_cast< QGraphicsSceneBspTreeIndex*>(this));
    return QGraphicsSceneIndex::qt_metacast(_clname);
}

int QGraphicsSceneBspTreeIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSceneIndex::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< int*>(_v) = bspTreeDepth(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBspTreeDepth(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
