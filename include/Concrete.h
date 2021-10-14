#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Brick.h"

//
class Concrete: public Bricks{

void render()
{
    std::cout<<"ConcreteBricks"<<std::endl;
}
};