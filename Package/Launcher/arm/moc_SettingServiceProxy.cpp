/****************************************************************************
** Meta object code from reading C++ file 'SettingServiceProxy.h'
**
** Created: Mon Oct 23 11:19:08 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/BusinessLogic/Setting/SettingServiceProxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingServiceProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LocalDbusServerDbusServerInterface[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   36,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   36,   67,   35, 0x0a,
     104,   35,   67,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LocalDbusServerDbusServerInterface[] = {
    "LocalDbusServerDbusServerInterface\0\0"
    "language\0onLanguageChange(int)\0"
    "QDBusPendingReply<>\0setLanguage(int)\0"
    "synchronize()\0"
};

const QMetaObject LocalDbusServerDbusServerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_LocalDbusServerDbusServerInterface,
      qt_meta_data_LocalDbusServerDbusServerInterface, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LocalDbusServerDbusServerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LocalDbusServerDbusServerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LocalDbusServerDbusServerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LocalDbusServerDbusServerInterface))
        return static_cast<void*>(const_cast< LocalDbusServerDbusServerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int LocalDbusServerDbusServerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onLanguageChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<> _r = setLanguage((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = synchronize();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LocalDbusServerDbusServerInterface::onLanguageChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE