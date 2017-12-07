/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qnetworkaccessmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkAccessManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   23,   22,   22, 0x05,
     122,  102,   22,   22, 0x05,
     183,  177,   22,   22, 0x05,
     221,  208,   22,   22, 0x05,
     264,   22,   22,   22, 0x05,
     301,  290,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     371,   22,   22,   22, 0x08,
     390,   22,   22,   22, 0x08,
     426,   22,   22,   22, 0x08,
     452,   22,   22,   22, 0x08,

 // properties: name, type, flags
     527,  506, 0x0049510b,

 // properties: notify_signal_id
       5,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkAccessManager[] = {
    "QNetworkAccessManager\0\0proxy,authenticator\0"
    "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    "reply,authenticator\0"
    "authenticationRequired(QNetworkReply*,QAuthenticator*)\0"
    "reply\0finished(QNetworkReply*)\0"
    "reply,errors\0sslErrors(QNetworkReply*,QList<QSslError>)\0"
    "networkSessionConnected()\0accessible\0"
    "networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility)\0"
    "_q_replyFinished()\0"
    "_q_replySslErrors(QList<QSslError>)\0"
    "_q_networkSessionClosed()\0"
    "_q_networkSessionStateChanged(QNetworkSession::State)\0"
    "NetworkAccessibility\0networkAccessible\0"
};

void QNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkAccessManager *_t = static_cast<QNetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->sslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 4: _t->networkSessionConnected(); break;
        case 5: _t->networkAccessibleChanged((*reinterpret_cast< QNetworkAccessManager::NetworkAccessibility(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_replyFinished(); break;
        case 7: _t->d_func()->_q_replySslErrors((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_networkSessionClosed(); break;
        case 9: _t->d_func()->_q_networkSessionStateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkAccessManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkAccessManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkAccessManager,
      qt_meta_data_QNetworkAccessManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessManager))
        return static_cast<void*>(const_cast< QNetworkAccessManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NetworkAccessibility*>(_v) = networkAccessible(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNetworkAccessible(*reinterpret_cast< NetworkAccessibility*>(_v)); break;
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

// SIGNAL 0
void QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkAccessManager::authenticationRequired(QNetworkReply * _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkAccessManager::finished(QNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkAccessManager::sslErrors(QNetworkReply * _t1, const QList<QSslError> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkAccessManager::networkSessionConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
