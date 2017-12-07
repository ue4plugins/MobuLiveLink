/****************************************************************************
** Meta object code from reading C++ file 'qgraphicswebview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/qgraphicswebview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicswebview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      32,   17,   17,   17, 0x05,
      60,   51,   17,   17, 0x05,
      78,   17,   17,   17, 0x05,
      95,   17,   17,   17, 0x05,
     117,   17,   17,   17, 0x05,
     139,  131,   17,   17, 0x05,
     165,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     183,   17,   17,   17, 0x0a,
     190,   17,   17,   17, 0x0a,
     197,   17,   17,   17, 0x0a,
     207,   17,   17,   17, 0x0a,
     224,  216,   17,   17, 0x08,
     248,   17,   17,   17, 0x08,
     267,   17,   17,   17, 0x08,
     280,   17,   17,   17, 0x08,
     310,   17,   17,   17, 0x08,

 // properties: name, type, flags
     336,  328, 0x0a495001,
     348,  342, 0x45495001,
     359,  353, ((uint)QMetaType::QReal << 24) | 0x00095103,
     375,  370, 0x11495103,
     384,  379, 0x01095001,
     393,  379, 0x01095103,
     411,  379, 0x01095103,
     457,  435, 0x0009510b,

 // properties: notify_signal_id
       4,
       5,
       0,
       3,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsWebView[] = {
    "QGraphicsWebView\0\0loadStarted()\0"
    "loadFinished(bool)\0progress\0"
    "loadProgress(int)\0urlChanged(QUrl)\0"
    "titleChanged(QString)\0iconChanged()\0"
    "message\0statusBarMessage(QString)\0"
    "linkClicked(QUrl)\0stop()\0back()\0"
    "forward()\0reload()\0success\0"
    "_q_doLoadFinished(bool)\0_q_pageDestroyed()\0"
    "syncLayers()\0_q_contentsSizeChanged(QSize)\0"
    "_q_scaleChanged()\0QString\0title\0QIcon\0"
    "icon\0qreal\0zoomFactor\0QUrl\0url\0bool\0"
    "modified\0resizesToContents\0"
    "tiledBackingStoreFrozen\0QPainter::RenderHints\0"
    "renderHints\0"
};

void QGraphicsWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsWebView *_t = static_cast<QGraphicsWebView *>(_o);
        switch (_id) {
        case 0: _t->loadStarted(); break;
        case 1: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->iconChanged(); break;
        case 6: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->stop(); break;
        case 9: _t->back(); break;
        case 10: _t->forward(); break;
        case 11: _t->reload(); break;
        case 12: _t->d->_q_doLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->d->_q_pageDestroyed(); break;
        case 14: _t->d->syncLayers(); break;
        case 15: _t->d->_q_contentsSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 16: _t->d->_q_scaleChanged(); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_QGraphicsWebView[] = {
        QPainter::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_QGraphicsWebView[] = {
        &QPainter::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData QGraphicsWebView::staticMetaObjectExtraData = {
    qt_meta_extradata_QGraphicsWebView,  qt_static_metacall 
};

const QMetaObject QGraphicsWebView::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_QGraphicsWebView,
      qt_meta_data_QGraphicsWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsWebView))
        return static_cast<void*>(const_cast< QGraphicsWebView*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int QGraphicsWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = zoomFactor(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = url(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isModified(); break;
        case 5: *reinterpret_cast< bool*>(_v) = resizesToContents(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isTiledBackingStoreFrozen(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(renderHints()); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setZoomFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 5: setResizesToContents(*reinterpret_cast< bool*>(_v)); break;
        case 6: setTiledBackingStoreFrozen(*reinterpret_cast< bool*>(_v)); break;
        case 7: setRenderHints(QFlag(*reinterpret_cast<int*>(_v))); break;
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
void QGraphicsWebView::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGraphicsWebView::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsWebView::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGraphicsWebView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGraphicsWebView::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGraphicsWebView::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QGraphicsWebView::statusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGraphicsWebView::linkClicked(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
