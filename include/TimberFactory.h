#include <vector>
#include <iostream>
#include <string>
#include "BrickFactory.h"
#include "Timber.h"
//
class TimberFactory: public BricksFactory{

public:
std::vector<Bricks*> getBricks(int numberOfBricks)
{
    std::vector<Bricks*> bricks;
    for(int i=0;i<numberOfBricks;i++)
    {
        bricks.push_back(new Timber());
    }
    return bricks;
}
};