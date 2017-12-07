/****************************************************************************
** Meta object code from reading C++ file 'qhttp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qhttp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHttp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      30,   25,    6,    6, 0x05,
      74,   25,    6,    6, 0x05,
     107,  105,    6,    6, 0x05,
     133,  105,    6,    6, 0x05,
     159,    6,    6,    6, 0x05,
     179,  105,    6,    6, 0x05,
     205,    6,    6,    6, 0x05,
     223,  216,    6,    6, 0x05,
     297,  282,    6,    6, 0x05,
     360,  353,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     388,    6,    6,    6, 0x0a,
     396,    6,    6,    6, 0x0a,
     414,    6,    6,    6, 0x08,
     436,    6,    6,    6, 0x08,
     455,    6,    6,    6, 0x08,
     474,    6,    6,    6, 0x08,
     517,    6,    6,    6, 0x08,
     542,  533,    6,    6, 0x08,
     570,  533,    6,    6, 0x08,
     607,    6,    6,    6, 0x08,
     627,    6,    6,    6, 0x08,
     648,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHttp[] = {
    "QHttp\0\0stateChanged(int)\0resp\0"
    "responseHeaderReceived(QHttpResponseHeader)\0"
    "readyRead(QHttpResponseHeader)\0,\0"
    "dataSendProgress(int,int)\0"
    "dataReadProgress(int,int)\0requestStarted(int)\0"
    "requestFinished(int,bool)\0done(bool)\0"
    "proxy,\0"
    "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    "hostname,port,\0"
    "authenticationRequired(QString,quint16,QAuthenticator*)\0"
    "errors\0sslErrors(QList<QSslError>)\0"
    "abort()\0ignoreSslErrors()\0"
    "_q_startNextRequest()\0_q_slotReadyRead()\0"
    "_q_slotConnected()\0"
    "_q_slotError(QAbstractSocket::SocketError)\0"
    "_q_slotClosed()\0numBytes\0"
    "_q_slotBytesWritten(qint64)\0"
    "_q_slotEncryptedBytesWritten(qint64)\0"
    "_q_slotDoFinished()\0_q_slotSendRequest()\0"
    "_q_continuePost()\0"
};

void QHttp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHttp *_t = static_cast<QHttp *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->responseHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 2: _t->readyRead((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 3: _t->dataSendProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->dataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->requestStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->requestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 9: _t->authenticationRequired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QAuthenticator*(*)>(_a[3]))); break;
        case 10: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 11: _t->abort(); break;
        case 12: _t->ignoreSslErrors(); break;
        case 13: _t->d_func()->_q_startNextRequest(); break;
        case 14: _t->d_func()->_q_slotReadyRead(); break;
        case 15: _t->d_func()->_q_slotConnected(); break;
        case 16: _t->d_func()->_q_slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_slotClosed(); break;
        case 18: _t->d_func()->_q_slotBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_slotEncryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 20: _t->d_func()->_q_slotDoFinished(); break;
        case 21: _t->d_func()->_q_slotSendRequest(); break;
        case 22: _t->d_func()->_q_continuePost(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHttp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHttp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttp,
      qt_meta_data_QHttp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHttp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHttp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHttp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHttp))
        return static_cast<void*>(const_cast< QHttp*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void QHttp::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttp::responseHeaderReceived(const QHttpResponseHeader & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttp::readyRead(const QHttpResponseHeader & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHttp::dataSendProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHttp::dataReadProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHttp::requestStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttp::requestFinished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHttp::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttp::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttp::authenticationRequired(const QString & _t1, quint16 _t2, QAuthenticator * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttp::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
