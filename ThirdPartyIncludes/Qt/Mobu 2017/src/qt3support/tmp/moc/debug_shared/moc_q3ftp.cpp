/****************************************************************************
** Meta object code from reading C++ file 'q3ftp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../network/q3ftp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3ftp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Ftp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      25,    6,    6,    6, 0x05,
      44,    6,    6,    6, 0x05,
      58,   56,    6,    6, 0x05,
      88,   56,    6,    6, 0x05,
     117,    6,    6,    6, 0x05,
     137,   56,    6,    6, 0x05,
     163,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     174,    6,    6,    6, 0x0a,
     182,    6,    6,    6, 0x08,
     201,    6,    6,    6, 0x08,
     221,   56,    6,    6, 0x08,
     242,    6,    6,    6, 0x08,
     262,   56,    6,    6, 0x08,
     286,    6,    6,    6, 0x08,
     307,    6,    6,    6, 0x08,
     320,    6,    6,    6, 0x08,
     340,   56,    6,    6, 0x08,
     372,    6,    6,    6, 0x08,
     386,    6,    6,    6, 0x09,
     398,    6,    6,    6, 0x09,
     410,    6,    6,    6, 0x09,
     419,    6,    6,    6, 0x09,
     435,    6,    6,    6, 0x09,
     451,    6,    6,    6, 0x09,
     464,    6,    6,    6, 0x09,
     487,  480,    6,    6, 0x09,
     509,    6,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Q3Ftp[] = {
    "Q3Ftp\0\0stateChanged(int)\0listInfo(QUrlInfo)\0"
    "readyRead()\0,\0dataTransferProgress(int,int)\0"
    "rawCommandReply(int,QString)\0"
    "commandStarted(int)\0commandFinished(int,bool)\0"
    "done(bool)\0abort()\0startNextCommand()\0"
    "piFinished(QString)\0piError(int,QString)\0"
    "piConnectState(int)\0piFtpReply(int,QString)\0"
    "npListInfo(QUrlInfo)\0npDone(bool)\0"
    "npStateChanged(int)\0npDataTransferProgress(int,int)\0"
    "npReadyRead()\0hostFound()\0connected()\0"
    "closed()\0dataHostFound()\0dataConnected()\0"
    "dataClosed()\0dataReadyRead()\0nbytes\0"
    "dataBytesWritten(int)\0error(int)\0"
};

void Q3Ftp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Ftp *_t = static_cast<Q3Ftp *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->listInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->dataTransferProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->rawCommandReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->commandStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->commandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        case 9: _t->startNextCommand(); break;
        case 10: _t->piFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->piError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->piConnectState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->piFtpReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->npListInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 15: _t->npDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->npStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->npDataTransferProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->npReadyRead(); break;
        case 19: _t->hostFound(); break;
        case 20: _t->connected(); break;
        case 21: _t->closed(); break;
        case 22: _t->dataHostFound(); break;
        case 23: _t->dataConnected(); break;
        case 24: _t->dataClosed(); break;
        case 25: _t->dataReadyRead(); break;
        case 26: _t->dataBytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Ftp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Ftp::staticMetaObject = {
    { &Q3NetworkProtocol::staticMetaObject, qt_meta_stringdata_Q3Ftp,
      qt_meta_data_Q3Ftp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Ftp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Ftp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Ftp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Ftp))
        return static_cast<void*>(const_cast< Q3Ftp*>(this));
    return Q3NetworkProtocol::qt_metacast(_clname);
}

int Q3Ftp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3NetworkProtocol::qt_metacall(_c, _id, _a);
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
void Q3Ftp::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3Ftp::listInfo(const QUrlInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Q3Ftp::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Q3Ftp::dataTransferProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Q3Ftp::rawCommandReply(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Q3Ftp::commandStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Q3Ftp::commandFinished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Q3Ftp::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
