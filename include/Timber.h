#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Brick.h"

//
class Timber: public Bricks{

void render()
{
    std::cout<<"TimberBricks"<<std::endl;
}
};