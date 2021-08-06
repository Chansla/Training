/****************************************************************************
** Meta object code from reading C++ file 'weather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SmartHome/weather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Weather_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Weather_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Weather_t qt_meta_stringdata_Weather = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Weather"
QT_MOC_LITERAL(1, 8, 8), // "showMain"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "slotShowThis"
QT_MOC_LITERAL(4, 31, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(5, 58, 27), // "on_pushButton_query_clicked"
QT_MOC_LITERAL(6, 86, 15), // "slotReceiveData"
QT_MOC_LITERAL(7, 102, 9), // "dataToday"
QT_MOC_LITERAL(8, 112, 27) // "on_pushButton_close_clicked"

    },
    "Weather\0showMain\0\0slotShowThis\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_query_clicked\0slotReceiveData\0"
    "dataToday\0on_pushButton_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Weather[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void,

       0        // eod
};

void Weather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Weather *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMain(); break;
        case 1: _t->slotShowThis(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->on_pushButton_query_clicked(); break;
        case 4: _t->slotReceiveData((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Weather::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Weather::showMain)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Weather::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Weather.data,
    qt_meta_data_Weather,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Weather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Weather::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Weather.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Weather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Weather::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
