/****************************************************************************
** Meta object code from reading C++ file 'CarlifeLinkWidget.h'
**
** Created: Wed Oct 18 10:38:50 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/MainWidget/LinkWidget/CarlifeLinkWidget/CarlifeLinkWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CarlifeLinkWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CarlifeLinkWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   19,   18,   18, 0x09,
      73,   19,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CarlifeLinkWidget[] = {
    "CarlifeLinkWidget\0\0type,status\0"
    "ontWidgetTypeChange(Widget::Type,QString)\0"
    "onLinkStatusChange(int,int)\0"
};

void CarlifeLinkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CarlifeLinkWidget *_t = static_cast<CarlifeLinkWidget *>(_o);
        switch (_id) {
        case 0: _t->ontWidgetTypeChange((*reinterpret_cast< const Widget::Type(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onLinkStatusChange((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CarlifeLinkWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CarlifeLinkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CarlifeLinkWidget,
      qt_meta_data_CarlifeLinkWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CarlifeLinkWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CarlifeLinkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CarlifeLinkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CarlifeLinkWidget))
        return static_cast<void*>(const_cast< CarlifeLinkWidget*>(this));
    if (!strcmp(_clname, "Widget::Interface"))
        return static_cast< Widget::Interface*>(const_cast< CarlifeLinkWidget*>(this));
    if (!strcmp(_clname, "Link::Interface"))
        return static_cast< Link::Interface*>(const_cast< CarlifeLinkWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CarlifeLinkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE