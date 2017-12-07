/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativelistview_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativelistview_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativelistview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeViewSection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       1,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      43,   24,   24,   24, 0x05,
      61,   24,   24,   24, 0x05,

 // properties: name, type, flags
      87,   79, 0x0a495103,
     112,   96, 0x0049510b,
     144,  121, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      96, 0x0,    2,   45,

 // enum data: key, value
     153, uint(QDeclarativeViewSection::FullString),
     164, uint(QDeclarativeViewSection::FirstCharacter),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeViewSection[] = {
    "QDeclarativeViewSection\0\0propertyChanged()\0"
    "criteriaChanged()\0delegateChanged()\0"
    "QString\0property\0SectionCriteria\0"
    "criteria\0QDeclarativeComponent*\0"
    "delegate\0FullString\0FirstCharacter\0"
};

void QDeclarativeViewSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeViewSection *_t = static_cast<QDeclarativeViewSection *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        case 1: _t->criteriaChanged(); break;
        case 2: _t->delegateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeViewSection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeViewSection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeViewSection,
      qt_meta_data_QDeclarativeViewSection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeViewSection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeViewSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeViewSection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeViewSection))
        return static_cast<void*>(const_cast< QDeclarativeViewSection*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeViewSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = property(); break;
        case 1: *reinterpret_cast< SectionCriteria*>(_v) = criteria(); break;
        case 2: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCriteria(*reinterpret_cast< SectionCriteria*>(_v)); break;
        case 2: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
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
void QDeclarativeViewSection::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeViewSection::criteriaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeViewSection::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QDeclarativeListView[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      41,   16, // methods
      25,  262, // properties
       4,  387, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // classinfo: key, value
      26,   21,

 // signals: signature, parameters, type, tag, flags
      43,   42,   42,   42, 0x05,
      58,   42,   42,   42, 0x05,
      75,   42,   42,   42, 0x05,
      96,   42,   42,   42, 0x85,
     121,   42,   42,   42, 0x05,
     143,   42,   42,   42, 0x05,
     167,   42,   42,   42, 0x05,
     195,   42,   42,   42, 0x05,
     226,   42,   42,   42, 0x05,
     256,   42,   42,   42, 0x05,
     289,   42,   42,   42, 0x05,
     308,   42,   42,   42, 0x05,
     331,   42,   42,   42, 0x05,
     346,   42,   42,   42, 0x05,
     364,   42,   42,   42, 0x05,
     401,   42,   42,   42, 0x05,
     434,   42,   42,   42, 0x05,
     465,   42,   42,   42, 0x05,
     493,   42,   42,   42, 0x05,
     521,   42,   42,   42, 0x05,
     542,   42,   42,   42, 0x05,
     560,   42,   42,   42, 0x05,
     576,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     592,   42,   42,   42, 0x0a,
     616,   42,   42,   42, 0x0a,
     640,   42,   42,   42, 0x08,
     657,   42,   42,   42, 0x08,
     666,   42,   42,   42, 0x08,
     703,  691,   42,   42, 0x08,
     726,  691,   42,   42, 0x08,
     762,  748,   42,   42, 0x08,
     786,  691,   42,   42, 0x08,
     808,   42,   42,   42, 0x08,
     821,   42,   42,   42, 0x08,
     849,  838,   42,   42, 0x08,
     889,  884,   42,   42, 0x08,
     923,   42,   42,   42, 0x08,

 // methods: signature, parameters, type, tag, flags
     948,  937,   42,   42, 0x02,
     985,  981,  977,   42, 0x02,
    1006,   42,   42,   42, 0x82,
    1032,   42,   42,   42, 0x82,

 // signals: revision
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // methods: revision
       0,
       0,
       1,
       1,

 // properties: name, type, flags
    1061, 1052, 0xff495103,
    1090, 1067, 0x0049510b,
    1099,  977, 0x02495103,
    1130, 1112, 0x00495009,
    1142,  977, 0x02495001,
    1148, 1067, 0x0049510b,
    1158, 1112, 0x00495009,
    1177, 1172, 0x01495103,
    1211, 1205, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1230,  977, 0x02495103,
    1252, 1205, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1273,  977, 0x02495103,
    1297, 1205, ((uint)QMetaType::QReal << 24) | 0x00495107,
    1321, 1205, ((uint)QMetaType::QReal << 24) | 0x00495107,
    1362, 1343, 0x0049510b,
    1381, 1205, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1401, 1389, 0x0049510b,
    1433, 1413, 0x00c9510b,
    1449, 1172, 0x01495003,
    1468,  977, 0x02495103,
    1505, 1480, 0x00095409,
    1521, 1513, 0x0a495001,
    1545, 1536, 0x0049510b,
    1554, 1067, 0x0049510b,
    1561, 1067, 0x0049510b,

 // properties: notify_signal_id
      12,
      13,
       4,
       4,
       0,
      10,
      11,
      14,
       6,
       7,
       8,
       9,
      15,
      16,
      17,
       1,
       2,
       3,
      18,
      19,
       0,
       5,
      20,
      21,
      22,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
    1343, 0x0,    3,  403,
    1389, 0x0,    2,  409,
    1536, 0x0,    3,  413,
    1568, 0x0,    5,  419,

 // enum data: key, value
    1581, uint(QDeclarativeListView::NoHighlightRange),
    1598, uint(QDeclarativeListView::ApplyRange),
    1609, uint(QDeclarativeListView::StrictlyEnforceRange),
    1630, uint(QDeclarativeListView::Horizontal),
    1641, uint(QDeclarativeListView::Vertical),
    1650, uint(QDeclarativeListView::NoSnap),
    1657, uint(QDeclarativeListView::SnapToItem),
    1668, uint(QDeclarativeListView::SnapOneItem),
    1680, uint(QDeclarativeListView::Beginning),
    1690, uint(QDeclarativeListView::Center),
    1697, uint(QDeclarativeListView::End),
    1701, uint(QDeclarativeListView::Visible),
    1709, uint(QDeclarativeListView::Contain),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeListView[] = {
    "QDeclarativeListView\0data\0DefaultProperty\0"
    "\0countChanged()\0spacingChanged()\0"
    "orientationChanged()\0layoutDirectionChanged()\0"
    "currentIndexChanged()\0currentSectionChanged()\0"
    "highlightMoveSpeedChanged()\0"
    "highlightMoveDurationChanged()\0"
    "highlightResizeSpeedChanged()\0"
    "highlightResizeDurationChanged()\0"
    "highlightChanged()\0highlightItemChanged()\0"
    "modelChanged()\0delegateChanged()\0"
    "highlightFollowsCurrentItemChanged()\0"
    "preferredHighlightBeginChanged()\0"
    "preferredHighlightEndChanged()\0"
    "highlightRangeModeChanged()\0"
    "keyNavigationWrapsChanged()\0"
    "cacheBufferChanged()\0snapModeChanged()\0"
    "headerChanged()\0footerChanged()\0"
    "incrementCurrentIndex()\0decrementCurrentIndex()\0"
    "updateSections()\0refill()\0"
    "trackedPositionChanged()\0index,count\0"
    "itemsInserted(int,int)\0itemsRemoved(int,int)\0"
    "from,to,count\0itemsMoved(int,int,int)\0"
    "itemsChanged(int,int)\0modelReset()\0"
    "destroyRemoved()\0index,item\0"
    "createdItem(int,QDeclarativeItem*)\0"
    "item\0destroyingItem(QDeclarativeItem*)\0"
    "animStopped()\0index,mode\0"
    "positionViewAtIndex(int,int)\0int\0x,y\0"
    "indexAt(qreal,qreal)\0positionViewAtBeginning()\0"
    "positionViewAtEnd()\0QVariant\0model\0"
    "QDeclarativeComponent*\0delegate\0"
    "currentIndex\0QDeclarativeItem*\0"
    "currentItem\0count\0highlight\0highlightItem\0"
    "bool\0highlightFollowsCurrentItem\0qreal\0"
    "highlightMoveSpeed\0highlightMoveDuration\0"
    "highlightResizeSpeed\0highlightResizeDuration\0"
    "preferredHighlightBegin\0preferredHighlightEnd\0"
    "HighlightRangeMode\0highlightRangeMode\0"
    "spacing\0Orientation\0orientation\0"
    "Qt::LayoutDirection\0layoutDirection\0"
    "keyNavigationWraps\0cacheBuffer\0"
    "QDeclarativeViewSection*\0section\0"
    "QString\0currentSection\0SnapMode\0"
    "snapMode\0header\0footer\0PositionMode\0"
    "NoHighlightRange\0ApplyRange\0"
    "StrictlyEnforceRange\0Horizontal\0"
    "Vertical\0NoSnap\0SnapToItem\0SnapOneItem\0"
    "Beginning\0Center\0End\0Visible\0Contain\0"
};

void QDeclarativeListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeListView *_t = static_cast<QDeclarativeListView *>(_o);
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->spacingChanged(); break;
        case 2: _t->orientationChanged(); break;
        case 3: _t->layoutDirectionChanged(); break;
        case 4: _t->currentIndexChanged(); break;
        case 5: _t->currentSectionChanged(); break;
        case 6: _t->highlightMoveSpeedChanged(); break;
        case 7: _t->highlightMoveDurationChanged(); break;
        case 8: _t->highlightResizeSpeedChanged(); break;
        case 9: _t->highlightResizeDurationChanged(); break;
        case 10: _t->highlightChanged(); break;
        case 11: _t->highlightItemChanged(); break;
        case 12: _t->modelChanged(); break;
        case 13: _t->delegateChanged(); break;
        case 14: _t->highlightFollowsCurrentItemChanged(); break;
        case 15: _t->preferredHighlightBeginChanged(); break;
        case 16: _t->preferredHighlightEndChanged(); break;
        case 17: _t->highlightRangeModeChanged(); break;
        case 18: _t->keyNavigationWrapsChanged(); break;
        case 19: _t->cacheBufferChanged(); break;
        case 20: _t->snapModeChanged(); break;
        case 21: _t->headerChanged(); break;
        case 22: _t->footerChanged(); break;
        case 23: _t->incrementCurrentIndex(); break;
        case 24: _t->decrementCurrentIndex(); break;
        case 25: _t->updateSections(); break;
        case 26: _t->refill(); break;
        case 27: _t->trackedPositionChanged(); break;
        case 28: _t->itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->itemsMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->itemsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->modelReset(); break;
        case 33: _t->destroyRemoved(); break;
        case 34: _t->createdItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativeItem*(*)>(_a[2]))); break;
        case 35: _t->destroyingItem((*reinterpret_cast< QDeclarativeItem*(*)>(_a[1]))); break;
        case 36: _t->animStopped(); break;
        case 37: _t->positionViewAtIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: { int _r = _t->indexAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: _t->positionViewAtBeginning(); break;
        case 40: _t->positionViewAtEnd(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeListView::staticMetaObject = {
    { &QDeclarativeFlickable::staticMetaObject, qt_meta_stringdata_QDeclarativeListView,
      qt_meta_data_QDeclarativeListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeListView))
        return static_cast<void*>(const_cast< QDeclarativeListView*>(this));
    return QDeclarativeFlickable::qt_metacast(_clname);
}

int QDeclarativeListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeFlickable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = model(); break;
        case 1: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 3: *reinterpret_cast< QDeclarativeItem**>(_v) = currentItem(); break;
        case 4: *reinterpret_cast< int*>(_v) = count(); break;
        case 5: *reinterpret_cast< QDeclarativeComponent**>(_v) = highlight(); break;
        case 6: *reinterpret_cast< QDeclarativeItem**>(_v) = highlightItem(); break;
        case 7: *reinterpret_cast< bool*>(_v) = highlightFollowsCurrentItem(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = highlightMoveSpeed(); break;
        case 9: *reinterpret_cast< int*>(_v) = highlightMoveDuration(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = highlightResizeSpeed(); break;
        case 11: *reinterpret_cast< int*>(_v) = highlightResizeDuration(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = preferredHighlightBegin(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = preferredHighlightEnd(); break;
        case 14: *reinterpret_cast< HighlightRangeMode*>(_v) = highlightRangeMode(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = spacing(); break;
        case 16: *reinterpret_cast< Orientation*>(_v) = orientation(); break;
        case 17: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        case 18: *reinterpret_cast< bool*>(_v) = isWrapEnabled(); break;
        case 19: *reinterpret_cast< int*>(_v) = cacheBuffer(); break;
        case 20: *reinterpret_cast< QDeclarativeViewSection**>(_v) = sectionCriteria(); break;
        case 21: *reinterpret_cast< QString*>(_v) = currentSection(); break;
        case 22: *reinterpret_cast< SnapMode*>(_v) = snapMode(); break;
        case 23: *reinterpret_cast< QDeclarativeComponent**>(_v) = header(); break;
        case 24: *reinterpret_cast< QDeclarativeComponent**>(_v) = footer(); break;
        }
        _id -= 25;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 2: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: setHighlight(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 7: setHighlightFollowsCurrentItem(*reinterpret_cast< bool*>(_v)); break;
        case 8: setHighlightMoveSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setHighlightMoveDuration(*reinterpret_cast< int*>(_v)); break;
        case 10: setHighlightResizeSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setHighlightResizeDuration(*reinterpret_cast< int*>(_v)); break;
        case 12: setPreferredHighlightBegin(*reinterpret_cast< qreal*>(_v)); break;
        case 13: setPreferredHighlightEnd(*reinterpret_cast< qreal*>(_v)); break;
        case 14: setHighlightRangeMode(*reinterpret_cast< HighlightRangeMode*>(_v)); break;
        case 15: setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 16: setOrientation(*reinterpret_cast< Orientation*>(_v)); break;
        case 17: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 18: setWrapEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 19: setCacheBuffer(*reinterpret_cast< int*>(_v)); break;
        case 22: setSnapMode(*reinterpret_cast< SnapMode*>(_v)); break;
        case 23: setHeader(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 24: setFooter(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        }
        _id -= 25;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 12: resetPreferredHighlightBegin(); break;
        case 13: resetPreferredHighlightEnd(); break;
        }
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeListView::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeListView::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeListView::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeListView::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeListView::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeListView::currentSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeListView::highlightMoveSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeListView::highlightMoveDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativeListView::highlightResizeSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativeListView::highlightResizeDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativeListView::highlightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QDeclarativeListView::highlightItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDeclarativeListView::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QDeclarativeListView::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QDeclarativeListView::highlightFollowsCurrentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QDeclarativeListView::preferredHighlightBeginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void QDeclarativeListView::preferredHighlightEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void QDeclarativeListView::highlightRangeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void QDeclarativeListView::keyNavigationWrapsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void QDeclarativeListView::cacheBufferChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void QDeclarativeListView::snapModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void QDeclarativeListView::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}

// SIGNAL 22
void QDeclarativeListView::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, 0);
}
static const uint qt_meta_data_QDeclarativeListViewAttached[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      51,   29,   29,   29, 0x05,
      68,   29,   29,   29, 0x05,
      89,   29,   29,   29, 0x05,
     110,   29,   29,   29, 0x05,
     131,   29,   29,   29, 0x05,
     137,   29,   29,   29, 0x05,
     146,   29,   29,   29, 0x05,

 // properties: name, type, flags
     182,  160, 0x00495009,
     192,  187, 0x01495001,
     214,  206, 0x0a495001,
     230,  206, 0x0a495001,
     242,  206, 0x0a495001,
     250,  187, 0x01495103,

 // properties: notify_signal_id
       7,
       0,
       2,
       3,
       1,
       4,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeListViewAttached[] = {
    "QDeclarativeListViewAttached\0\0"
    "currentItemChanged()\0sectionChanged()\0"
    "prevSectionChanged()\0nextSectionChanged()\0"
    "delayRemoveChanged()\0add()\0remove()\0"
    "viewChanged()\0QDeclarativeListView*\0"
    "view\0bool\0isCurrentItem\0QString\0"
    "previousSection\0nextSection\0section\0"
    "delayRemove\0"
};

void QDeclarativeListViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeListViewAttached *_t = static_cast<QDeclarativeListViewAttached *>(_o);
        switch (_id) {
        case 0: _t->currentItemChanged(); break;
        case 1: _t->sectionChanged(); break;
        case 2: _t->prevSectionChanged(); break;
        case 3: _t->nextSectionChanged(); break;
        case 4: _t->delayRemoveChanged(); break;
        case 5: _t->add(); break;
        case 6: _t->remove(); break;
        case 7: _t->viewChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeListViewAttached::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeListViewAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeListViewAttached,
      qt_meta_data_QDeclarativeListViewAttached, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeListViewAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeListViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeListViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeListViewAttached))
        return static_cast<void*>(const_cast< QDeclarativeListViewAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeListViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QDeclarativeListView**>(_v) = view(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isCurrentItem(); break;
        case 2: *reinterpret_cast< QString*>(_v) = prevSection(); break;
        case 3: *reinterpret_cast< QString*>(_v) = nextSection(); break;
        case 4: *reinterpret_cast< QString*>(_v) = section(); break;
        case 5: *reinterpret_cast< bool*>(_v) = delayRemove(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: setDelayRemove(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeListViewAttached::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeListViewAttached::sectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeListViewAttached::prevSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeListViewAttached::nextSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeListViewAttached::delayRemoveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QDeclarativeListViewAttached::add()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QDeclarativeListViewAttached::remove()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeListViewAttached::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
