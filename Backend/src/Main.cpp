#include "HSCpch.h"

#include "FrontendProcess/FrontendProcess.h"
#include "Log/Log.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int cmdShow)
{
    HSC::Log::Init();
    HSC::FrontendProcess::Init();
    DWORD FrontendProcessStatus = HSC::FrontendProcess::GetStatus();
    
    if (!FrontendProcessStatus) return FrontendProcessStatus;



    return 0;
}
