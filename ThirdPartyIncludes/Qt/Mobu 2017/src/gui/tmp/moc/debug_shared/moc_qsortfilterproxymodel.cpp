/****************************************************************************
** Meta object code from reading C++ file 'qsortfilterproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qsortfilterproxymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsortfilterproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSortFilterProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       8,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   23,   22,   22, 0x0a,
      56,   23,   22,   22, 0x0a,
      83,   23,   22,   22, 0x0a,
     113,   22,   22,   22, 0x0a,
     121,   22,   22,   22, 0x0a,
     170,  134,   22,   22, 0x08,
     238,  216,   22,   22, 0x08,
     290,   22,   22,   22, 0x08,
     316,   22,   22,   22, 0x08,
     333,   22,   22,   22, 0x08,
     367,   22,   22,   22, 0x08,
     416,  392,   22,   22, 0x08,
     468,  392,   22,   22, 0x08,
     511,  392,   22,   22, 0x08,
     562,  392,   22,   22, 0x08,
     604,  392,   22,   22, 0x08,
     659,  392,   22,   22, 0x08,
     705,  392,   22,   22, 0x08,
     759,  392,   22,   22, 0x08,
     804,   22,   22,   22, 0x08,

 // properties: name, type, flags
     830,  822, 0x1b095103,
     847,  843, 0x02095103,
     868,  863, 0x01095103,
     906,  886, 0x0009510b,
     928,  886, 0x0009510b,
     948,  863, 0x01095003,
     966,  843, 0x02095103,
     975,  843, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QSortFilterProxyModel[] = {
    "QSortFilterProxyModel\0\0pattern\0"
    "setFilterRegExp(QString)\0"
    "setFilterWildcard(QString)\0"
    "setFilterFixedString(QString)\0clear()\0"
    "invalidate()\0source_top_left,source_bottom_right\0"
    "_q_sourceDataChanged(QModelIndex,QModelIndex)\0"
    "orientation,start,end\0"
    "_q_sourceHeaderDataChanged(Qt::Orientation,int,int)\0"
    "_q_sourceAboutToBeReset()\0_q_sourceReset()\0"
    "_q_sourceLayoutAboutToBeChanged()\0"
    "_q_sourceLayoutChanged()\0"
    "source_parent,start,end\0"
    "_q_sourceRowsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceRowsRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsRemoved(QModelIndex,int,int)\0"
    "_q_clearMapping()\0QRegExp\0filterRegExp\0"
    "int\0filterKeyColumn\0bool\0dynamicSortFilter\0"
    "Qt::CaseSensitivity\0filterCaseSensitivity\0"
    "sortCaseSensitivity\0isSortLocaleAware\0"
    "sortRole\0filterRole\0"
};

void QSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSortFilterProxyModel *_t = static_cast<QSortFilterProxyModel *>(_o);
        switch (_id) {
        case 0: _t->setFilterRegExp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilterWildcard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFilterFixedString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->invalidate(); break;
        case 5: _t->d_func()->_q_sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_sourceHeaderDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->d_func()->_q_sourceAboutToBeReset(); break;
        case 8: _t->d_func()->_q_sourceReset(); break;
        case 9: _t->d_func()->_q_sourceLayoutAboutToBeChanged(); break;
        case 10: _t->d_func()->_q_sourceLayoutChanged(); break;
        case 11: _t->d_func()->_q_sourceRowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->d_func()->_q_sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->d_func()->_q_sourceRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->d_func()->_q_sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->d_func()->_q_sourceColumnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->d_func()->_q_sourceColumnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->d_func()->_q_sourceColumnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->d_func()->_q_sourceColumnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->d_func()->_q_clearMapping(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSortFilterProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSortFilterProxyModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_QSortFilterProxyModel,
      qt_meta_data_QSortFilterProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSortFilterProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSortFilterProxyModel))
        return static_cast<void*>(const_cast< QSortFilterProxyModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int QSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRegExp*>(_v) = filterRegExp(); break;
        case 1: *reinterpret_cast< int*>(_v) = filterKeyColumn(); break;
        case 2: *reinterpret_cast< bool*>(_v) = dynamicSortFilter(); break;
        case 3: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = filterCaseSensitivity(); break;
        case 4: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = sortCaseSensitivity(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isSortLocaleAware(); break;
        case 6: *reinterpret_cast< int*>(_v) = sortRole(); break;
        case 7: *reinterpret_cast< int*>(_v) = filterRole(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFilterRegExp(*reinterpret_cast< QRegExp*>(_v)); break;
        case 1: setFilterKeyColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: setDynamicSortFilter(*reinterpret_cast< bool*>(_v)); break;
        case 3: setFilterCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 4: setSortCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 5: setSortLocaleAware(*reinterpret_cast< bool*>(_v)); break;
        case 6: setSortRole(*reinterpret_cast< int*>(_v)); break;
        case 7: setFilterRole(*reinterpret_cast< int*>(_v)); break;
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
