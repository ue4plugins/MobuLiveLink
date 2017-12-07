/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativelistmodelworkeragent_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativelistmodelworkeragent_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativelistmodelworkeragent_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeListModelWorkerAgent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x02,
      48,   42,   33,   33, 0x02,
      60,   33,   33,   33, 0x02,
      88,   81,   33,   33, 0x02,
     126,   42,  113,   33, 0x02,
     135,   81,   33,   33, 0x02,
     178,  157,   33,   33, 0x02,
     226,  212,   33,   33, 0x02,
     244,   33,   33,   33, 0x02,

 // properties: name, type, flags
     255,  251, 0x02095001,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeListModelWorkerAgent[] = {
    "QDeclarativeListModelWorkerAgent\0\0"
    "clear()\0index\0remove(int)\0"
    "append(QScriptValue)\0index,\0"
    "insert(int,QScriptValue)\0QScriptValue\0"
    "get(int)\0set(int,QScriptValue)\0"
    "index,property,value\0"
    "setProperty(int,QString,QVariant)\0"
    "from,to,count\0move(int,int,int)\0sync()\0"
    "int\0count\0"
};

void QDeclarativeListModelWorkerAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeListModelWorkerAgent *_t = static_cast<QDeclarativeListModelWorkerAgent *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->append((*reinterpret_cast< const QScriptValue(*)>(_a[1]))); break;
        case 3: _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2]))); break;
        case 4: { QScriptValue _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 5: _t->set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2]))); break;
        case 6: _t->setProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 7: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->sync(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeListModelWorkerAgent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeListModelWorkerAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeListModelWorkerAgent,
      qt_meta_data_QDeclarativeListModelWorkerAgent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeListModelWorkerAgent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeListModelWorkerAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeListModelWorkerAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeListModelWorkerAgent))
        return static_cast<void*>(const_cast< QDeclarativeListModelWorkerAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeListModelWorkerAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
