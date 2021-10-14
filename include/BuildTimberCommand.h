#pragma once
#include<list>
#include<vector>
#include"Command.h"


class BuildTimberCommand :public Command
{
public:
virtual void excute()
{
    BricksFactory* factory = new TimberFactory();
   m_timberBricks.push_back(factory->getBricks(7).at(0));
}

virtual void undo()
{
    m_timberBricks.pop_back();
}

virtual void redo()
{
    excute();
}

};