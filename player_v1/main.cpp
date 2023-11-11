#include "mainwindow.h"
#include "setuser.h"
#include <QApplication>
#include <QFile>
#include "loadqssfile.h"

#undef main
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoadQssFile::loadStyle(":darkstyle.qss");
    w.show();
    return a.exec();
}
