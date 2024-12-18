#include "mainwindow.h"
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog d;

    QObject::connect( &d, &Dialog::InputPlayerNames, &w, &MainWindow::takeInput );

    d.exec();


    w.show();


    return a.exec();
}
