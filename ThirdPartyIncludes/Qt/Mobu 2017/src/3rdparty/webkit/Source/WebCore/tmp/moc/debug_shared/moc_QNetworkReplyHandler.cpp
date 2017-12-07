/****************************************************************************
** Meta object code from reading C++ file 'QNetworkReplyHandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../platform/network/qt/QNetworkReplyHandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QNetworkReplyHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__QNetworkReplyWrapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      49,   30,   30,   30, 0x08,
      70,   30,   30,   30, 0x08,
      92,   30,   30,   30, 0x08,
     117,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__QNetworkReplyWrapper[] = {
    "WebCore::QNetworkReplyWrapper\0\0"
    "receiveMetaData()\0didReceiveFinished()\0"
    "didReceiveReadyRead()\0receiveSniffedMIMEType()\0"
    "setFinished()\0"
};

void WebCore::QNetworkReplyWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkReplyWrapper *_t = static_cast<QNetworkReplyWrapper *>(_o);
        switch (_id) {
        case 0: _t->receiveMetaData(); break;
        case 1: _t->didReceiveFinished(); break;
        case 2: _t->didReceiveReadyRead(); break;
        case 3: _t->receiveSniffedMIMEType(); break;
        case 4: _t->setFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::QNetworkReplyWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::QNetworkReplyWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__QNetworkReplyWrapper,
      qt_meta_data_WebCore__QNetworkReplyWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::QNetworkReplyWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::QNetworkReplyWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::QNetworkReplyWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__QNetworkReplyWrapper))
        return static_cast<void*>(const_cast< QNetworkReplyWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::QNetworkReplyWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_WebCore__QNetworkReplyHandler[] = {

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
      52,   31,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__QNetworkReplyHandler[] = {
    "WebCore::QNetworkReplyHandler\0\0"
    "bytesSent,bytesTotal\0uploadProgress(qint64,qint64)\0"
};

void WebCore::QNetworkReplyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkReplyHandler *_t = static_cast<QNetworkReplyHandler *>(_o);
        switch (_id) {
        case 0: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebCore::QNetworkReplyHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::QNetworkReplyHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__QNetworkReplyHandler,
      qt_meta_data_WebCore__QNetworkReplyHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::QNetworkReplyHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::QNetworkReplyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::QNetworkReplyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__QNetworkReplyHandler))
        return static_cast<void*>(const_cast< QNetworkReplyHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::QNetworkReplyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_WebCore__FormDataIODevice[] = {

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

static const char qt_meta_stringdata_WebCore__FormDataIODevice[] = {
    "WebCore::FormDataIODevice\0"
};

void WebCore::FormDataIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::FormDataIODevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::FormDataIODevice::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_WebCore__FormDataIODevice,
      qt_meta_data_WebCore__FormDataIODevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::FormDataIODevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::FormDataIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::FormDataIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__FormDataIODevice))
        return static_cast<void*>(const_cast< FormDataIODevice*>(this));
    return QIODevice::qt_metacast(_clname);
}

int WebCore::FormDataIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
