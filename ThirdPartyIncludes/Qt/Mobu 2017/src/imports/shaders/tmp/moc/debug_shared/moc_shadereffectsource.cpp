/****************************************************************************
** Meta object code from reading C++ file 'shadereffectsource.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shadereffectsource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shadereffectsource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShaderEffectSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,   79, // properties
       2,  103, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      40,   19,   19,   19, 0x05,
      60,   19,   19,   19, 0x05,
      81,   19,   19,   19, 0x05,
      97,   19,   19,   19, 0x05,
     111,   19,   19,   19, 0x05,
     131,   19,   19,   19, 0x05,
     147,   19,   19,   19, 0x05,
     165,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     183,   19,   19,   19, 0x0a,
     205,   19,   19,   19, 0x0a,
     227,   19,   19,   19, 0x0a,

 // methods: signature, parameters, type, tag, flags
     249,   19,   19,   19, 0x02,

 // properties: name, type, flags
     274,  256, 0x0049510b,
     292,  285, 0x14495103,
     309,  303, 0x15495103,
     326,  321, 0x01495103,
     331,  321, 0x01495103,
     351,  342, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       5,
       8,

 // enums: name, flags, count, data
     342, 0x0,    4,  111,
     360, 0x0,    3,  119,

 // enum data: key, value
     367, uint(ShaderEffectSource::ClampToEdge),
     379, uint(ShaderEffectSource::RepeatHorizontally),
     398, uint(ShaderEffectSource::RepeatVertically),
     415, uint(ShaderEffectSource::Repeat),
     422, uint(ShaderEffectSource::Alpha),
     428, uint(ShaderEffectSource::RGB),
     432, uint(ShaderEffectSource::RGBA),

       0        // eod
};

static const char qt_meta_stringdata_ShaderEffectSource[] = {
    "ShaderEffectSource\0\0sourceItemChanged()\0"
    "sourceRectChanged()\0textureSizeChanged()\0"
    "formatChanged()\0liveChanged()\0"
    "hideSourceChanged()\0activeChanged()\0"
    "repaintRequired()\0wrapModeChanged()\0"
    "markSceneGraphDirty()\0markSourceSizeDirty()\0"
    "markSourceItemDirty()\0grab()\0"
    "QDeclarativeItem*\0sourceItem\0QRectF\0"
    "sourceRect\0QSize\0textureSize\0bool\0"
    "live\0hideSource\0WrapMode\0wrapMode\0"
    "Format\0ClampToEdge\0RepeatHorizontally\0"
    "RepeatVertically\0Repeat\0Alpha\0RGB\0"
    "RGBA\0"
};

void ShaderEffectSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShaderEffectSource *_t = static_cast<ShaderEffectSource *>(_o);
        switch (_id) {
        case 0: _t->sourceItemChanged(); break;
        case 1: _t->sourceRectChanged(); break;
        case 2: _t->textureSizeChanged(); break;
        case 3: _t->formatChanged(); break;
        case 4: _t->liveChanged(); break;
        case 5: _t->hideSourceChanged(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->repaintRequired(); break;
        case 8: _t->wrapModeChanged(); break;
        case 9: _t->markSceneGraphDirty(); break;
        case 10: _t->markSourceSizeDirty(); break;
        case 11: _t->markSourceItemDirty(); break;
        case 12: _t->grab(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShaderEffectSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShaderEffectSource::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_ShaderEffectSource,
      qt_meta_data_ShaderEffectSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShaderEffectSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShaderEffectSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShaderEffectSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShaderEffectSource))
        return static_cast<void*>(const_cast< ShaderEffectSource*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int ShaderEffectSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QDeclarativeItem**>(_v) = sourceItem(); break;
        case 1: *reinterpret_cast< QRectF*>(_v) = sourceRect(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = textureSize(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isLive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hideSource(); break;
        case 5: *reinterpret_cast< WrapMode*>(_v) = wrapMode(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSourceItem(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        case 1: setSourceRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 2: setTextureSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: setLive(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHideSource(*reinterpret_cast< bool*>(_v)); break;
        case 5: setWrapMode(*reinterpret_cast< WrapMode*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ShaderEffectSource::sourceItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ShaderEffectSource::sourceRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ShaderEffectSource::textureSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ShaderEffectSource::formatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ShaderEffectSource::liveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ShaderEffectSource::hideSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ShaderEffectSource::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ShaderEffectSource::repaintRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ShaderEffectSource::wrapModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
