#include <vector>
#include <iostream>
#include <string>
#include "BrickFactory.h"
#include "Concrete.h"
//
class ConcreteFactory: public BricksFactory{

public:
std::vector<Bricks*> getBricks(int numberOfBricks)
{
    std::vector<Bricks*> bricks;
    for(int i=0;i<numberOfBricks;i++)
    {
        bricks.push_back(new Concrete());
    }
    return bricks;
}
};