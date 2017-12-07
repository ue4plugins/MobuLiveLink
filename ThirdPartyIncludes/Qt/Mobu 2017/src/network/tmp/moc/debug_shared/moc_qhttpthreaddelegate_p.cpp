/****************************************************************************
** Meta object code from reading C++ file 'qhttpthreaddelegate_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qhttpthreaddelegate_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpthreaddelegate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHttpThreadDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x05,
      92,   90,   20,   20, 0x05,
     154,  151,   20,   20, 0x05,
     206,   20,   20,   20, 0x05,
     255,  249,   20,   20, 0x05,
     355,   90,   20,   20, 0x05,
     387,   20,   20,   20, 0x05,
     412,   90,   20,   20, 0x05,
     455,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     474,   20,   20,   20, 0x0a,
     489,   20,   20,   20, 0x0a,
     509,  504,   20,   20, 0x0a,
     539,  504,   20,   20, 0x0a,
     563,   20,   20,   20, 0x0a,
     591,   20,   20,   20, 0x09,
     607,   20,   20,   20, 0x09,
     639,  622,   20,   20, 0x09,
     708,  698,   20,   20, 0x29,
     759,   20,   20,   20, 0x09,
     785,  622,   20,   20, 0x09,
     855,  698,   20,   20, 0x29,
     917,   20,   20,   20, 0x09,
     937,   20,   20,   20, 0x09,
     979,  968,   20,   20, 0x09,
    1031, 1009,   20,   20, 0x09,
    1096, 1089,   20,   20, 0x09,
    1128,   21,   20,   20, 0x09,
    1203,   90,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QHttpThreadDelegate[] = {
    "QHttpThreadDelegate\0\0request,\0"
    "authenticationRequired(QHttpNetworkRequest,QAuthenticator*)\0"
    ",\0proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    ",,\0sslErrors(QList<QSslError>,bool*,QList<QSslError>*)\0"
    "sslConfigurationChanged(QSslConfiguration)\0"
    ",,,,,\0"
    "downloadMetaData(QList<QPair<QByteArray,QByteArray> >,int,QString,bool"
    ",QSharedPointer<char>,qint64)\0"
    "downloadProgress(qint64,qint64)\0"
    "downloadData(QByteArray)\0"
    "error(QNetworkReply::NetworkError,QString)\0"
    "downloadFinished()\0startRequest()\0"
    "abortRequest()\0size\0readBufferSizeChanged(qint64)\0"
    "readBufferFreed(qint64)\0"
    "startRequestSynchronously()\0readyReadSlot()\0"
    "finishedSlot()\0errorCode,detail\0"
    "finishedWithErrorSlot(QNetworkReply::NetworkError,QString)\0"
    "errorCode\0finishedWithErrorSlot(QNetworkReply::NetworkError)\0"
    "synchronousFinishedSlot()\0"
    "synchronousFinishedWithErrorSlot(QNetworkReply::NetworkError,QString)\0"
    "synchronousFinishedWithErrorSlot(QNetworkReply::NetworkError)\0"
    "headerChangedSlot()\0synchronousHeaderChangedSlot()\0"
    "done,total\0dataReadProgressSlot(int,int)\0"
    "request,authenticator\0"
    "cacheCredentialsSlot(QHttpNetworkRequest,QAuthenticator*)\0"
    "errors\0sslErrorsSlot(QList<QSslError>)\0"
    "synchronousAuthenticationRequiredSlot(QHttpNetworkRequest,QAuthenticat"
    "or*)\0"
    "synchronousProxyAuthenticationRequiredSlot(QNetworkProxy,QAuthenticato"
    "r*)\0"
};

void QHttpThreadDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHttpThreadDelegate *_t = static_cast<QHttpThreadDelegate *>(_o);
        switch (_id) {
        case 0: _t->authenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])),(*reinterpret_cast< QList<QSslError>*(*)>(_a[3]))); break;
        case 3: _t->sslConfigurationChanged((*reinterpret_cast< const QSslConfiguration(*)>(_a[1]))); break;
        case 4: _t->downloadMetaData((*reinterpret_cast< QList<QPair<QByteArray,QByteArray> >(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QSharedPointer<char>(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6]))); break;
        case 5: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->downloadData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->downloadFinished(); break;
        case 9: _t->startRequest(); break;
        case 10: _t->abortRequest(); break;
        case 11: _t->readBufferSizeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->readBufferFreed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->startRequestSynchronously(); break;
        case 14: _t->readyReadSlot(); break;
        case 15: _t->finishedSlot(); break;
        case 16: _t->finishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->finishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 18: _t->synchronousFinishedSlot(); break;
        case 19: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 21: _t->headerChangedSlot(); break;
        case 22: _t->synchronousHeaderChangedSlot(); break;
        case 23: _t->dataReadProgressSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->cacheCredentialsSlot((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 25: _t->sslErrorsSlot((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 26: _t->synchronousAuthenticationRequiredSlot((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 27: _t->synchronousProxyAuthenticationRequiredSlot((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHttpThreadDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHttpThreadDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpThreadDelegate,
      qt_meta_data_QHttpThreadDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHttpThreadDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHttpThreadDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHttpThreadDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpThreadDelegate))
        return static_cast<void*>(const_cast< QHttpThreadDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpThreadDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void QHttpThreadDelegate::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttpThreadDelegate::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttpThreadDelegate::sslErrors(const QList<QSslError> & _t1, bool * _t2, QList<QSslError> * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHttpThreadDelegate::sslConfigurationChanged(const QSslConfiguration _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHttpThreadDelegate::downloadMetaData(QList<QPair<QByteArray,QByteArray> > _t1, int _t2, QString _t3, bool _t4, QSharedPointer<char> _t5, qint64 _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHttpThreadDelegate::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttpThreadDelegate::downloadData(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHttpThreadDelegate::error(QNetworkReply::NetworkError _t1, const QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttpThreadDelegate::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
static const uint qt_meta_data_QNonContiguousByteDeviceThreadForwardImpl[] = {

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
      43,   42,   42,   42, 0x05,
      60,   42,   42,   42, 0x05,
      84,   82,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,  101,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl[] = {
    "QNonContiguousByteDeviceThreadForwardImpl\0"
    "\0wantData(qint64)\0processedData(qint64)\0"
    "b\0resetData(bool*)\0dataArray,dataAtEnd,dataSize\0"
    "haveDataSlot(QByteArray,bool,qint64)\0"
};

void QNonContiguousByteDeviceThreadForwardImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNonContiguousByteDeviceThreadForwardImpl *_t = static_cast<QNonContiguousByteDeviceThreadForwardImpl *>(_o);
        switch (_id) {
        case 0: _t->wantData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->processedData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->resetData((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->haveDataSlot((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNonContiguousByteDeviceThreadForwardImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNonContiguousByteDeviceThreadForwardImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl,
      qt_meta_data_QNonContiguousByteDeviceThreadForwardImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNonContiguousByteDeviceThreadForwardImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNonContiguousByteDeviceThreadForwardImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNonContiguousByteDeviceThreadForwardImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceThreadForwardImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceThreadForwardImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
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
void QNonContiguousByteDeviceThreadForwardImpl::wantData(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNonContiguousByteDeviceThreadForwardImpl::processedData(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNonContiguousByteDeviceThreadForwardImpl::resetData(bool * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
