/****************************************************************************
** Meta object code from reading C++ file 'audiodataoutput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../3rdparty/phonon/phonon/audiodataoutput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiodataoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__AudioDataOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x05,
     114,   97,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     135,  130,   24,   24, 0x0a,

 // properties: name, type, flags
     156,  152, 0x02095103,

 // enums: name, flags, count, data
     165, 0x0,    6,   36,

 // enum data: key, value
     173, uint(Phonon::AudioDataOutput::LeftChannel),
     185, uint(Phonon::AudioDataOutput::RightChannel),
     198, uint(Phonon::AudioDataOutput::CenterChannel),
     212, uint(Phonon::AudioDataOutput::LeftSurroundChannel),
     232, uint(Phonon::AudioDataOutput::RightSurroundChannel),
     253, uint(Phonon::AudioDataOutput::SubwooferChannel),

       0        // eod
};

static const char qt_meta_stringdata_Phonon__AudioDataOutput[] = {
    "Phonon::AudioDataOutput\0\0data\0"
    "dataReady(QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> >)\0"
    "remainingSamples\0endOfMedia(int)\0size\0"
    "setDataSize(int)\0int\0dataSize\0Channel\0"
    "LeftChannel\0RightChannel\0CenterChannel\0"
    "LeftSurroundChannel\0RightSurroundChannel\0"
    "SubwooferChannel\0"
};

void Phonon::AudioDataOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioDataOutput *_t = static_cast<AudioDataOutput *>(_o);
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< const QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> >(*)>(_a[1]))); break;
        case 1: _t->endOfMedia((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDataSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::AudioDataOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::AudioDataOutput::staticMetaObject = {
    { &AbstractAudioOutput::staticMetaObject, qt_meta_stringdata_Phonon__AudioDataOutput,
      qt_meta_data_Phonon__AudioDataOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::AudioDataOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::AudioDataOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::AudioDataOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__AudioDataOutput))
        return static_cast<void*>(const_cast< AudioDataOutput*>(this));
    return AbstractAudioOutput::qt_metacast(_clname);
}

int Phonon::AudioDataOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = dataSize(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDataSize(*reinterpret_cast< int*>(_v)); break;
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
void Phonon::AudioDataOutput::dataReady(const QMap<Phonon::AudioDataOutput::Channel,QVector<qint16> > & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::AudioDataOutput::endOfMedia(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
