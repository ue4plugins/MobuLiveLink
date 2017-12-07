/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepathview_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativepathview_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepathview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativePathView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      18,  189, // properties
       1,  261, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      44,   21,   21,   21, 0x05,
      60,   21,   21,   21, 0x05,
      75,   21,   21,   21, 0x05,
      90,   21,   21,   21, 0x05,
     104,   21,   21,   21, 0x05,
     137,   21,   21,   21, 0x05,
     168,   21,   21,   21, 0x05,
     196,   21,   21,   21, 0x05,
     216,   21,   21,   21, 0x05,
     238,   21,   21,   21, 0x05,
     256,   21,   21,   21, 0x05,
     279,   21,   21,   21, 0x05,
     306,   21,   21,   21, 0x05,
     327,   21,   21,   21, 0x05,
     343,   21,   21,   21, 0x05,
     361,   21,   21,   21, 0x05,
     380,   21,   21,   21, 0x05,
     403,   21,   21,   21, 0x05,
     434,   21,   21,   21, 0x05,
     452,   21,   21,   21, 0x05,
     468,   21,   21,   21, 0x05,
     483,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     496,   21,   21,   21, 0x0a,
     520,   21,   21,   21, 0x0a,
     544,   21,   21,   21, 0x08,
     553,   21,   21,   21, 0x08,
     562,   21,   21,   21, 0x08,
     591,  579,   21,   21, 0x08,
     614,  579,   21,   21, 0x08,
     639,  636,   21,   21, 0x08,
     663,   21,   21,   21, 0x08,
     687,  676,   21,   21, 0x08,
     727,  722,   21,   21, 0x08,
     761,   21,   21,   21, 0x08,

 // properties: name, type, flags
     784,  775, 0xff495103,
     808,  790, 0x0049510b,
     817,  813, 0x02495103,
     836,  830, ((uint)QMetaType::QReal << 24) | 0x00495103,
     866,  843, 0x0049510b,
     894,  876, 0x00495009,
     908,  830, ((uint)QMetaType::QReal << 24) | 0x00495103,
     932,  830, ((uint)QMetaType::QReal << 24) | 0x00495103,
     973,  954, 0x0049510b,
     992,  813, 0x02495103,
    1014,  830, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1025,  830, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1048, 1043, 0x01495103,
    1060, 1043, 0x01495001,
    1067, 1043, 0x01495001,
    1076,  813, 0x02495001,
    1082,  843, 0x0049510b,
    1091,  813, 0x02495103,

 // properties: notify_signal_id
       2,
       4,
       0,
       1,
      16,
      17,
       5,
       6,
       7,
      18,
       8,
      12,
      13,
      14,
      15,
       3,
      10,
      11,

 // enums: name, flags, count, data
     954, 0x0,    3,  265,

 // enum data: key, value
    1105, uint(QDeclarativePathView::NoHighlightRange),
    1122, uint(QDeclarativePathView::ApplyRange),
    1133, uint(QDeclarativePathView::StrictlyEnforceRange),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathView[] = {
    "QDeclarativePathView\0\0currentIndexChanged()\0"
    "offsetChanged()\0modelChanged()\0"
    "countChanged()\0pathChanged()\0"
    "preferredHighlightBeginChanged()\0"
    "preferredHighlightEndChanged()\0"
    "highlightRangeModeChanged()\0"
    "dragMarginChanged()\0snapPositionChanged()\0"
    "delegateChanged()\0pathItemCountChanged()\0"
    "flickDecelerationChanged()\0"
    "interactiveChanged()\0movingChanged()\0"
    "flickingChanged()\0highlightChanged()\0"
    "highlightItemChanged()\0"
    "highlightMoveDurationChanged()\0"
    "movementStarted()\0movementEnded()\0"
    "flickStarted()\0flickEnded()\0"
    "incrementCurrentIndex()\0decrementCurrentIndex()\0"
    "refill()\0ticked()\0movementEnding()\0"
    "index,count\0itemsInserted(int,int)\0"
    "itemsRemoved(int,int)\0,,\0"
    "itemsMoved(int,int,int)\0modelReset()\0"
    "index,item\0createdItem(int,QDeclarativeItem*)\0"
    "item\0destroyingItem(QDeclarativeItem*)\0"
    "pathUpdated()\0QVariant\0model\0"
    "QDeclarativePath*\0path\0int\0currentIndex\0"
    "qreal\0offset\0QDeclarativeComponent*\0"
    "highlight\0QDeclarativeItem*\0highlightItem\0"
    "preferredHighlightBegin\0preferredHighlightEnd\0"
    "HighlightRangeMode\0highlightRangeMode\0"
    "highlightMoveDuration\0dragMargin\0"
    "flickDeceleration\0bool\0interactive\0"
    "moving\0flicking\0count\0delegate\0"
    "pathItemCount\0NoHighlightRange\0"
    "ApplyRange\0StrictlyEnforceRange\0"
};

