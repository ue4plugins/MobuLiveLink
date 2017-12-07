/****************************************************************************
** Meta object code from reading C++ file 'InspectorServerQt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WebCoreSupport/InspectorServerQt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InspectorServerQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__InspectorServerQt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__InspectorServerQt[] = {
    "WebCore::InspectorServerQt\0\0newConnection()\0"
};

void WebCore::InspectorServerQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InspectorServerQt *_t = static_cast<InspectorServerQt *>(_o);
        switch (_id) {
        case 0: _t->newConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::InspectorServerQt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::InspectorServerQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__InspectorServerQt,
      qt_meta_data_WebCore__InspectorServerQt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::InspectorServerQt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::InspectorServerQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::InspectorServerQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__InspectorServerQt))
        return static_cast<void*>(const_cast< InspectorServerQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::InspectorServerQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_WebCore__RemoteFrontendChannel[] = {

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

static const char qt_meta_stringdata_WebCore__RemoteFrontendChannel[] = {
    "WebCore::RemoteFrontendChannel\0"
};

void WebCore::RemoteFrontendChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::RemoteFrontendChannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::RemoteFrontendChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__RemoteFrontendChannel,
      qt_meta_data_WebCore__RemoteFrontendChannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::RemoteFrontendChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::RemoteFrontendChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::RemoteFrontendChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__RemoteFrontendChannel))
        return static_cast<void*>(const_cast< RemoteFrontendChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::RemoteFrontendChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_WebCore__InspectorServerRequestHandlerQt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x08,
      57,   41,   41,   41, 0x08,
      85,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt[] = {
    "WebCore::InspectorServerRequestHandlerQt\0"
    "\0tcpReadyRead()\0tcpConnectionDisconnected()\0"
    "webSocketReadyRead()\0"
};

void WebCore::InspectorServerRequestHandlerQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InspectorServerRequestHandlerQt *_t = static_cast<InspectorServerRequestHandlerQt *>(_o);
        switch (_id) {
        case 0: _t->tcpReadyRead(); break;
        case 1: _t->tcpConnectionDisconnected(); break;
        case 2: _t->webSocketReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::InspectorServerRequestHandlerQt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::InspectorServerRequestHandlerQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt,
      qt_meta_data_WebCore__InspectorServerRequestHandlerQt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::InspectorServerRequestHandlerQt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::InspectorServerRequestHandlerQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::InspectorServerRequestHandlerQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__InspectorServerRequestHandlerQt))
        return static_cast<void*>(const_cast< InspectorServerRequestHandlerQt*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::InspectorServerRequestHandlerQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
