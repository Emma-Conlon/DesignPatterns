#include <vector>
#include <iostream>
#include <string>
#include "BrickFactory.h"
#include "Mud.h"
//
class MudFactory: public BricksFactory{

public:
std::vector<Bricks*> getBricks(int numberOfBricks)
{
    std::vector<Bricks*> bricks;
    for(int i=0;i<numberOfBricks;i++)
    {
        bricks.push_back(new Mud());
    }
    return bricks;
}
};