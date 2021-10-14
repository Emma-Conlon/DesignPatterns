#pragma once
#include<list>
#include<vector>
#include"Command.h"



class marcoCommand:public Command
{
public:
    marcoCommand();
    virtual ~marcoCommand();
    virtual void add(Command*command)
    {
        commands->push_back(command);
    }
    virtual void remove(Command*command)
    {
        commands->remove(command);
    }
    virtual void excute()
    {
        for(Command *command:*commands)
        {
            command->excute();
        }
    }
private:
std::list<Command*>*commands;
};