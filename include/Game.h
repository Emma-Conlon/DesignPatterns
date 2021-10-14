#pragma once
#include <SDL2/SDL.h>
#include<SDL2/SDL_test_images.h>
#include <iostream>
#include <string>
#include<vector>
#include "ClayFactory.h"
#include "TimberFactory.h"
#include"ConcreteFactory.h"
#include "LegoFactory.h"
class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void proccesevents(SDL_Event e);
    void update();
    void render();
    SDL_Window *screen;
    SDL_Renderer *renderer;
    SDL_Surface *screenSurface = SDL_GetWindowSurface(screen);
    SDL_Surface* screentext;
    SDL_Rect r[4];
    int check_click_in_rect(int x, int y,SDL_Rect rect[]);
    int x;
    int y;
    void cleanUp();

    bool m_gameIsRunning;

 std::vector<BricksFactory*>factories;
 std::vector<Bricks*> m_bricks;


};