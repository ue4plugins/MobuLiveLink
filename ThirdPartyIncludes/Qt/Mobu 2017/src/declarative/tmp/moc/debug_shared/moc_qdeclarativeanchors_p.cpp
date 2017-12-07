/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeanchors_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeanchors_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeanchors_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeAnchors[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      17,  109, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      35,   20,   20,   20, 0x05,
      50,   20,   20,   20, 0x05,
      63,   20,   20,   20, 0x05,
      79,   20,   20,   20, 0x05,
     103,   20,   20,   20, 0x05,
     129,   20,   20,   20, 0x05,
     147,   20,   20,   20, 0x05,
     161,   20,   20,   20, 0x05,
     179,   20,   20,   20, 0x05,
     199,   20,   20,   20, 0x05,
     220,   20,   20,   20, 0x05,
     239,   20,   20,   20, 0x05,
     261,   20,   20,   20, 0x05,
     278,   20,   20,   20, 0x05,
     308,   20,   20,   20, 0x05,
     340,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     364,   20,   20,   20, 0x08,
     395,  391,   20,   20, 0x08,

 // properties: name, type, flags
     447,  424, 0x0049510f,
     452,  424, 0x0049510f,
     458,  424, 0x0049510f,
     475,  424, 0x0049510f,
     479,  424, 0x0049510f,
     486,  424, 0x0049510f,
     501,  424, 0x0049510f,
     516,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     524,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     535,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     547,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     570,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     580,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     593,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     614,  510, ((uint)QMetaType::QReal << 24) | 0x00495103,
     646,  629, 0x0049510f,
     651,  629, 0x0049510f,

 // properties: notify_signal_id
       0,
       1,
       5,
       2,
       3,
       4,
       6,
      13,
       9,
      10,
      15,
      11,
      12,
      14,
      16,
       7,
       8,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeAnchors[] = {
    "QDeclarativeAnchors\0\0leftChanged()\0"
    "rightChanged()\0topChanged()\0bottomChanged()\0"
    "verticalCenterChanged()\0"
    "horizontalCenterChanged()\0baselineChanged()\0"
    "fillChanged()\0centerInChanged()\0"
    "leftMarginChanged()\0rightMarginChanged()\0"
    "topMarginChanged()\0bottomMarginChanged()\0"
    "marginsChanged()\0verticalCenterOffsetChanged()\0"
    "horizontalCenterOffsetChanged()\0"
    "baselineOffsetChanged()\0"
    "_q_widgetGeometryChanged()\0obj\0"
    "_q_widgetDestroyed(QObject*)\0"
    "QDeclarativeAnchorLine\0left\0right\0"
    "horizontalCenter\0top\0bottom\0verticalCenter\0"
    "baseline\0qreal\0margins\0leftMargin\0"
    "rightMargin\0horizontalCenterOffset\0"
    "topMargin\0bottomMargin\0verticalCenterOffset\0"
    "baselineOffset\0QGraphicsObject*\0fill\0"
    "centerIn\0"
};

void QDeclarativeAnchors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeAnchors *_t = static_cast<QDeclarativeAnchors *>(_o);
        switch (_id) {
        case 0: _t->leftChanged(); break;
        case 1: _t->rightChanged(); break;
        case 2: _t->topChanged(); break;
        case 3: _t->bottomChanged(); break;
        case 4: _t->verticalCenterChanged(); break;
        case 5: _t->horizontalCenterChanged(); break;
        case 6: _t->baselineChanged(); break;
        case 7: _t->fillChanged(); break;
        case 8: _t->centerInChanged(); break;
        case 9: _t->leftMarginChanged(); break;
        case 10: _t->rightMarginChanged(); break;
        case 11: _t->topMarginChanged(); break;
        case 12: _t->bottomMarginChanged(); break;
        case 13: _t->marginsChanged(); break;
        case 14: _t->verticalCenterOffsetChanged(); break;
        case 15: _t->horizontalCenterOffsetChanged(); break;
        case 16: _t->baselineOffsetChanged(); break;
        case 17: _t->d_func()->_q_widgetGeometryChanged(); break;
        case 18: _t->d_func()->_q_widgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeAnchors::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeAnchors::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeAnchors,
      qt_meta_data_QDeclarativeAnchors, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeAnchors::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeAnchors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeAnchors::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAnchors))
        return static_cast<void*>(const_cast< QDeclarativeAnchors*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeAnchors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = left(); break;
        case 1: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = right(); break;
        case 2: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = horizontalCenter(); break;
        case 3: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = top(); break;
        case 4: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = bottom(); break;
        case 5: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = verticalCenter(); break;
        case 6: *reinterpret_cast< QDeclarativeAnchorLine*>(_v) = baseline(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = margins(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = leftMargin(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = rightMargin(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = horizontalCenterOffset(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = topMargin(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = bottomMargin(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = verticalCenterOffset(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = baselineOffset(); break;
        case 15: *reinterpret_cast< QGraphicsObject**>(_v) = fill(); break;
        case 16: *reinterpret_cast< QGraphicsObject**>(_v) = centerIn(); break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLeft(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 1: setRight(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 2: setHorizontalCenter(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 3: setTop(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 4: setBottom(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 5: setVerticalCenter(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 6: setBaseline(*reinterpret_cast< QDeclarativeAnchorLine*>(_v)); break;
        case 7: setMargins(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setLeftMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setRightMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setHorizontalCenterOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setTopMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 12: setBottomMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 13: setVerticalCenterOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 14: setBaselineOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 15: setFill(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 16: setCenterIn(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetLeft(); break;
        case 1: resetRight(); break;
        case 2: resetHorizontalCenter(); break;
        case 3: resetTop(); break;
        case 4: resetBottom(); break;
        case 5: resetVerticalCenter(); break;
        case 6: resetBaseline(); break;
        case 15: resetFill(); break;
        case 16: resetCenterIn(); break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeAnchors::leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeAnchors::rightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeAnchors::topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeAnchors::bottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeAnchors::verticalCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeAnchors::horizontalCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeAnchors::baselineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeAnchors::fillChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativeAnchors::centerInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativeAnchors::leftMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativeAnchors::rightMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QDeclarativeAnchors::topMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDeclarativeAnchors::bottomMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QDeclarativeAnchors::marginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QDeclarativeAnchors::verticalCenterOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QDeclarativeAnchors::horizontalCenterOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void QDeclarativeAnchors::baselineOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}
QT_END_MOC_NAMESPACE
