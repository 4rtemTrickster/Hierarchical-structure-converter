#include "HSCpch.h"

#include <future>

#include "Log/Log.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int cmdShow)
{
    HSC::Log::Init();

    //std::async(std::launch::async, [](){);});

    system("..\\Frontend\\Frontend.exe");
        
    return 0;
}
