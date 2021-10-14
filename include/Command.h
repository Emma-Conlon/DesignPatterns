#pragma once
#include<list>
#include<vector>
#include"ConcreteFactory.h"
#include"TimberFactory.h"
#include"LegoFactory.h"
#include"ClayFactory.h"
#include"Globals.h"


class Command
{
public:
    virtual ~Command(){};
    virtual void excute()=0;
    virtual void undo()=0;
    virtual void redo()=0;
protected:
    Command();
};
