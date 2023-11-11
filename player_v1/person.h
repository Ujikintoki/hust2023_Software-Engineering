#ifndef PERSON_H
#define PERSON_H

#include<QString>

class Person
{
public:
    Person();
    ~Person();

private:
    QString username;
    QString password;
    QString nicheng;
    QString trodition;
    QString musiclabel;
public:
    QString getUsername();
    QString getPassword();
    void setUsername(QString username);
    void setPassword(QString password);
    void setlogstate();
    QString getnicheng();
    void setnicheng(QString nicheng);
    QString gettrodition();
    void settrodition(QString trodition);
    QString getmusiclabel();
    void setmusiclabel(QString musiclabel);
};

#endif // PERSON_H
