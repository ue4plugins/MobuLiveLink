/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepositioners_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativepositioners_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepositioners_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeBasePositioner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,
      45,   27,   27,   27, 0x05,
      59,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   27,   27,   27, 0x09,
      89,   27,   27,   27, 0x09,

 // properties: name, type, flags
     125,  121, 0x02495103,
     157,  133, 0x0049510b,
     162,  133, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeBasePositioner[] = {
    "QDeclarativeBasePositioner\0\0"
    "spacingChanged()\0moveChanged()\0"
    "addChanged()\0prePositioning()\0"
    "graphicsWidgetGeometryChanged()\0int\0"
    "spacing\0QDeclarativeTransition*\0move\0"
    "add\0"
};

void QDeclarativeBasePositioner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeBasePositioner *_t = static_cast<QDeclarativeBasePositioner *>(_o);
        switch (_id) {
        case 0: _t->spacingChanged(); break;
        case 1: _t->moveChanged(); break;
        case 2: _t->addChanged(); break;
        case 3: _t->prePositioning(); break;
        case 4: _t->graphicsWidgetGeometryChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeBasePositioner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeBasePositioner::staticMetaObject = {
    { &QDeclarativeImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeBasePositioner,
      qt_meta_data_QDeclarativeBasePositioner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeBasePositioner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeBasePositioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeBasePositioner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeBasePositioner))
        return static_cast<void*>(const_cast< QDeclarativeBasePositioner*>(this));
    return QDeclarativeImplicitSizeItem::qt_metacast(_clname);
}

int QDeclarativeBasePositioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = spacing(); break;
        case 1: *reinterpret_cast< QDeclarativeTransition**>(_v) = move(); break;
        case 2: *reinterpret_cast< QDeclarativeTransition**>(_v) = add(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 1: setMove(*reinterpret_cast< QDeclarativeTransition**>(_v)); break;
        case 2: setAdd(*reinterpret_cast< QDeclarativeTransition**>(_v)); break;
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
void QDeclarativeBasePositioner::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeBasePositioner::moveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeBasePositioner::addChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QDeclarativeColumn[] = {

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

static const char qt_meta_stringdata_QDeclarativeColumn[] = {
    "QDeclarativeColumn\0"
};

void QDeclarativeColumn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeColumn::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeColumn::staticMetaObject = {
    { &QDeclarativeBasePositioner::staticMetaObject, qt_meta_stringdata_QDeclarativeColumn,
      qt_meta_data_QDeclarativeColumn, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeColumn::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeColumn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeColumn::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeColumn))
        return static_cast<void*>(const_cast< QDeclarativeColumn*>(this));
    return QDeclarativeBasePositioner::qt_metacast(_clname);
}

int QDeclarativeColumn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeBasePositioner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDeclarativeRow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x85,

 // signals: revision
       1,

 // properties: name, type, flags
      62,   42, 0x00c9510b,

 // properties: notify_signal_id
       0,

 // properties: revision
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeRow[] = {
    "QDeclarativeRow\0\0layoutDirectionChanged()\0"
    "Qt::LayoutDirection\0layoutDirection\0"
};

void QDeclarativeRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeRow *_t = static_cast<QDeclarativeRow *>(_o);
        switch (_id) {
        case 0: _t->layoutDirectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeRow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeRow::staticMetaObject = {
    { &QDeclarativeBasePositioner::staticMetaObject, qt_meta_stringdata_QDeclarativeRow,
      qt_meta_data_QDeclarativeRow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeRow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeRow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeRow))
        return static_cast<void*>(const_cast< QDeclarativeRow*>(this));
    return QDeclarativeBasePositioner::qt_metacast(_clname);
}

int QDeclarativeRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeBasePositioner::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeRow::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QDeclarativeGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      32,   17,   17,   17, 0x05,
      49,   17,   17,   17, 0x05,
      63,   17,   17,   17, 0x85,

 // signals: revision
       0,
       0,
       0,
       1,

 // properties: name, type, flags
      92,   88, 0x02495103,
      97,   88, 0x02495103,
     110,  105, 0x0049510b,
     135,  115, 0x00c9510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // properties: revision
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
     105, 0x0,    2,   62,

 // enum data: key, value
     151, uint(QDeclarativeGrid::LeftToRight),
     163, uint(QDeclarativeGrid::TopToBottom),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeGrid[] = {
    "QDeclarativeGrid\0\0rowsChanged()\0"
    "columnsChanged()\0flowChanged()\0"
    "layoutDirectionChanged()\0int\0rows\0"
    "columns\0Flow\0flow\0Qt::LayoutDirection\0"
    "layoutDirection\0LeftToRight\0TopToBottom\0"
};

void QDeclarativeGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeGrid *_t = static_cast<QDeclarativeGrid *>(_o);
        switch (_id) {
        case 0: _t->rowsChanged(); break;
        case 1: _t->columnsChanged(); break;
        case 2: _t->flowChanged(); break;
        case 3: _t->layoutDirectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeGrid::staticMetaObject = {
    { &QDeclarativeBasePositioner::staticMetaObject, qt_meta_stringdata_QDeclarativeGrid,
      qt_meta_data_QDeclarativeGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGrid))
        return static_cast<void*>(const_cast< QDeclarativeGrid*>(this));
    return QDeclarativeBasePositioner::qt_metacast(_clname);
}

int QDeclarativeGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeBasePositioner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = rows(); break;
        case 1: *reinterpret_cast< int*>(_v) = columns(); break;
        case 2: *reinterpret_cast< Flow*>(_v) = flow(); break;
        case 3: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRows(*reinterpret_cast< int*>(_v)); break;
        case 1: setColumns(*reinterpret_cast< int*>(_v)); break;
        case 2: setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 3: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeGrid::rowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeGrid::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeGrid::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeGrid::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_QDeclarativeFlow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      32,   17,   17,   17, 0x85,

 // signals: revision
       0,
       1,

 // properties: name, type, flags
      62,   57, 0x0049510b,
      87,   67, 0x00c9510b,

 // properties: notify_signal_id
       0,
       1,

 // properties: revision
       0,
       1,

 // enums: name, flags, count, data
      57, 0x0,    2,   40,

 // enum data: key, value
     103, uint(QDeclarativeFlow::LeftToRight),
     115, uint(QDeclarativeFlow::TopToBottom),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeFlow[] = {
    "QDeclarativeFlow\0\0flowChanged()\0"
    "layoutDirectionChanged()\0Flow\0flow\0"
    "Qt::LayoutDirection\0layoutDirection\0"
    "LeftToRight\0TopToBottom\0"
};

void QDeclarativeFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeFlow *_t = static_cast<QDeclarativeFlow *>(_o);
        switch (_id) {
        case 0: _t->flowChanged(); break;
        case 1: _t->layoutDirectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeFlow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeFlow::staticMetaObject = {
    { &QDeclarativeBasePositioner::staticMetaObject, qt_meta_stringdata_QDeclarativeFlow,
      qt_meta_data_QDeclarativeFlow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeFlow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeFlow))
        return static_cast<void*>(const_cast< QDeclarativeFlow*>(this));
    return QDeclarativeBasePositioner::qt_metacast(_clname);
}

int QDeclarativeFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeBasePositioner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Flow*>(_v) = flow(); break;
        case 1: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 1: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeFlow::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeFlow::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
