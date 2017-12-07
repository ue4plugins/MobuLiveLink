/****************************************************************************
** Meta object code from reading C++ file 'audiooutput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../3rdparty/phonon/phonon/audiooutput.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiooutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__AudioOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   21,   20,   20, 0x05,
      52,   20,   20,   20, 0x05,
      92,   71,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     147,  139,   20,   20, 0x0a,
     164,   21,   20,   20, 0x0a,
     198,  181,   20,   20, 0x0a,
     227,   71,  222,   20, 0x0a,
     275,  270,   20,   20, 0x0a,
     290,   20,   20,   20, 0x08,
     314,   20,   20,   20, 0x08,
     334,   20,   20,   20, 0x08,
     357,   20,   20,   20, 0x08,
     398,  380,   20,   20, 0x08,

 // properties: name, type, flags
     436,  428, 0x0a095103,
     447,  441, ((uint)QMetaType::QReal << 24) | 0x00495103,
     454,  441, ((uint)QMetaType::QReal << 24) | 0x00095103,
     486,  468, 0x0009510b,
     499,  222, 0x01495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__AudioOutput[] = {
    "Phonon::AudioOutput\0\0newVolume\0"
    "volumeChanged(qreal)\0mutedChanged(bool)\0"
    "newAudioOutputDevice\0"
    "outputDeviceChanged(Phonon::AudioOutputDevice)\0"
    "newName\0setName(QString)\0setVolume(qreal)\0"
    "newVolumeDecibel\0setVolumeDecibel(qreal)\0"
    "bool\0setOutputDevice(Phonon::AudioOutputDevice)\0"
    "mute\0setMuted(bool)\0_k_volumeChanged(qreal)\0"
    "_k_revertFallback()\0_k_audioDeviceFailed()\0"
    "_k_deviceListChanged()\0streamUuid,device\0"
    "_k_deviceChanged(QString,int)\0QString\0"
    "name\0qreal\0volume\0volumeDecibel\0"
    "AudioOutputDevice\0outputDevice\0muted\0"
};

void Phonon::AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioOutput *_t = static_cast<AudioOutput *>(_o);
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->outputDeviceChanged((*reinterpret_cast< const Phonon::AudioOutputDevice(*)>(_a[1]))); break;
        case 3: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setVolumeDecibel((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: { bool _r = _t->setOutputDevice((*reinterpret_cast< const Phonon::AudioOutputDevice(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->k_func()->_k_volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->k_func()->_k_revertFallback(); break;
        case 10: _t->k_func()->_k_audioDeviceFailed(); break;
        case 11: _t->k_func()->_k_deviceListChanged(); break;
        case 12: _t->k_func()->_k_deviceChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::AudioOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::AudioOutput::staticMetaObject = {
    { &AbstractAudioOutput::staticMetaObject, qt_meta_stringdata_Phonon__AudioOutput,
      qt_meta_data_Phonon__AudioOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::AudioOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__AudioOutput))
        return static_cast<void*>(const_cast< AudioOutput*>(this));
    return AbstractAudioOutput::qt_metacast(_clname);
}

int Phonon::AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = volume(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = volumeDecibel(); break;
        case 3: *reinterpret_cast< AudioOutputDevice*>(_v) = outputDevice(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isMuted(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setVolume(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setVolumeDecibel(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setOutputDevice(*reinterpret_cast< AudioOutputDevice*>(_v)); break;
        case 4: setMuted(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Phonon::AudioOutput::volumeChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::AudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Phonon::AudioOutput::outputDeviceChanged(const Phonon::AudioOutputDevice & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
