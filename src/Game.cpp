#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
    screen = SDL_CreateWindow("Patterns",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640, 480,
            0);
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_SOFTWARE);
    factories.push_back(new ClayFactory());
    factories.push_back(new LegoFactory());
    factories.push_back(new MudFactory());
    

    for(BricksFactory*factory:factories)
    {
        std::vector<Bricks*>newbricks=factory->getBricks(10);//makes that amount of bricks
        for (Bricks*bricks:newbricks)
        {
            m_bricks.push_back(bricks);
        }
    }
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
   

    m_gameIsRunning = true;
    SDL_Event event;
    while (m_gameIsRunning)
    {
        proccesevents(event);
        update();
        render();
    }
}

void Game::proccesevents(SDL_Event event)
{
    while (SDL_PollEvent(&event)!=0)
    {
        if(event.type==SDL_QUIT)
        {
            m_gameIsRunning = false;//CLOSES GAME LOOP :)
        }

        if(event.type==SDL_KEYDOWN)
        {
             m_gameIsRunning = false;//done
        }
    }
    
 
}

void Game::update()
{
    
}

void Game::render()
{
   
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);


//draws them all :) 
    for(Bricks*bricks:m_bricks)
    {
        bricks->render();
    }
}

void Game::cleanUp()
{
    SDL_DestroyWindow(screen);
    SDL_DestroyRenderer(renderer);
    std::cout << "Cleaning up" << std::endl;
}