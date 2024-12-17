#include "classes/account.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    Account food;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
