/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "takeInput"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "input1"
QT_MOC_LITERAL(4, 29, 6), // "input2"
QT_MOC_LITERAL(5, 36, 13), // "changePlayers"
QT_MOC_LITERAL(6, 50, 11), // "isEmptyCell"
QT_MOC_LITERAL(7, 62, 10), // "changeCell"
QT_MOC_LITERAL(8, 73, 6), // "isDraw"
QT_MOC_LITERAL(9, 80, 5), // "isWin"
QT_MOC_LITERAL(10, 86, 10), // "clearBoard"
QT_MOC_LITERAL(11, 97, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(12, 122, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(13, 147, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(14, 172, 24), // "on_pushButton_21_clicked"
QT_MOC_LITERAL(15, 197, 24), // "on_pushButton_22_clicked"
QT_MOC_LITERAL(16, 222, 24), // "on_pushButton_23_clicked"
QT_MOC_LITERAL(17, 247, 24), // "on_pushButton_31_clicked"
QT_MOC_LITERAL(18, 272, 24), // "on_pushButton_32_clicked"
QT_MOC_LITERAL(19, 297, 24), // "on_pushButton_33_clicked"
QT_MOC_LITERAL(20, 322, 18) // "on_Restart_clicked"

    },
    "MainWindow\0takeInput\0\0input1\0input2\0"
    "changePlayers\0isEmptyCell\0changeCell\0"
    "isDraw\0isWin\0clearBoard\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_12_clicked\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_21_clicked\0"
    "on_pushButton_22_clicked\0"
    "on_pushButton_23_clicked\0"
    "on_pushButton_31_clicked\0"
    "on_pushButton_32_clicked\0"
    "on_pushButton_33_clicked\0on_Restart_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x0a /* Public */,
       5,    0,  104,    2, 0x0a /* Public */,
       6,    2,  105,    2, 0x0a /* Public */,
       7,    2,  110,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    1,  117,    2, 0x0a /* Public */,
      11,    0,  120,    2, 0x08 /* Private */,
      12,    0,  121,    2, 0x08 /* Private */,
      13,    0,  122,    2, 0x08 /* Private */,
      14,    0,  123,    2, 0x08 /* Private */,
      15,    0,  124,    2, 0x08 /* Private */,
      16,    0,  125,    2, 0x08 /* Private */,
      17,    0,  126,    2, 0x08 /* Private */,
      18,    0,  127,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        (void)_t;
        switch (_id) {
        case 0: _t->takeInput((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->changePlayers(); break;
        case 2: { bool _r = _t->isEmptyCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->changeCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { bool _r = _t->isDraw();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isWin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->clearBoard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_11_clicked(); break;
        case 8: _t->on_pushButton_12_clicked(); break;
        case 9: _t->on_pushButton_13_clicked(); break;
        case 10: _t->on_pushButton_21_clicked(); break;
        case 11: _t->on_pushButton_22_clicked(); break;
        case 12: _t->on_pushButton_23_clicked(); break;
        case 13: _t->on_pushButton_31_clicked(); break;
        case 14: _t->on_pushButton_32_clicked(); break;
        case 15: _t->on_pushButton_33_clicked(); break;
        case 16: _t->on_Restart_clicked(); break;
        default: ;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
