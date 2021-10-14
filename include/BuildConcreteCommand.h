#pragma once
#include<list>
#include<vector>
#include"Command.h"


class BuildConcreteCommand :public Command
{
public:
virtual void excute()
{
    BricksFactory* factory = new ConcreteFactory();
   m_concreteBricks.push_back(factory->getBricks(4).at(0));
}

virtual void undo()
{
    m_concreteBricks.pop_back();
}

virtual void redo()
{
    excute();
}

};