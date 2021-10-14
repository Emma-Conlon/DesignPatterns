#pragma once
#include<list>
#include<vector>
#include"Command.h"


class BuildLegoCommand :public Command
{
public:
virtual void excute()
{
    BricksFactory* factory = new LegoFactory();
   m_legoBricks.push_back(factory->getBricks(2).at(0));
}

virtual void undo()
{
    m_legoBricks.pop_back();
}

virtual void redo()
{
    excute();
}

};