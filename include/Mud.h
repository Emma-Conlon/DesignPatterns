#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Brick.h"

//
class Mud: public Bricks{

void render()
{
    std::cout<<"MudBricks"<<std::endl;
}
};