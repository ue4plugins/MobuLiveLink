/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegraphicswidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativegraphicswidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegraphicswidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeGraphicsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      48,   27, 0x00094c09,
      79,   56, 0x00095c09,
      84,   56, 0x00095c09,
      90,   56, 0x00095c09,
     107,   56, 0x00095c09,
     111,   56, 0x00095c09,
     118,   56, 0x00095c09,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeGraphicsWidget[] = {
    "QDeclarativeGraphicsWidget\0"
    "QDeclarativeAnchors*\0anchors\0"
    "QDeclarativeAnchorLine\0left\0right\0"
    "horizontalCenter\0top\0bottom\0verticalCenter\0"
};

void QDeclarativeGraphicsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeGraphicsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeGraphicsWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGraphicsWidget,
      qt_meta_data_QDeclarativeGraphicsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeGraphicsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeGraphicsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeGraphicsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGraphicsWidget))
        return static_cast<void*>(const_cast< QDeclarativeGraphicsWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGraphicsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeAnchors**>(_v) = anchors(); break;
        case 1: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = left(); break;
        case 2: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = right(); break;
        case 3: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = horizontalCenter(); break;
        case 4: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = top(); break;
        case 5: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = bottom(); break;
        case 6: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = verticalCenter(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
