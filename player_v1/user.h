#ifndef USER_H
#define USER_H
#include "person.h"
#include <QMap>
class user
{
public:
    user();
    ~user();
    void signup(Person user); //注册
    void login(Person user);   //登录
    bool getLogState();//获取登录状态
    bool logState=false; //登录状态
    QMap<QString,QString>nameToPass;
    void csvToMap();
private:

};

#endif // USER_H

