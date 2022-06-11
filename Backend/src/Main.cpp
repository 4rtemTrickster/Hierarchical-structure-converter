#include "HSCpch.h"

#include "Log/Log.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int cmdShow)
{
    HSC::Log::Init();

    return 0;
}
