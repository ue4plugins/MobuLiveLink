/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativexmllistmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativexmllistmodel_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativexmllistmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeXmlListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      15,   16, // methods
       8,   91, // properties
       1,  123, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
      31,   25,

 // signals: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x05,
     105,   96,   47,   47, 0x05,
     128,   47,   47,   47, 0x05,
     143,   47,   47,   47, 0x05,
     159,   47,   47,   47, 0x05,
     172,   47,   47,   47, 0x05,
     187,   47,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     218,   47,   47,   47, 0x0a,
     227,   47,   47,   47, 0x08,
     247,  245,   47,   47, 0x08,
     278,   47,   47,   47, 0x08,
     292,   47,   47,   47, 0x08,
     348,  335,   47,   47, 0x08,

 // methods: signature, parameters, type, tag, flags
     393,  387,  374,   47, 0x02,
     410,   47,  402,   47, 0x02,

 // properties: name, type, flags
     431,  424, 0x00495009,
      96,  438, ((uint)QMetaType::QReal << 24) | 0x00495001,
     449,  444, 0x11495103,
     456,  402, 0x0a495103,
     460,  402, 0x0a495103,
     466,  402, 0x0a495103,
      25,  488, 0x00095009,
     547,  543, 0x02495001,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,
       6,
       0,
       2,

 // enums: name, flags, count, data
     424, 0x0,    4,  127,

 // enum data: key, value
     553, uint(QDeclarativeXmlListModel::Null),
     558, uint(QDeclarativeXmlListModel::Ready),
     564, uint(QDeclarativeXmlListModel::Loading),
     572, uint(QDeclarativeXmlListModel::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeXmlListModel[] = {
    "QDeclarativeXmlListModel\0roles\0"
    "DefaultProperty\0\0"
    "statusChanged(QDeclarativeXmlListModel::Status)\0"
    "progress\0progressChanged(qreal)\0"
    "countChanged()\0sourceChanged()\0"
    "xmlChanged()\0queryChanged()\0"
    "namespaceDeclarationsChanged()\0reload()\0"
    "requestFinished()\0,\0requestProgress(qint64,qint64)\0"
    "dataCleared()\0queryCompleted(QDeclarativeXmlQueryResult)\0"
    "object,error\0queryError(void*,QString)\0"
    "QScriptValue\0index\0get(int)\0QString\0"
    "errorString()\0Status\0status\0qreal\0"
    "QUrl\0source\0xml\0query\0namespaceDeclarations\0"
    "QDeclarativeListProperty<QDeclarativeXmlListModelRole>\0"
    "int\0count\0Null\0Ready\0Loading\0Error\0"
};

void QDeclarativeXmlListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeXmlListModel *_t = static_cast<QDeclarativeXmlListModel *>(_o);
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QDeclarativeXmlListModel::Status(*)>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->countChanged(); break;
        case 3: _t->sourceChanged(); break;
        case 4: _t->xmlChanged(); break;
        case 5: _t->queryChanged(); break;
        case 6: _t->namespaceDeclarationsChanged(); break;
        case 7: _t->reload(); break;
        case 8: _t->requestFinished(); break;
        case 9: _t->requestProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->dataCleared(); break;
        case 11: _t->queryCompleted((*reinterpret_cast< const QDeclarativeXmlQueryResult(*)>(_a[1]))); break;
        case 12: _t->queryError((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: { QScriptValue _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeXmlListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeXmlListModel::staticMetaObject = {
    { &QListModelInterface::staticMetaObject, qt_meta_stringdata_QDeclarativeXmlListModel,
      qt_meta_data_QDeclarativeXmlListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeXmlListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeXmlListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeXmlListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeXmlListModel))
        return static_cast<void*>(const_cast< QDeclarativeXmlListModel*>(this));
    if (!strcmp(_clname, "QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeXmlListModel*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< QDeclarativeXmlListModel*>(this));
    return QListModelInterface::qt_metacast(_clname);
}

int QDeclarativeXmlListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListModelInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = status(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = progress(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = source(); break;
        case 3: *reinterpret_cast< QString*>(_v) = xml(); break;
        case 4: *reinterpret_cast< QString*>(_v) = query(); break;
        case 5: *reinterpret_cast< QString*>(_v) = namespaceDeclarations(); break;
        case 6: *reinterpret_cast< QDeclarativeListProperty<QDeclarativeXmlListModelRole>*>(_v) = roleObjects(); break;
        case 7: *reinterpret_cast< int*>(_v) = count(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: setXml(*reinterpret_cast< QString*>(_v)); break;
        case 4: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 5: setNamespaceDeclarations(*reinterpret_cast< QString*>(_v)); break;
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

// SIGNAL 0
void QDeclarativeXmlListModel::statusChanged(QDeclarativeXmlListModel::Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeXmlListModel::progressChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeXmlListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeXmlListModel::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeXmlListModel::xmlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeXmlListModel::queryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeXmlListModel::namespaceDeclarationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
static const uint qt_meta_data_QDeclarativeXmlListModelRole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      44,   29,   29,   29, 0x05,
      59,   29,   29,   29, 0x05,

 // properties: name, type, flags
      82,   74, 0x0a495103,
      87,   74, 0x0a495103,
      98,   93, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeXmlListModelRole[] = {
    "QDeclarativeXmlListModelRole\0\0"
    "nameChanged()\0queryChanged()\0"
    "isKeyChanged()\0QString\0name\0query\0"
    "bool\0isKey\0"
};

void QDeclarativeXmlListModelRole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeXmlListModelRole *_t = static_cast<QDeclarativeXmlListModelRole *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->queryChanged(); break;
        case 2: _t->isKeyChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeXmlListModelRole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeXmlListModelRole::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeXmlListModelRole,
      qt_meta_data_QDeclarativeXmlListModelRole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeXmlListModelRole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeXmlListModelRole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeXmlListModelRole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeXmlListModelRole))
        return static_cast<void*>(const_cast< QDeclarativeXmlListModelRole*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeXmlListModelRole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = query(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isKey(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 2: setIsKey(*reinterpret_cast< bool*>(_v)); break;
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
void QDeclarativeXmlListModelRole::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeXmlListModelRole::queryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeXmlListModelRole::isKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
