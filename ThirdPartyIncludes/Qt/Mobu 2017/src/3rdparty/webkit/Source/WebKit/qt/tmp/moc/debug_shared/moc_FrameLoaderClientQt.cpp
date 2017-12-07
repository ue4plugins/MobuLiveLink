/****************************************************************************
** Meta object code from reading C++ file 'FrameLoaderClientQt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WebCoreSupport/FrameLoaderClientQt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameLoaderClientQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__FrameLoaderClientQt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   30,   29,   29, 0x05,
      56,   50,   29,   29, 0x05,
      78,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__FrameLoaderClientQt[] = {
    "WebCore::FrameLoaderClientQt\0\0d\0"
    "loadProgress(int)\0title\0titleChanged(QString)\0"
    "unsupportedContent(QNetworkReply*)\0"
    "onIconLoadedForPageURL(QString)\0"
};

void WebCore::FrameLoaderClientQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FrameLoaderClientQt *_t = static_cast<FrameLoaderClientQt *>(_o);
        switch (_id) {
        case 0: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->unsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->onIconLoadedForPageURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebCore::FrameLoaderClientQt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::FrameLoaderClientQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__FrameLoaderClientQt,
      qt_meta_data_WebCore__FrameLoaderClientQt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::FrameLoaderClientQt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::FrameLoaderClientQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::FrameLoaderClientQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__FrameLoaderClientQt))
        return static_cast<void*>(const_cast< FrameLoaderClientQt*>(this));
    if (!strcmp(_clname, "FrameLoaderClient"))
        return static_cast< FrameLoaderClient*>(const_cast< FrameLoaderClientQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::FrameLoaderClientQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WebCore::FrameLoaderClientQt::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebCore::FrameLoaderClientQt::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebCore::FrameLoaderClientQt::unsupportedContent(QNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
