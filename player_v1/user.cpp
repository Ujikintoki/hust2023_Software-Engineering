#include "user.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>    //操作数据库
#include <person.h>
#include<QFile>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QMap>
#include <QList>

user::user()
{

}

user::~user(){
    //maptoFile
}

bool user::getLogState(){
    return logState;
}




void user::csvToMap()
{
    nameToPass.clear();
    QString filePath = "database.csv"; // 你的CSV文件路径

    // 创建文件对象并打开CSV文件
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "error" << filePath;
        //exit(0);
    }

    // 创建文本流对象
    QTextStream in(&file);

    // 创建 QMap 用于存储第一列和第二列的关联数据

    while (!in.atEnd())
    {
        QString line = in.readLine(); // 逐行读取
        QStringList fields = line.split(","); // 使用逗号分隔符分割行数据

        // 确保行具有足够的字段
        if (fields.size() >= 2)
        {
            QString key = fields.at(0); // 第一列作为键
            QString value = fields.at(1); // 第二列作为值
            nameToPass[key] = value;
        }
    }

    // 关闭文件
    file.close();

    // 遍历生成的 QMap 并处理数据
    QMap<QString, QString>::const_iterator it;
    for (it = nameToPass.constBegin(); it != nameToPass.constEnd(); ++it)
    {
        QString key = it.key();
        QString value = it.value();

        // 在这里处理键和值
        qDebug() << "Key: " << key << ", Value: " << value;
    }
}

void user::login(Person user){  //登录
    if(getLogState()==false){
        QMap<QString,QString> nameToPass;
        csvToMap();
        if(nameToPass.contains(user.getUsername())){
            if(nameToPass[user.getUsername()]==user.getPassword()){
                this->logState=true;

                //登录成功跳转界面
            }
            else{
                qDebug() <<"Error"; //输出错误信息
                //登录信息错误
                return;
            }
        }
        else{    //如果没有查到记录
            //qDebug() <<query.lastError().text(); //输出错误信息
            //登录信息错误
            return;
        }
    }
}

void user::signup(Person user){  //注册
    if(getLogState()==false){
        QMap<QString,QString> nameToPass;
        csvToMap();
        if(nameToPass.contains(user.getUsername())){
            return;
            //注册失败
        }
        else{
            QString filePath = "database.csv"; // 你的CSV文件路径

                // 创建文件对象并以追加模式打开CSV文件
                QFile file(filePath);
                if (!file.open(QIODevice::Append | QIODevice::Text))
                {
                    qDebug() << "error" << filePath;
                    return;
                }

                // 创建文本流对象
                //QTextStream out(&file);

                // 创建新行的数据
                //qDebug() << user.getUsername() << user.getPassword();
                //QString newRow = user.getUsername().arg(",").arg(user.getPassword()).arg(",,,");
                // 将新行数据写入CSV文件

                    else
                    {
                        QTextStream out(&file);    // 输入流
                        out << user.getUsername()<<","<<user.getPassword()<<","<<","<<","<<"\n";

                    }

                //out << newRow << "\n";

                // 关闭文件
                file.close();

            logState=true;

            //注册成功
        }
    }
}
