/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativevisualitemmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativevisualitemmodel_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativevisualitemmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeVisualModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      52,   40,   24,   24, 0x05,
      75,   40,   24,   24, 0x05,
     111,   97,   24,   24, 0x05,
     135,   40,   24,   24, 0x05,
     157,   24,   24,   24, 0x05,
     181,  170,   24,   24, 0x05,
     221,  216,   24,   24, 0x05,

 // properties: name, type, flags
     259,  255, 0x02495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualModel[] = {
    "QDeclarativeVisualModel\0\0countChanged()\0"
    "index,count\0itemsInserted(int,int)\0"
    "itemsRemoved(int,int)\0from,to,count\0"
    "itemsMoved(int,int,int)\0itemsChanged(int,int)\0"
    "modelReset()\0index,item\0"
    "createdItem(int,QDeclarativeItem*)\0"
    "item\0destroyingItem(QDeclarativeItem*)\0"
    "int\0count\0"
};

void QDeclarativeVisualModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeVisualModel *_t = static_cast<QDeclarativeVisualModel *>(_o);
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->itemsMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->itemsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->modelReset(); break;
        case 6: _t->createdItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativeItem*(*)>(_a[2]))); break;
        case 7: _t->destroyingItem((*reinterpret_cast< QDeclarativeItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeVisualModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualModel,
      qt_meta_data_QDeclarativeVisualModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualModel))
        return static_cast<void*>(const_cast< QDeclarativeVisualModel*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = count(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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

// SIGNAL 0
void QDeclarativeVisualModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeVisualModel::itemsInserted(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeVisualModel::itemsRemoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativeVisualModel::itemsMoved(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeVisualModel::itemsChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QDeclarativeVisualModel::modelReset()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeVisualModel::createdItem(int _t1, QDeclarativeItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QDeclarativeVisualModel::destroyingItem(QDeclarativeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
static const uint qt_meta_data_QDeclarativeVisualItemModel[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       1,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
      37,   28,

 // signals: signature, parameters, type, tag, flags
      54,   53,   53,   53, 0x05,

 // properties: name, type, flags
      28,   72, 0x00494009,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualItemModel[] = {
    "QDeclarativeVisualItemModel\0children\0"
    "DefaultProperty\0\0childrenChanged()\0"
    "QDeclarativeListProperty<QDeclarativeItem>\0"
};

void QDeclarativeVisualItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeVisualItemModel *_t = static_cast<QDeclarativeVisualItemModel *>(_o);
        switch (_id) {
        case 0: _t->childrenChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualItemModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualItemModel::staticMetaObject = {
    { &QDeclarativeVisualModel::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualItemModel,
      qt_meta_data_QDeclarativeVisualItemModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualItemModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualItemModel))
        return static_cast<void*>(const_cast< QDeclarativeVisualItemModel*>(this));
    return QDeclarativeVisualModel::qt_metacast(_clname);
}

int QDeclarativeVisualItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeVisualModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeListProperty<QDeclarativeItem>*>(_v) = children(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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

// SIGNAL 0
void QDeclarativeVisualItemModel::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QDeclarativeVisualDataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      17,   16, // methods
       5,  101, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
      37,   28,

 // signals: signature, parameters, type, tag, flags
      68,   54,   53,   53, 0x05,
     117,  109,   53,   53, 0x05,
     157,   53,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,  176,   53,   53, 0x08,
     227,  215,   53,   53, 0x08,
     253,  215,   53,   53, 0x08,
     292,  278,   53,   53, 0x08,
     319,  176,   53,   53, 0x08,
     356,  176,   53,   53, 0x08,
     397,  392,   53,   53, 0x08,
     449,  447,   53,   53, 0x08,
     489,   53,   53,   53, 0x08,
     508,   53,   53,   53, 0x08,
     524,   54,   53,   53, 0x08,
     568,  109,   53,   53, 0x08,

 // methods: signature, parameters, type, tag, flags
     624,  620,  611,   53, 0x02,
     640,   53,  611,   53, 0x02,

 // properties: name, type, flags
     659,  611, 0xff095103,
      28,  665, 0x0009510b,
     696,  688, 0x0a095103,
     710,  701, 0x88095401,
     716,  611, 0xff495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualDataModel[] = {
    "QDeclarativeVisualDataModel\0delegate\0"
    "DefaultProperty\0\0index,package\0"
    "createdPackage(int,QDeclarativePackage*)\0"
    "package\0destroyingPackage(QDeclarativePackage*)\0"
    "rootIndexChanged()\0,,\0"
    "_q_itemsChanged(int,int,QList<int>)\0"
    "index,count\0_q_itemsInserted(int,int)\0"
    "_q_itemsRemoved(int,int)\0from,to,count\0"
    "_q_itemsMoved(int,int,int)\0"
    "_q_rowsInserted(QModelIndex,int,int)\0"
    "_q_rowsRemoved(QModelIndex,int,int)\0"
    ",,,,\0_q_rowsMoved(QModelIndex,int,int,QModelIndex,int)\0"
    ",\0_q_dataChanged(QModelIndex,QModelIndex)\0"
    "_q_layoutChanged()\0_q_modelReset()\0"
    "_q_createdPackage(int,QDeclarativePackage*)\0"
    "_q_destroyingPackage(QDeclarativePackage*)\0"
    "QVariant\0idx\0modelIndex(int)\0"
    "parentModelIndex()\0model\0"
    "QDeclarativeComponent*\0QString\0part\0"
    "QObject*\0parts\0rootIndex\0"
};

void QDeclarativeVisualDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeVisualDataModel *_t = static_cast<QDeclarativeVisualDataModel *>(_o);
        switch (_id) {
        case 0: _t->createdPackage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativePackage*(*)>(_a[2]))); break;
        case 1: _t->destroyingPackage((*reinterpret_cast< QDeclarativePackage*(*)>(_a[1]))); break;
        case 2: _t->rootIndexChanged(); break;
        case 3: _t->_q_itemsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QList<int>(*)>(_a[3]))); break;
        case 4: _t->_q_itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->_q_itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->_q_itemsMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->_q_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->_q_rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 10: _t->_q_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->_q_layoutChanged(); break;
        case 12: _t->_q_modelReset(); break;
        case 13: _t->_q_createdPackage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativePackage*(*)>(_a[2]))); break;
        case 14: _t->_q_destroyingPackage((*reinterpret_cast< QDeclarativePackage*(*)>(_a[1]))); break;
        case 15: { QVariant _r = _t->modelIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: { QVariant _r = _t->parentModelIndex();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeVisualDataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualDataModel::staticMetaObject = {
    { &QDeclarativeVisualModel::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualDataModel,
      qt_meta_data_QDeclarativeVisualDataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualDataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualDataModel))
        return static_cast<void*>(const_cast< QDeclarativeVisualDataModel*>(this));
    return QDeclarativeVisualModel::qt_metacast(_clname);
}

int QDeclarativeVisualDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeVisualModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = model(); break;
        case 1: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        case 2: *reinterpret_cast< QString*>(_v) = part(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = parts(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = rootIndex(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 2: setPart(*reinterpret_cast< QString*>(_v)); break;
        case 4: setRootIndex(*reinterpret_cast< QVariant*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeVisualDataModel::createdPackage(int _t1, QDeclarativePackage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeVisualDataModel::destroyingPackage(QDeclarativePackage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeVisualDataModel::rootIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QDeclarativeVisualItemModelAttached[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,

 // properties: name, type, flags
      56,   52, 0x02495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualItemModelAttached[] = {
    "QDeclarativeVisualItemModelAttached\0"
    "\0indexChanged()\0int\0index\0"
};

void QDeclarativeVisualItemModelAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeVisualItemModelAttached *_t = static_cast<QDeclarativeVisualItemModelAttached *>(_o);
        switch (_id) {
        case 0: _t->indexChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualItemModelAttached::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualItemModelAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualItemModelAttached,
      qt_meta_data_QDeclarativeVisualItemModelAttached, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualItemModelAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualItemModelAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualItemModelAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualItemModelAttached))
        return static_cast<void*>(const_cast< QDeclarativeVisualItemModelAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualItemModelAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = index(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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

// SIGNAL 0
void QDeclarativeVisualItemModelAttached::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
