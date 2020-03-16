/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "high_value_changed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "high"
QT_MOC_LITERAL(4, 36, 17), // "calculate_signals"
QT_MOC_LITERAL(5, 54, 25), // "on_high_value_textChanged"
QT_MOC_LITERAL(6, 80, 4), // "arg1"
QT_MOC_LITERAL(7, 85, 25), // "on_addition_p_textChanged"
QT_MOC_LITERAL(8, 111, 26), // "on_pressure_unit_activated"
QT_MOC_LITERAL(9, 138, 22), // "on_high_unit_activated"
QT_MOC_LITERAL(10, 161, 28), // "on_temperture_unit_activated"
QT_MOC_LITERAL(11, 190, 25), // "on_density_unit_activated"
QT_MOC_LITERAL(12, 216, 23), // "on_speed_unit_activated"
QT_MOC_LITERAL(13, 240, 20), // "on_calculate_clicked"
QT_MOC_LITERAL(14, 261, 19), // "on_action_triggered"
QT_MOC_LITERAL(15, 281, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(16, 303, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(17, 325, 21), // "on_action_1_triggered"
QT_MOC_LITERAL(18, 347, 16), // "on_reset_clicked"
QT_MOC_LITERAL(19, 364, 25) // "on_actionMatlab_triggered"

    },
    "MainWindow\0high_value_changed\0\0high\0"
    "calculate_signals\0on_high_value_textChanged\0"
    "arg1\0on_addition_p_textChanged\0"
    "on_pressure_unit_activated\0"
    "on_high_unit_activated\0"
    "on_temperture_unit_activated\0"
    "on_density_unit_activated\0"
    "on_speed_unit_activated\0on_calculate_clicked\0"
    "on_action_triggered\0on_action_3_triggered\0"
    "on_action_2_triggered\0on_action_1_triggered\0"
    "on_reset_clicked\0on_actionMatlab_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   98,    2, 0x08 /* Private */,
       7,    1,  101,    2, 0x08 /* Private */,
       8,    1,  104,    2, 0x08 /* Private */,
       9,    1,  107,    2, 0x08 /* Private */,
      10,    1,  110,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      12,    1,  116,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    0,  122,    2, 0x08 /* Private */,
      17,    0,  123,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->high_value_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->calculate_signals(); break;
        case 2: _t->on_high_value_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_addition_p_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pressure_unit_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_high_unit_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_temperture_unit_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_density_unit_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_speed_unit_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_calculate_clicked(); break;
        case 10: _t->on_action_triggered(); break;
        case 11: _t->on_action_3_triggered(); break;
        case 12: _t->on_action_2_triggered(); break;
        case 13: _t->on_action_1_triggered(); break;
        case 14: _t->on_reset_clicked(); break;
        case 15: _t->on_actionMatlab_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::high_value_changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::calculate_signals)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::high_value_changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::calculate_signals()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
