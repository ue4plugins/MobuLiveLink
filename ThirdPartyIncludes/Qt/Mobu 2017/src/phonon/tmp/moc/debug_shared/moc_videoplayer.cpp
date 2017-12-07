/****************************************************************************
** Meta object code from reading C++ file 'videoplayer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../3rdparty/phonon/phonon/videoplayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__VideoPlayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   32,   20,   20, 0x0a,
      65,   32,   20,   20, 0x0a,
      91,   20,   20,   20, 0x0a,
      98,   20,   20,   20, 0x0a,
     106,   20,   20,   20, 0x0a,
     116,  113,   20,   20, 0x0a,
     136,  129,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__VideoPlayer[] = {
    "Phonon::VideoPlayer\0\0finished()\0source\0"
    "load(Phonon::MediaSource)\0"
    "play(Phonon::MediaSource)\0play()\0"
    "pause()\0stop()\0ms\0seek(qint64)\0volume\0"
    "setVolume(float)\0"
};

void Phonon::VideoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VideoPlayer *_t = static_cast<VideoPlayer *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->load((*reinterpret_cast< const Phonon::MediaSource(*)>(_a[1]))); break;
        case 2: _t->play((*reinterpret_cast< const Phonon::MediaSource(*)>(_a[1]))); break;
        case 3: _t->play(); break;
        case 4: _t->pause(); break;
        case 5: _t->stop(); break;
        case 6: _t->seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->setVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::VideoPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::VideoPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Phonon__VideoPlayer,
      qt_meta_data_Phonon__VideoPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::VideoPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::VideoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::VideoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__VideoPlayer))
        return static_cast<void*>(const_cast< VideoPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Phonon::VideoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Phonon::VideoPlayer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
