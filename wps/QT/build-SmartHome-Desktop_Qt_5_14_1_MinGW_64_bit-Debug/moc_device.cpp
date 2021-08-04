/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SmartHome/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[16];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 8), // "showMain"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "slotShowThis"
QT_MOC_LITERAL(4, 30, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(5, 57, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(6, 85, 31), // "on_pushButton_lightHost_clicked"
QT_MOC_LITERAL(7, 117, 31), // "on_pushButton_lightSpot_clicked"
QT_MOC_LITERAL(8, 149, 27), // "on_pushButton_sound_clicked"
QT_MOC_LITERAL(9, 177, 36), // "on_pushButton_airConditioner_..."
QT_MOC_LITERAL(10, 214, 28), // "on_pushButton_TempUP_clicked"
QT_MOC_LITERAL(11, 243, 30), // "on_pushButton_TempDown_clicked"
QT_MOC_LITERAL(12, 274, 42), // "on_horizontalSlider_lightHost..."
QT_MOC_LITERAL(13, 317, 5), // "value"
QT_MOC_LITERAL(14, 323, 42), // "on_horizontalSlider_lightSpot..."
QT_MOC_LITERAL(15, 366, 38) // "on_horizontalSlider_sound_val..."

    },
    "Device\0showMain\0\0slotShowThis\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_pushButton_lightHost_clicked\0"
    "on_pushButton_lightSpot_clicked\0"
    "on_pushButton_sound_clicked\0"
    "on_pushButton_airConditioner_clicked\0"
    "on_pushButton_TempUP_clicked\0"
    "on_pushButton_TempDown_clicked\0"
    "on_horizontalSlider_lightHost_valueChanged\0"
    "value\0on_horizontalSlider_lightSpot_valueChanged\0"
    "on_horizontalSlider_sound_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMain(); break;
        case 1: _t->slotShowThis(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->on_pushButton_clear_clicked(); break;
        case 4: _t->on_pushButton_lightHost_clicked(); break;
        case 5: _t->on_pushButton_lightSpot_clicked(); break;
        case 6: _t->on_pushButton_sound_clicked(); break;
        case 7: _t->on_pushButton_airConditioner_clicked(); break;
        case 8: _t->on_pushButton_TempUP_clicked(); break;
        case 9: _t->on_pushButton_TempDown_clicked(); break;
        case 10: _t->on_horizontalSlider_lightHost_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSlider_lightSpot_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_horizontalSlider_sound_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::showMain)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Device::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Device.data,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Device::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
