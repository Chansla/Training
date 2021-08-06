/****************************************************************************
** Meta object code from reading C++ file 'smarthome.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SmartHome/smarthome.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smarthome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SmartHome_t {
    QByteArrayData data[14];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartHome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartHome_t qt_meta_stringdata_SmartHome = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SmartHome"
QT_MOC_LITERAL(1, 10, 9), // "showLogin"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "showDevice"
QT_MOC_LITERAL(4, 32, 11), // "showWeather"
QT_MOC_LITERAL(5, 44, 9), // "showMusic"
QT_MOC_LITERAL(6, 54, 9), // "showVideo"
QT_MOC_LITERAL(7, 64, 12), // "slotShowThis"
QT_MOC_LITERAL(8, 77, 31), // "on_pushButton_backLogin_clicked"
QT_MOC_LITERAL(9, 109, 28), // "on_pushButton_Device_clicked"
QT_MOC_LITERAL(10, 138, 29), // "on_pushButton_Weather_clicked"
QT_MOC_LITERAL(11, 168, 27), // "on_pushButton_Music_clicked"
QT_MOC_LITERAL(12, 196, 27), // "on_pushButton_Video_clicked"
QT_MOC_LITERAL(13, 224, 27) // "on_pushButton_close_clicked"

    },
    "SmartHome\0showLogin\0\0showDevice\0"
    "showWeather\0showMusic\0showVideo\0"
    "slotShowThis\0on_pushButton_backLogin_clicked\0"
    "on_pushButton_Device_clicked\0"
    "on_pushButton_Weather_clicked\0"
    "on_pushButton_Music_clicked\0"
    "on_pushButton_Video_clicked\0"
    "on_pushButton_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartHome[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SmartHome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartHome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showLogin(); break;
        case 1: _t->showDevice(); break;
        case 2: _t->showWeather(); break;
        case 3: _t->showMusic(); break;
        case 4: _t->showVideo(); break;
        case 5: _t->slotShowThis(); break;
        case 6: _t->on_pushButton_backLogin_clicked(); break;
        case 7: _t->on_pushButton_Device_clicked(); break;
        case 8: _t->on_pushButton_Weather_clicked(); break;
        case 9: _t->on_pushButton_Music_clicked(); break;
        case 10: _t->on_pushButton_Video_clicked(); break;
        case 11: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SmartHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SmartHome::showLogin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SmartHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SmartHome::showDevice)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SmartHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SmartHome::showWeather)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SmartHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SmartHome::showMusic)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SmartHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SmartHome::showVideo)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SmartHome::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SmartHome.data,
    qt_meta_data_SmartHome,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SmartHome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartHome::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartHome.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SmartHome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SmartHome::showLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SmartHome::showDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SmartHome::showWeather()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SmartHome::showMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SmartHome::showVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
