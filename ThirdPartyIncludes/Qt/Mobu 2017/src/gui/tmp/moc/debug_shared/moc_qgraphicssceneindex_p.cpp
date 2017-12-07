/****************************************************************************
** Meta object code from reading C++ file 'qgraphicssceneindex_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsview/qgraphicssceneindex_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicssceneindex_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsSceneIndex[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsSceneIndex[] = {
    "QGraphicsSceneIndex\0\0rect\0"
    "updateSceneRect(QRectF)\0"
};

void QGraphicsSceneIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsSceneIndex *_t = static_cast<QGraphicsSceneIndex *>(_o);
        switch (_id) {
        case 0: _t->updateSceneRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsSceneIndex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsSceneIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsSceneIndex,
      qt_meta_data_QGraphicsSceneIndex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsSceneIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsSceneIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsSceneIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsSceneIndex))
        return static_cast<void*>(const_cast< QGraphicsSceneIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsSceneIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
