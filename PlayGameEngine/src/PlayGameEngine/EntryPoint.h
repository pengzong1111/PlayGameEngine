#pragma once

#ifdef PGE_PLATFORM_WINDOWS

extern PlayGameEngine::Application* PlayGameEngine::CreateApplication();

int main(int argc, char** argv)
{
    std::cout << "Happy Using this PGE!";
    PlayGameEngine::Application* app = PlayGameEngine::CreateApplication();

    app->Run();

    delete app;

    return 0;
}

#endif