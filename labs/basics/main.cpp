#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication const a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