void QDeclarativePathView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathView *_t = static_cast<QDeclarativePathView *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged(); break;
        case 1: _t->offsetChanged(); break;
        case 2: _t->modelChanged(); break;
        case 3: _t->countChanged(); break;
        case 4: _t->pathChanged(); break;
        case 5: _t->preferredHighlightBeginChanged(); break;
        case 6: _t->preferredHighlightEndChanged(); break;
        case 7: _t->highlightRangeModeChanged(); break;
        case 8: _t->dragMarginChanged(); break;
        case 9: _t->snapPositionChanged(); break;
        case 10: _t->delegateChanged(); break;
        case 11: _t->pathItemCountChanged(); break;
        case 12: _t->flickDecelerationChanged(); break;
        case 13: _t->interactiveChanged(); break;
        case 14: _t->movingChanged(); break;
        case 15: _t->flickingChanged(); break;
        case 16: _t->highlightChanged(); break;
        case 17: _t->highlightItemChanged(); break;
        case 18: _t->highlightMoveDurationChanged(); break;
        case 19: _t->movementStarted(); break;
        case 20: _t->movementEnded(); break;
        case 21: _t->flickStarted(); break;
        case 22: _t->flickEnded(); break;
        case 23: _t->incrementCurrentIndex(); break;
        case 24: _t->decrementCurrentIndex(); break;
        case 25: _t->refill(); break;
        case 26: _t->ticked(); break;
        case 27: _t->movementEnding(); break;
        case 28: _t->itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->itemsMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->modelReset(); break;
        case 32: _t->createdItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativeItem*(*)>(_a[2]))); break;
        case 33: _t->destroyingItem((*reinterpret_cast< QDeclarativeItem*(*)>(_a[1]))); break;
        case 34: _t->pathUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativePathView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathView::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativePathView,
      qt_meta_data_QDeclarativePathView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathView))
        return static_cast<void*>(const_cast< QDeclarativePathView*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativePathView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = model(); break;
        case 1: *reinterpret_cast< QDeclarativePath**>(_v) = path(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = offset(); break;
        case 4: *reinterpret_cast< QDeclarativeComponent**>(_v) = highlight(); break;
        case 5: *reinterpret_cast< QDeclarativeItem**>(_v) = highlightItem(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = preferredHighlightBegin(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = preferredHighlightEnd(); break;
        case 8: *reinterpret_cast< HighlightRangeMode*>(_v) = highlightRangeMode(); break;
        case 9: *reinterpret_cast< int*>(_v) = highlightMoveDuration(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = dragMargin(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = flickDeceleration(); break;
        case 12: *reinterpret_cast< bool*>(_v) = isInteractive(); break;
        case 13: *reinterpret_cast< bool*>(_v) = isMoving(); break;
        case 14: *reinterpret_cast< bool*>(_v) = isFlicking(); break;
        case 15: *reinterpret_cast< int*>(_v) = count(); break;
        case 16: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        case 17: *reinterpret_cast< int*>(_v) = pathItemCount(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: setPath(*reinterpret_cast< QDeclarativePath**>(_v)); break;
        case 2: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: setOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setHighlight(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 6: setPreferredHighlightBegin(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setPreferredHighlightEnd(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setHighlightRangeMode(*reinterpret_cast< HighlightRangeMode*>(_v)); break;
        case 9: setHighlightMoveDuration(*reinterpret_cast< int*>(_v)); break;
        case 10: setDragMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setFlickDeceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 12: setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 16: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 17: setPathItemCount(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePathView::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePathView::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativePathView::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativePathView::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativePathView::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativePathView::preferredHighlightBeginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativePathView::preferredHighlightEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativePathView::highlightRangeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativePathView::dragMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativePathView::snapPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativePathView::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QDeclarativePathView::pathItemCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDeclarativePathView::flickDecelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QDeclarativePathView::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QDeclarativePathView::movingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QDeclarativePathView::flickingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void QDeclarativePathView::highlightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void QDeclarativePathView::highlightItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void QDeclarativePathView::highlightMoveDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void QDeclarativePathView::movementStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void QDeclarativePathView::movementEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void QDeclarativePathView::flickStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}

// SIGNAL 22
void QDeclarativePathView::flickEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 22, 0);
}
static const uint qt_meta_data_QDeclarativePathViewAttached[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      51,   29,   29,   29, 0x05,

 // properties: name, type, flags
      87,   65, 0x00095409,
      97,   92, 0x01495001,
     111,   92, 0x01495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePathViewAttached[] = {
    "QDeclarativePathViewAttached\0\0"
    "currentItemChanged()\0pathChanged()\0"
    "QDeclarativePathView*\0view\0bool\0"
    "isCurrentItem\0onPath\0"
};

void QDeclarativePathViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePathViewAttached *_t = static_cast<QDeclarativePathViewAttached *>(_o);
        switch (_id) {
        case 0: _t->currentItemChanged(); break;
        case 1: _t->pathChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePathViewAttached::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePathViewAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePathViewAttached,
      qt_meta_data_QDeclarativePathViewAttached, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePathViewAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePathViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePathViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePathViewAttached))
        return static_cast<void*>(const_cast< QDeclarativePathViewAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativePathViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QDeclarativePathView**>(_v) = view(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isCurrentItem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isOnPath(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
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
void QDeclarativePathViewAttached::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePathViewAttached::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
