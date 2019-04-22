#pragma once

#ifdef PGE_PLATFORM_WINDOWS
    #ifdef PGE_BUILD_DLL
        #define PGE_API __declspec(dllexport)
    #else
        #define PGE_API __declspec(dllimport)
    #endif
#else
    #error PlayGameEngine only supports Windows!
#endif