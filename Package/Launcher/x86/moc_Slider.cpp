/****************************************************************************
** Meta object code from reading C++ file 'Slider.h'
**
** Created: Wed Oct 18 10:38:01 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/Common/Slider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Slider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,    8,    7,    7, 0x05,
      49,    8,    7,    7, 0x05,
      80,    8,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Slider[] = {
    "Slider\0\0millesimal\0tickMarksMillesimalStart(int)\0"
    "tickMarksMillesimalChange(int)\0"
    "tickMarksMillesimalEnd(int)\0"
};

void Slider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Slider *_t = static_cast<Slider *>(_o);
        switch (_id) {
        case 0: _t->tickMarksMillesimalStart((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->tickMarksMillesimalChange((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->tickMarksMillesimalEnd((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Slider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Slider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Slider,
      qt_meta_data_Slider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Slider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Slider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Slider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Slider))
        return static_cast<void*>(const_cast< Slider*>(this));
    return QWidget::qt_metacast(_clname);
}

int Slider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Slider::tickMarksMillesimalStart(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Slider::tickMarksMillesimalChange(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Slider::tickMarksMillesimalEnd(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE