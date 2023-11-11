#ifndef LOADQSSFILE_H
#define LOADQSSFILE_H

#endif // LOADQSSFILE_H
#include <QFile>
#include <QApplication>

class LoadQssFile
{
public:
    static void loadStyle(const QString &fileName)
    {
         QFile file(fileName);
         file.open(QIODevice::ReadOnly);
         qApp->setStyleSheet(file.readAll());
         file.close();
    }

private:
    LoadQssFile();
};

