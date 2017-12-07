/****************************************************************************
** Meta object code from reading C++ file 'qtableview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qtableview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       5,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      38,   31,   11,   11, 0x0a,
      56,   12,   11,   11, 0x0a,
      69,   31,   11,   11, 0x0a,
      85,   12,   11,   11, 0x0a,
      98,   31,   11,   11, 0x0a,
     114,   12,   11,   11, 0x0a,
     139,   11,   11,   11, 0x0a,
     162,   31,   11,   11, 0x0a,
     190,   11,   11,   11, 0x0a,
     216,   31,   11,   11, 0x0a,
     239,  234,   11,   11, 0x0a,
     279,  257,   11,   11, 0x09,
     326,  301,   11,   11, 0x09,
     375,  351,   11,   11, 0x09,
     424,  399,   11,   11, 0x09,
     469,  451,   11,   11, 0x09,
     494,  451,   11,   11, 0x09,
     522,   11,   11,   11, 0x08,
     540,   11,   11,   11, 0x08,
     564,  561,   11,   11, 0x08,
     611,  561,   11,   11, 0x08,
     661,  561,   11,   11, 0x08,
     707,  561,   11,   11, 0x08,

 // properties: name, type, flags
     761,  756, 0x01095103,
     783,  770, 0x0009510b,
     793,  756, 0x01095103,
     808,  756, 0x01095103,
     817,  756, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QTableView[] = {
    "QTableView\0\0row\0selectRow(int)\0column\0"
    "selectColumn(int)\0hideRow(int)\0"
    "hideColumn(int)\0showRow(int)\0"
    "showColumn(int)\0resizeRowToContents(int)\0"
    "resizeRowsToContents()\0"
    "resizeColumnToContents(int)\0"
    "resizeColumnsToContents()\0sortByColumn(int)\0"
    "show\0setShowGrid(bool)\0row,oldIndex,newIndex\0"
    "rowMoved(int,int,int)\0column,oldIndex,newIndex\0"
    "columnMoved(int,int,int)\0"
    "row,oldHeight,newHeight\0rowResized(int,int,int)\0"
    "column,oldWidth,newWidth\0"
    "columnResized(int,int,int)\0oldCount,newCount\0"
    "rowCountChanged(int,int)\0"
    "columnCountChanged(int,int)\0"
    "_q_selectRow(int)\0_q_selectColumn(int)\0"
    ",,\0_q_updateSpanInsertedRows(QModelIndex,int,int)\0"
    "_q_updateSpanInsertedColumns(QModelIndex,int,int)\0"
    "_q_updateSpanRemovedRows(QModelIndex,int,int)\0"
    "_q_updateSpanRemovedColumns(QModelIndex,int,int)\0"
    "bool\0showGrid\0Qt::PenStyle\0gridStyle\0"
    "sortingEnabled\0wordWrap\0cornerButtonEnabled\0"
};

void QTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTableView *_t = static_cast<QTableView *>(_o);
        switch (_id) {
        case 0: _t->selectRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->hideRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hideColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->showRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resizeRowToContents((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->resizeRowsToContents(); break;
        case 8: _t->resizeColumnToContents((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->resizeColumnsToContents(); break;
        case 10: _t->sortByColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->rowMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->columnMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->rowResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->columnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->rowCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->columnCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->d_func()->_q_selectRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_selectColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->d_func()->_q_updateSpanInsertedRows((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->d_func()->_q_updateSpanInsertedColumns((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->d_func()->_q_updateSpanRemovedRows((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->d_func()->_q_updateSpanRemovedColumns((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTableView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_QTableView,
      qt_meta_data_QTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTableView))
        return static_cast<void*>(const_cast< QTableView*>(this));
    return QAbstractItemView::qt_metacast(_clname);
}

int QTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = showGrid(); break;
        case 1: *reinterpret_cast< Qt::PenStyle*>(_v) = gridStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isSortingEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = wordWrap(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isCornerButtonEnabled(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        case 1: setGridStyle(*reinterpret_cast< Qt::PenStyle*>(_v)); break;
        case 2: setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 4: setCornerButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
