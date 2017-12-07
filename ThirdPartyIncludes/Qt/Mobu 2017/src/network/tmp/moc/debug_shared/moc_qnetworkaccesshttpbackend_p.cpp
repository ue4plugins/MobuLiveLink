/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccesshttpbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qnetworkaccesshttpbackend_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccesshttpbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkAccessHttpBackend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      46,   26,   26,   26, 0x05,
      70,   65,   26,   26, 0x05,
     100,   65,   26,   26, 0x05,
     124,   26,   26,   26, 0x05,
     185,  156,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     224,   26,   26,   26, 0x08,
     254,   26,   26,   26, 0x08,
     276,  270,   26,   26, 0x08,
     383,  381,   26,   26, 0x08,
     437,  424,   26,   26, 0x08,
     519,  501,   26,   26, 0x08,
     569,  566,   26,   26, 0x08,
     626,   26,   26,   26, 0x08,
     676,  674,   26,   26, 0x08,
     703,   26,   26,   26, 0x08,
     730,   26,   26,   26, 0x08,
     771,  762,  757,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkAccessHttpBackend[] = {
    "QNetworkAccessHttpBackend\0\0"
    "startHttpRequest()\0abortHttpRequest()\0"
    "size\0readBufferSizeChanged(qint64)\0"
    "readBufferFreed(qint64)\0"
    "startHttpRequestSynchronously()\0"
    "dataArray,dataAtEnd,dataSize\0"
    "haveUploadData(QByteArray,bool,qint64)\0"
    "replyDownloadData(QByteArray)\0"
    "replyFinished()\0,,,,,\0"
    "replyDownloadMetaData(QList<QPair<QByteArray,QByteArray> >,int,QString"
    ",bool,QSharedPointer<char>,qint64)\0"
    ",\0replyDownloadProgressSlot(qint64,qint64)\0"
    "request,auth\0"
    "httpAuthenticationRequired(QHttpNetworkRequest,QAuthenticator*)\0"
    "error,errorString\0"
    "httpError(QNetworkReply::NetworkError,QString)\0"
    ",,\0replySslErrors(QList<QSslError>,bool*,QList<QSslError>*)\0"
    "replySslConfigurationChanged(QSslConfiguration)\0"
    "r\0resetUploadDataSlot(bool*)\0"
    "wantUploadDataSlot(qint64)\0"
    "sentUploadDataSlot(qint64)\0bool\0"
    "metaData\0sendCacheContents(QNetworkCacheMetaData)\0"
};

void QNetworkAccessHttpBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkAccessHttpBackend *_t = static_cast<QNetworkAccessHttpBackend *>(_o);
        switch (_id) {
        case 0: _t->startHttpRequest(); break;
        case 1: _t->abortHttpRequest(); break;
        case 2: _t->readBufferSizeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->readBufferFreed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->startHttpRequestSynchronously(); break;
        case 5: _t->haveUploadData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 6: _t->replyDownloadData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->replyFinished(); break;
        case 8: _t->replyDownloadMetaData((*reinterpret_cast< QList<QPair<QByteArray,QByteArray> >(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QSharedPointer<char>(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6]))); break;
        case 9: _t->replyDownloadProgressSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->httpAuthenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 11: _t->httpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->replySslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])),(*reinterpret_cast< QList<QSslError>*(*)>(_a[3]))); break;
        case 13: _t->replySslConfigurationChanged((*reinterpret_cast< const QSslConfiguration(*)>(_a[1]))); break;
        case 14: _t->resetUploadDataSlot((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 15: _t->wantUploadDataSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: _t->sentUploadDataSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 17: { bool _r = _t->sendCacheContents((*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkAccessHttpBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkAccessHttpBackend::staticMetaObject = {
    { &QNetworkAccessBackend::staticMetaObject, qt_meta_stringdata_QNetworkAccessHttpBackend,
      qt_meta_data_QNetworkAccessHttpBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkAccessHttpBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkAccessHttpBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkAccessHttpBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessHttpBackend))
        return static_cast<void*>(const_cast< QNetworkAccessHttpBackend*>(this));
    return QNetworkAccessBackend::qt_metacast(_clname);
}

int QNetworkAccessHttpBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QNetworkAccessHttpBackend::startHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QNetworkAccessHttpBackend::abortHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QNetworkAccessHttpBackend::readBufferSizeChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkAccessHttpBackend::readBufferFreed(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkAccessHttpBackend::startHttpRequestSynchronously()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QNetworkAccessHttpBackend::haveUploadData(QByteArray _t1, bool _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
