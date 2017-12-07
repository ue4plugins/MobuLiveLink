/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeloader_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   49, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      34,   19,   19,   19, 0x05,
      50,   19,   19,   19, 0x05,
      66,   19,   19,   19, 0x05,
      84,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   19,   19,   19, 0x08,
     111,   19,   19,   19, 0x08,

 // properties: name, type, flags
     132,  127, 0x11495103,
     162,  139, 0x0049510f,
     195,  178, 0x00495009,
     207,  200, 0x00495009,
     220,  214, ((uint)QMetaType::QReal << 24) | 0x00495001,

 // properties: notify_signal_id
       1,
       1,
       0,
       2,
       3,

 // enums: name, flags, count, data
     200, 0x0,    4,   73,

 // enum data: key, value
     229, uint(QDeclarativeLoader::Null),
     234, uint(QDeclarativeLoader::Ready),
     240, uint(QDeclarativeLoader::Loading),
     248, uint(QDeclarativeLoader::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeLoader[] = {
    "QDeclarativeLoader\0\0itemChanged()\0"
    "sourceChanged()\0statusChanged()\0"
    "progressChanged()\0loaded()\0_q_sourceLoaded()\0"
    "_q_updateSize()\0QUrl\0source\0"
    "QDeclarativeComponent*\0sourceComponent\0"
    "QGraphicsObject*\0item\0Status\0status\0"
    "qreal\0progress\0Null\0Ready\0Loading\0"
    "Error\0"
};

void QDeclarativeLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeLoader *_t = static_cast<QDeclarativeLoader *>(_o);
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->sourceChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->progressChanged(); break;
        case 4: _t->loaded(); break;
        case 5: _t->d_func()->_q_sourceLoaded(); break;
        case 6: _t->d_func()->_q_updateSize(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeLoader::staticMetaObject = {
    { &QDeclarativeImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeLoader,
      qt_meta_data_QDeclarativeLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeLoader))
        return static_cast<void*>(const_cast< QDeclarativeLoader*>(this));
    return QDeclarativeImplicitSizeItem::qt_metacast(_clname);
}

int QDeclarativeLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = source(); break;
        case 1: *reinterpret_cast< QDeclarativeComponent**>(_v) = sourceComponent(); break;
        case 2: *reinterpret_cast< QGraphicsObject**>(_v) = item(); break;
        case 3: *reinterpret_cast< Status*>(_v) = status(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = progress(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: setSourceComponent(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: resetSourceComponent(); break;
        }
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
void QDeclarativeLoader::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeLoader::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeLoader::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeLoader::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
