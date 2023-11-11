#include "setuser.h"
#include "ui_setuser.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>    //操作数据库
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QList>
#include "mainwindow.h"
setuser::setuser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setuser)
{
    ui->setupUi(this);


}

setuser::~setuser()
{
    delete ui;
}



void setuser::on_pushButton_clicked()
{
    Person _person;
    QString filePath = "database.csv"; // 你的CSV文件路径
        QString targetKey = _person.getUsername(); // 你想要查找的特定第一列值
        _person.setnicheng(ui->nicheng->text());
        _person.settrodition(ui->tradition->text());
        _person.setmusiclabel(ui->musiclabel->text());

        // 创建文件对象并打开CSV文件
        QFile file(filePath);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "无法打开文件：" << filePath;
        }

        // 创建文本流对象
        QTextStream in(&file);
        QStringList lines; // 用于存储CSV文件的所有行

        while (!in.atEnd())
        {
            QString line = in.readLine();
            lines.append(line);
        }

        // 关闭文件
        file.close();

        bool found = false;
        for (int i = 0; i < lines.size(); ++i)
        {
            QString line = lines.at(i);
            QStringList fields = line.split(",");

            if ( fields[0] == targetKey)
            {
                // 修改找到的行数据，这里示例修改第二列数据
                    fields[2] = _person.getnicheng(); // 替换为新的值
                    lines[i] = fields.join(","); // 更新行数据
                    fields[3] = _person.gettrodition();
                    lines[i] = fields.join(","); // 更新行数据
                    fields[4] = _person.getmusiclabel();
                    lines[i] = fields.join(","); // 更新行数据
                    found = true;

            }
        }

        if (found)
        {
            // 打开CSV文件以写入修改后的数据
            if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
            {
                QTextStream out(&file);
                for (const QString &line : lines)
                {
                    out << line << "\n";
                }

                // 关闭文件
                file.close();

                qDebug() << "数据已更新。";
            }
            else
            {
                qDebug() << "无法打开文件以写入数据：" << filePath;
            }
        }
        else
        {
            qDebug() << "未找到指定的键值：" << targetKey;
        }


}
