/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsview/qgraphicsitem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsObject[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
      15,   81, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // classinfo: key, value
      25,   16,

 // signals: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x05,
      58,   41,   41,   41, 0x05,
      75,   41,   41,   41, 0x05,
      92,   41,   41,   41, 0x05,
     109,   41,   41,   41, 0x05,
     120,   41,   41,   41, 0x05,
     131,   41,   41,   41, 0x05,
     142,   41,   41,   41, 0x05,
     160,   41,   41,   41, 0x05,
     175,   41,   41,   41, 0x05,
     193,   41,   41,   41, 0x05,
     208,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     224,   41,   41,   41, 0x09,

 // properties: name, type, flags
     260,  243, 0x0049400b,
     273,  267, ((uint)QMetaType::QReal << 24) | 0x00495903,
     286,  281, 0x01495103,
     294,  281, 0x01495903,
     310,  302, 0x1a095903,
     314,  267, ((uint)QMetaType::QReal << 24) | 0x00495903,
     316,  267, ((uint)QMetaType::QReal << 24) | 0x00495903,
     318,  267, ((uint)QMetaType::QReal << 24) | 0x00495803,
     320,  267, ((uint)QMetaType::QReal << 24) | 0x00495103,
     329,  267, ((uint)QMetaType::QReal << 24) | 0x00495103,
     335,  302, 0x1a095103,
     373,  356, 0x0009500b,
      16,  380, 0x00494009,
     422,  267, ((uint)QMetaType::QReal << 24) | 0x00495907,
     428,  267, ((uint)QMetaType::QReal << 24) | 0x00495907,

 // properties: notify_signal_id
       0,
       1,
       3,
       2,
       0,
       4,
       5,
       6,
       7,
       8,
       0,
       0,
       9,
      10,
      11,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsObject[] = {
    "QGraphicsObject\0children\0DefaultProperty\0"
    "\0parentChanged()\0opacityChanged()\0"
    "visibleChanged()\0enabledChanged()\0"
    "xChanged()\0yChanged()\0zChanged()\0"
    "rotationChanged()\0scaleChanged()\0"
    "childrenChanged()\0widthChanged()\0"
    "heightChanged()\0updateMicroFocus()\0"
    "QGraphicsObject*\0parent\0qreal\0opacity\0"
    "bool\0enabled\0visible\0QPointF\0pos\0x\0y\0"
    "z\0rotation\0scale\0transformOriginPoint\0"
    "QGraphicsEffect*\0effect\0"
    "QDeclarativeListProperty<QGraphicsObject>\0"
    "width\0height\0"
};

void QGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsObject *_t = static_cast<QGraphicsObject *>(_o);
        switch (_id) {
        case 0: _t->parentChanged(); break;
        case 1: _t->opacityChanged(); break;
        case 2: _t->visibleChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->xChanged(); break;
        case 5: _t->yChanged(); break;
        case 6: _t->zChanged(); break;
        case 7: _t->rotationChanged(); break;
        case 8: _t->scaleChanged(); break;
        case 9: _t->childrenChanged(); break;
        case 10: _t->widthChanged(); break;
        case 11: _t->heightChanged(); break;
        case 12: _t->updateMicroFocus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGraphicsObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsObject,
      qt_meta_data_QGraphicsObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsObject))
        return static_cast<void*>(const_cast< QGraphicsObject*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< QGraphicsObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< QGraphicsObject*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsObject**>(_v) = parentObject(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = opacity(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = pos(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = x(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = y(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = zValue(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = transformOriginPoint(); break;
        case 11: *reinterpret_cast< QGraphicsEffect**>(_v) = graphicsEffect(); break;
        case 12: *reinterpret_cast< QDeclarativeListProperty<QGraphicsObject>*>(_v) = QGraphicsItem::d_func()->childrenList(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = QGraphicsItem::d_func()->width(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = QGraphicsItem::d_func()->height(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setParentItem(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 1: setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: setPos(*reinterpret_cast< QPointF*>(_v)); break;
        case 5: setX(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setY(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setZValue(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setTransformOriginPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 11: setGraphicsEffect(*reinterpret_cast< QGraphicsEffect**>(_v)); break;
        case 13: QGraphicsItem::d_func()->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 14: QGraphicsItem::d_func()->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 13: QGraphicsItem::d_func()->resetWidth(); break;
        case 14: QGraphicsItem::d_func()->resetHeight(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsObject::parentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGraphicsObject::opacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QGraphicsObject::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QGraphicsObject::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QGraphicsObject::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QGraphicsObject::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QGraphicsObject::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QGraphicsObject::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QGraphicsObject::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QGraphicsObject::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QGraphicsObject::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QGraphicsObject::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
static const uint qt_meta_data_QGraphicsTextItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      42,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   18,   18,   18, 0x08,
      93,   18,   18,   18, 0x08,
     111,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsTextItem[] = {
    "QGraphicsTextItem\0\0linkActivated(QString)\0"
    "linkHovered(QString)\0_q_updateBoundingRect(QSizeF)\0"
    "_q_update(QRectF)\0_q_ensureVisible(QRectF)\0"
};

void QGraphicsTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsTextItem *_t = static_cast<QGraphicsTextItem *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->dd->_q_updateBoundingRect((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 3: _t->dd->_q_update((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 4: _t->dd->_q_ensureVisible((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsTextItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsTextItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QGraphicsTextItem,
      qt_meta_data_QGraphicsTextItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsTextItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsTextItem))
        return static_cast<void*>(const_cast< QGraphicsTextItem*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsTextItem::linkActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsTextItem::linkHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
