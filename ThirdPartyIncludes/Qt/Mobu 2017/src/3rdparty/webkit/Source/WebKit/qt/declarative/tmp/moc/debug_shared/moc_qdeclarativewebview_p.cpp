/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativewebview_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdeclarativewebview_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativewebview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeWebPage[] = {

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

static const char qt_meta_stringdata_QDeclarativeWebPage[] = {
    "QDeclarativeWebPage\0"
};

void QDeclarativeWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeWebPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeWebPage::staticMetaObject = {
    { &QWebPage::staticMetaObject, qt_meta_stringdata_QDeclarativeWebPage,
      qt_meta_data_QDeclarativeWebPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeWebPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeWebPage))
        return static_cast<void*>(const_cast< QDeclarativeWebPage*>(this));
    return QWebPage::qt_metacast(_clname);
}

int QDeclarativeWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_GraphicsWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsWebView[] = {
    "GraphicsWebView\0\0clickX,clickY\0"
    "doubleClick(int,int)\0"
};

void GraphicsWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphicsWebView *_t = static_cast<GraphicsWebView *>(_o);
        switch (_id) {
        case 0: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GraphicsWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphicsWebView::staticMetaObject = {
    { &QGraphicsWebView::staticMetaObject, qt_meta_stringdata_GraphicsWebView,
      qt_meta_data_GraphicsWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsWebView))
        return static_cast<void*>(const_cast< GraphicsWebView*>(this));
    return QGraphicsWebView::qt_metacast(_clname);
}

int GraphicsWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GraphicsWebView::doubleClick(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QDeclarativeWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      22,  184, // properties
       1,  294, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      45,   20,   20,   20, 0x05,
      70,   20,   20,   20, 0x05,
      83,   20,   20,   20, 0x05,
     101,   20,   20,   20, 0x05,
     123,   20,   20,   20, 0x05,
     145,   20,   20,   20, 0x05,
     159,   20,   20,   20, 0x05,
     179,   20,   20,   20, 0x05,
     193,   20,   20,   20, 0x05,
     216,   20,   20,   20, 0x05,
     244,   20,   20,   20, 0x05,
     269,   20,   20,   20, 0x05,
     295,   20,   20,   20, 0x05,
     322,   20,   20,   20, 0x05,
     345,   20,   20,   20, 0x05,
     370,   20,   20,   20, 0x05,
     384,   20,   20,   20, 0x05,
     399,   20,   20,   20, 0x05,
     426,  412,   20,   20, 0x05,
     468,  447,   20,   20, 0x05,
     498,  490,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     522,   20,  513,   20, 0x0a,
     550,   20,   20,   20, 0x08,
     568,  566,   20,   20, 0x08,
     591,  588,   20,   20, 0x08,
     612,   20,   20,   20, 0x08,
     635,   20,   20,   20, 0x08,
     657,   20,   20,   20, 0x08,
     674,   20,   20,   20, 0x08,
     690,   20,   20,   20, 0x08,
     745,  721,   20,   20, 0x08,
     802,  797,  776,   20, 0x08,

 // methods: signature, parameters, type, tag, flags
     867,  845,  840,   20, 0x02,

 // properties: name, type, flags
     904,  896, 0x0a495001,
     918,  910, 0x41495001,
     923,  896, 0x0a495001,
     934,  896, 0x0a495103,
     943,  939, 0x02495103,
     957,  939, 0x02495103,
     972,  939, 0x02495103,
     993,  988, 0x11495103,
    1003,  997, ((uint)QMetaType::QReal << 24) | 0x00495001,
    1019, 1012, 0x00495009,
    1035, 1026, 0x00095409,
    1042, 1026, 0x00095409,
    1047, 1026, 0x00095409,
    1055, 1026, 0x00095409,
    1085, 1060, 0x00095409,
    1128, 1094, 0x00095409,
    1175, 1152, 0x0049510b,
    1212, 1194, 0x0049510b,
    1228,  840, 0x01495103,
    1251, 1245, 0x15495001,
    1264,  997, ((uint)QMetaType::QReal << 24) | 0x00495103,
    1285, 1278, 0x43c95103,

 // properties: notify_signal_id
       5,
       6,
       7,
       8,
       9,
       0,
       1,
       2,
       3,
       4,
       0,
       0,
       0,
       0,
       0,
       0,
      10,
      11,
      12,
      13,
      14,
      15,

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
       0,
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
    1012, 0x0,    4,  298,

 // enum data: key, value
    1301, uint(QDeclarativeWebView::Null),
    1306, uint(QDeclarativeWebView::Ready),
    1312, uint(QDeclarativeWebView::Loading),
    1320, uint(QDeclarativeWebView::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeWebView[] = {
    "QDeclarativeWebView\0\0preferredWidthChanged()\0"
    "preferredHeightChanged()\0urlChanged()\0"
    "progressChanged()\0statusChanged(Status)\0"
    "titleChanged(QString)\0iconChanged()\0"
    "statusTextChanged()\0htmlChanged()\0"
    "pressGrabTimeChanged()\0"
    "newWindowComponentChanged()\0"
    "newWindowParentChanged()\0"
    "renderingEnabledChanged()\0"
    "contentsSizeChanged(QSize)\0"
    "contentsScaleChanged()\0backgroundColorChanged()\0"
    "loadStarted()\0loadFinished()\0loadFailed()\0"
    "clickX,clickY\0doubleClick(int,int)\0"
    "zoom,centerX,centerY\0zoomTo(qreal,int,int)\0"
    "message\0alert(QString)\0QVariant\0"
    "evaluateJavaScript(QString)\0doLoadStarted()\0"
    "p\0doLoadProgress(int)\0ok\0doLoadFinished(bool)\0"
    "setStatusText(QString)\0windowObjectCleared()\0"
    "pageUrlChanged()\0initialLayout()\0"
    "updateDeclarativeWebViewSize()\0"
    "newGeometry,oldGeometry\0"
    "geometryChanged(QRectF,QRectF)\0"
    "QDeclarativeWebView*\0type\0"
    "createWindow(QWebPage::WebWindowType)\0"
    "bool\0clickX,clickY,maxzoom\0"
    "heuristicZoom(int,int,qreal)\0QString\0"
    "title\0QPixmap\0icon\0statusText\0html\0"
    "int\0pressGrabTime\0preferredWidth\0"
    "preferredHeight\0QUrl\0url\0qreal\0progress\0"
    "Status\0status\0QAction*\0reload\0back\0"
    "forward\0stop\0QDeclarativeWebSettings*\0"
    "settings\0QDeclarativeListProperty<QObject>\0"
    "javaScriptWindowObjects\0QDeclarativeComponent*\0"
    "newWindowComponent\0QDeclarativeItem*\0"
    "newWindowParent\0renderingEnabled\0QSize\0"
    "contentsSize\0contentsScale\0QColor\0"
    "backgroundColor\0Null\0Ready\0Loading\0"
    "Error\0"
};

void QDeclarativeWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeWebView *_t = static_cast<QDeclarativeWebView *>(_o);
        switch (_id) {
        case 0: _t->preferredWidthChanged(); break;
        case 1: _t->preferredHeightChanged(); break;
        case 2: _t->urlChanged(); break;
        case 3: _t->progressChanged(); break;
        case 4: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 5: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->iconChanged(); break;
        case 7: _t->statusTextChanged(); break;
        case 8: _t->htmlChanged(); break;
        case 9: _t->pressGrabTimeChanged(); break;
        case 10: _t->newWindowComponentChanged(); break;
        case 11: _t->newWindowParentChanged(); break;
        case 12: _t->renderingEnabledChanged(); break;
        case 13: _t->contentsSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 14: _t->contentsScaleChanged(); break;
        case 15: _t->backgroundColorChanged(); break;
        case 16: _t->loadStarted(); break;
        case 17: _t->loadFinished(); break;
        case 18: _t->loadFailed(); break;
        case 19: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->zoomTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->alert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: { QVariant _r = _t->evaluateJavaScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 23: _t->doLoadStarted(); break;
        case 24: _t->doLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->doLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setStatusText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->windowObjectCleared(); break;
        case 28: _t->pageUrlChanged(); break;
        case 29: _t->initialLayout(); break;
        case 30: _t->updateDeclarativeWebViewSize(); break;
        case 31: _t->geometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 32: { QDeclarativeWebView* _r = _t->createWindow((*reinterpret_cast< QWebPage::WebWindowType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDeclarativeWebView**>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->heuristicZoom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeWebView::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeWebView,
      qt_meta_data_QDeclarativeWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeWebView))
        return static_cast<void*>(const_cast< QDeclarativeWebView*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = icon(); break;
        case 2: *reinterpret_cast< QString*>(_v) = statusText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = html(); break;
        case 4: *reinterpret_cast< int*>(_v) = pressGrabTime(); break;
        case 5: *reinterpret_cast< int*>(_v) = preferredWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = preferredHeight(); break;
        case 7: *reinterpret_cast< QUrl*>(_v) = url(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = progress(); break;
        case 9: *reinterpret_cast< Status*>(_v) = status(); break;
        case 10: *reinterpret_cast< QAction**>(_v) = reloadAction(); break;
        case 11: *reinterpret_cast< QAction**>(_v) = backAction(); break;
        case 12: *reinterpret_cast< QAction**>(_v) = forwardAction(); break;
        case 13: *reinterpret_cast< QAction**>(_v) = stopAction(); break;
        case 14: *reinterpret_cast< QDeclarativeWebSettings**>(_v) = settingsObject(); break;
        case 15: *reinterpret_cast< QDeclarativeListProperty<QObject>*>(_v) = javaScriptWindowObjects(); break;
        case 16: *reinterpret_cast< QDeclarativeComponent**>(_v) = newWindowComponent(); break;
        case 17: *reinterpret_cast< QDeclarativeItem**>(_v) = newWindowParent(); break;
        case 18: *reinterpret_cast< bool*>(_v) = renderingEnabled(); break;
        case 19: *reinterpret_cast< QSize*>(_v) = contentsSize(); break;
        case 20: *reinterpret_cast< qreal*>(_v) = contentsScale(); break;
        case 21: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 4: setPressGrabTime(*reinterpret_cast< int*>(_v)); break;
        case 5: setPreferredWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: setPreferredHeight(*reinterpret_cast< int*>(_v)); break;
        case 7: setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 16: setNewWindowComponent(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        case 17: setNewWindowParent(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        case 18: setRenderingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 20: setContentsScale(*reinterpret_cast< qreal*>(_v)); break;
        case 21: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeWebView::preferredWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeWebView::preferredHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeWebView::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeWebView::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QDeclarativeWebView::statusChanged(Status _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QDeclarativeWebView::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QDeclarativeWebView::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QDeclarativeWebView::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QDeclarativeWebView::htmlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QDeclarativeWebView::pressGrabTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QDeclarativeWebView::newWindowComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QDeclarativeWebView::newWindowParentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QDeclarativeWebView::renderingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QDeclarativeWebView::contentsSizeChanged(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QDeclarativeWebView::contentsScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QDeclarativeWebView::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void QDeclarativeWebView::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void QDeclarativeWebView::loadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void QDeclarativeWebView::loadFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void QDeclarativeWebView::doubleClick(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QDeclarativeWebView::zoomTo(qreal _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QDeclarativeWebView::alert(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
static const uint qt_meta_data_QDeclarativeWebViewAttached[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      36,   28, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeWebViewAttached[] = {
    "QDeclarativeWebViewAttached\0QString\0"
    "windowObjectName\0"
};

void QDeclarativeWebViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeWebViewAttached::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeWebViewAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeWebViewAttached,
      qt_meta_data_QDeclarativeWebViewAttached, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeWebViewAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeWebViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeWebViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeWebViewAttached))
        return static_cast<void*>(const_cast< QDeclarativeWebViewAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeWebViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = windowObjectName(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWindowObjectName(*reinterpret_cast< QString*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeWebSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      25,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   24, 0x0a095103,
      51,   24, 0x0a095103,
      67,   24, 0x0a095103,
      83,   24, 0x0a095103,
     103,   24, 0x0a095103,
     121,   24, 0x0a095103,
     143,  139, 0x02095103,
     159,  139, 0x02095103,
     182,  139, 0x02095103,
     198,  139, 0x02095103,
     224,  219, 0x01095103,
     239,  219, 0x01095103,
     257,  219, 0x01095103,
     269,  219, 0x01095103,
     284,  219, 0x01095103,
     307,  219, 0x01095103,
     332,  219, 0x01095103,
     361,  219, 0x01095103,
     384,  219, 0x01095103,
     410,  219, 0x01095103,
     423,  219, 0x01095103,
     447,  219, 0x01095103,
     477,  219, 0x01095103,
     511,  219, 0x01095103,
     539,  219, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeWebSettings[] = {
    "QDeclarativeWebSettings\0QString\0"
    "standardFontFamily\0fixedFontFamily\0"
    "serifFontFamily\0sansSerifFontFamily\0"
    "cursiveFontFamily\0fantasyFontFamily\0"
    "int\0minimumFontSize\0minimumLogicalFontSize\0"
    "defaultFontSize\0defaultFixedFontSize\0"
    "bool\0autoLoadImages\0javascriptEnabled\0"
    "javaEnabled\0pluginsEnabled\0"
    "privateBrowsingEnabled\0javascriptCanOpenWindows\0"
    "javascriptCanAccessClipboard\0"
    "developerExtrasEnabled\0linksIncludedInFocusChain\0"
    "zoomTextOnly\0printElementBackgrounds\0"
    "offlineStorageDatabaseEnabled\0"
    "offlineWebApplicationCacheEnabled\0"
    "localStorageDatabaseEnabled\0"
    "localContentCanAccessRemoteUrls\0"
};

void QDeclarativeWebSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeWebSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeWebSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeWebSettings,
      qt_meta_data_QDeclarativeWebSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeWebSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeWebSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeWebSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeWebSettings))
        return static_cast<void*>(const_cast< QDeclarativeWebSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeWebSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = standardFontFamily(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fixedFontFamily(); break;
        case 2: *reinterpret_cast< QString*>(_v) = serifFontFamily(); break;
        case 3: *reinterpret_cast< QString*>(_v) = sansSerifFontFamily(); break;
        case 4: *reinterpret_cast< QString*>(_v) = cursiveFontFamily(); break;
        case 5: *reinterpret_cast< QString*>(_v) = fantasyFontFamily(); break;
        case 6: *reinterpret_cast< int*>(_v) = minimumFontSize(); break;
        case 7: *reinterpret_cast< int*>(_v) = minimumLogicalFontSize(); break;
        case 8: *reinterpret_cast< int*>(_v) = defaultFontSize(); break;
        case 9: *reinterpret_cast< int*>(_v) = defaultFixedFontSize(); break;
        case 10: *reinterpret_cast< bool*>(_v) = autoLoadImages(); break;
        case 11: *reinterpret_cast< bool*>(_v) = javascriptEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = javaEnabled(); break;
        case 13: *reinterpret_cast< bool*>(_v) = pluginsEnabled(); break;
        case 14: *reinterpret_cast< bool*>(_v) = privateBrowsingEnabled(); break;
        case 15: *reinterpret_cast< bool*>(_v) = javascriptCanOpenWindows(); break;
        case 16: *reinterpret_cast< bool*>(_v) = javascriptCanAccessClipboard(); break;
        case 17: *reinterpret_cast< bool*>(_v) = developerExtrasEnabled(); break;
        case 18: *reinterpret_cast< bool*>(_v) = linksIncludedInFocusChain(); break;
        case 19: *reinterpret_cast< bool*>(_v) = zoomTextOnly(); break;
        case 20: *reinterpret_cast< bool*>(_v) = printElementBackgrounds(); break;
        case 21: *reinterpret_cast< bool*>(_v) = offlineStorageDatabaseEnabled(); break;
        case 22: *reinterpret_cast< bool*>(_v) = offlineWebApplicationCacheEnabled(); break;
        case 23: *reinterpret_cast< bool*>(_v) = localStorageDatabaseEnabled(); break;
        case 24: *reinterpret_cast< bool*>(_v) = localContentCanAccessRemoteUrls(); break;
        }
        _id -= 25;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStandardFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFixedFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 2: setSerifFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 3: setSansSerifFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 4: setCursiveFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 5: setFantasyFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 6: setMinimumFontSize(*reinterpret_cast< int*>(_v)); break;
        case 7: setMinimumLogicalFontSize(*reinterpret_cast< int*>(_v)); break;
        case 8: setDefaultFontSize(*reinterpret_cast< int*>(_v)); break;
        case 9: setDefaultFixedFontSize(*reinterpret_cast< int*>(_v)); break;
        case 10: setAutoLoadImages(*reinterpret_cast< bool*>(_v)); break;
        case 11: setJavascriptEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: setJavaEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 13: setPluginsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 14: setPrivateBrowsingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 15: setJavascriptCanOpenWindows(*reinterpret_cast< bool*>(_v)); break;
        case 16: setJavascriptCanAccessClipboard(*reinterpret_cast< bool*>(_v)); break;
        case 17: setDeveloperExtrasEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 18: setLinksIncludedInFocusChain(*reinterpret_cast< bool*>(_v)); break;
        case 19: setZoomTextOnly(*reinterpret_cast< bool*>(_v)); break;
        case 20: setPrintElementBackgrounds(*reinterpret_cast< bool*>(_v)); break;
        case 21: setOfflineStorageDatabaseEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 22: setOfflineWebApplicationCacheEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 23: setLocalStorageDatabaseEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 24: setLocalContentCanAccessRemoteUrls(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 25;
    } else if (_c == QMetaObject::ResetProperty) {
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
QT_END_MOC_NAMESPACE
