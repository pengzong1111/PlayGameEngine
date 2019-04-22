#include <PlayGameEngine.h>


class Game : public PlayGameEngine::Application
{
public:
    Game() {

    }

    ~Game()
    {

    }
};

PlayGameEngine::Application* PlayGameEngine::CreateApplication()
{
    return new Game();
}