#pragma once
#include "Core.h"

namespace PlayGameEngine {
    class PGE_API Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    // to be defined in client
    Application* CreateApplication();
}

