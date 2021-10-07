#include <SDL2/SDL.h>
#include<SDL2/SDL_test_images.h>
#include <iostream>
#include <string>
#include<vector>
#include "ClayFactory.h"
#include "MudFactory.h"
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
    void cleanUp();

    bool m_gameIsRunning;

 std::vector<BricksFactory*>factories;
 std::vector<Bricks*> m_bricks;


};