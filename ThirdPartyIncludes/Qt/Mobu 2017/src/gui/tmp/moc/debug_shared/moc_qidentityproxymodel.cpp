/****************************************************************************
** Meta object code from reading C++ file 'qidentityproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qidentityproxymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qidentityproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QIdentityProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   21,   20,   20, 0x08,
      76,   21,   20,   20, 0x08,
     119,   21,   20,   20, 0x08,
     170,   21,   20,   20, 0x08,
     217,  212,   20,   20, 0x08,
     282,  212,   20,   20, 0x08,
     338,   21,   20,   20, 0x08,
     393,   21,   20,   20, 0x08,
     439,   21,   20,   20, 0x08,
     493,   21,   20,   20, 0x08,
     538,  212,   20,   20, 0x08,
     606,  212,   20,   20, 0x08,
     667,  665,   20,   20, 0x08,
     736,  713,   20,   20, 0x08,
     788,   20,   20,   20, 0x08,
     822,   20,   20,   20, 0x08,
     847,   20,   20,   20, 0x08,
     878,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QIdentityProxyModel[] = {
    "QIdentityProxyModel\0\0,,\0"
    "_q_sourceRowsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceRowsRemoved(QModelIndex,int,int)\0"
    ",,,,\0"
    "_q_sourceRowsAboutToBeMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "_q_sourceRowsMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "_q_sourceColumnsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "_q_sourceColumnsMoved(QModelIndex,int,int,QModelIndex,int)\0"
    ",\0_q_sourceDataChanged(QModelIndex,QModelIndex)\0"
    "orientation,first,last\0"
    "_q_sourceHeaderDataChanged(Qt::Orientation,int,int)\0"
    "_q_sourceLayoutAboutToBeChanged()\0"
    "_q_sourceLayoutChanged()\0"
    "_q_sourceModelAboutToBeReset()\0"
    "_q_sourceModelReset()\0"
};

void QIdentityProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QIdentityProxyModel *_t = static_cast<QIdentityProxyModel *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_sourceRowsAboutToBeInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->d_func()->_q_sourceRowsInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->d_func()->_q_sourceRowsAboutToBeRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_sourceRowsRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_sourceRowsAboutToBeMoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->d_func()->_q_sourceRowsMoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->d_func()->_q_sourceColumnsAboutToBeInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->d_func()->_q_sourceColumnsInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->d_func()->_q_sourceColumnsAboutToBeRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->d_func()->_q_sourceColumnsRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->d_func()->_q_sourceColumnsAboutToBeMoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 11: _t->d_func()->_q_sourceColumnsMoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 12: _t->d_func()->_q_sourceDataChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 13: _t->d_func()->_q_sourceHeaderDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->d_func()->_q_sourceLayoutAboutToBeChanged(); break;
        case 15: _t->d_func()->_q_sourceLayoutChanged(); break;
        case 16: _t->d_func()->_q_sourceModelAboutToBeReset(); break;
        case 17: _t->d_func()->_q_sourceModelReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QIdentityProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QIdentityProxyModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_QIdentityProxyModel,
      qt_meta_data_QIdentityProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QIdentityProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QIdentityProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QIdentityProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QIdentityProxyModel))
        return static_cast<void*>(const_cast< QIdentityProxyModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int QIdentityProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
