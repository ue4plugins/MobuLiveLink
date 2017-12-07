/****************************************************************************
** Meta object code from reading C++ file 'q3process.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../other/q3process.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3process.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3Process[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      29,   10,   10,   10, 0x05,
      47,   10,   10,   10, 0x05,
      63,   10,   10,   10, 0x05,
      78,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     121,  117,   10,   10, 0x0a,
     146,  117,   10,   10, 0x0a,
     168,   10,   10,   10, 0x0a,
     184,  181,   10,   10, 0x08,
     200,  181,   10,   10, 0x08,
     217,   10,   10,   10, 0x08,
     227,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Q3Process[] = {
    "Q3Process\0\0readyReadStdout()\0"
    "readyReadStderr()\0processExited()\0"
    "wroteToStdin()\0launchFinished()\0"
    "tryTerminate()\0kill()\0buf\0"
    "writeToStdin(QByteArray)\0writeToStdin(QString)\0"
    "closeStdin()\0fd\0socketRead(int)\0"
    "socketWrite(int)\0timeout()\0"
    "closeStdinLaunch()\0"
};

void Q3Process::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3Process *_t = static_cast<Q3Process *>(_o);
        switch (_id) {
        case 0: _t->readyReadStdout(); break;
        case 1: _t->readyReadStderr(); break;
        case 2: _t->processExited(); break;
        case 3: _t->wroteToStdin(); break;
        case 4: _t->launchFinished(); break;
        case 5: _t->tryTerminate(); break;
        case 6: _t->kill(); break;
        case 7: _t->writeToStdin((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->writeToStdin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->closeStdin(); break;
        case 10: _t->socketRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->socketWrite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->timeout(); break;
        case 13: _t->closeStdinLaunch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3Process::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3Process::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3Process,
      qt_meta_data_Q3Process, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3Process::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3Process::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3Process::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3Process))
        return static_cast<void*>(const_cast< Q3Process*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3Process::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Q3Process::readyReadStdout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Q3Process::readyReadStderr()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Q3Process::processExited()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Q3Process::wroteToStdin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Q3Process::launchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
