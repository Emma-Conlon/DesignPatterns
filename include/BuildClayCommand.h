#pragma once
#include<list>
#include<vector>
#include"Command.h"


class BuildClayCommand :public Command
{
public:
virtual void excute()
{
    BricksFactory* factory = new ClayFactory();
   m_clayBricks.push_back(factory->getBricks(5).at(0));
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