#ifndef OPTIONDATABASE_H
#define OPTIONDATABASE_H

#include "studentInfo.h"

class optionDatabase:public studentInfo
{
public:
    optionDatabase();
    virtual bool selectstuInfos(QList<studentInfo> &stuInfos)=0;
    virtual bool addstuInfos(studentInfo stuInfos)=0;
    virtual bool delstuInfos(int Id)=0;
    virtual bool editstuInfos(studentInfo stuInfos)=0;
    virtual bool searchstuInfos(studentInfo stuInfos)=0;

};

#endif // OPTIONDATABASE_H
