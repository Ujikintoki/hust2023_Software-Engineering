#include "person.h"

Person::Person()
{

}
Person::~Person(){

}
QString Person::getUsername()
{
    return username;
}
QString  Person::getPassword()
{
    return password;
}
QString Person::getnicheng()
{
    return nicheng;
}
QString Person::gettrodition()
{
    return trodition;
}
QString Person::getmusiclabel()
{
    return musiclabel;
}
void  Person::setUsername(QString username){

    this->username=username;
}
void  Person::setPassword(QString password){

    this->password=password;
}

void Person::setnicheng(QString nicheng){

    this->nicheng=nicheng;
}

void Person::settrodition(QString trodition){

    this->trodition=trodition;
}

void Person::setmusiclabel(QString musiclabel){

    this->musiclabel=musiclabel;
}
