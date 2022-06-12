#include "HSCpch.h"

#include "Log/Log.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int cmdShow)
{
    HSC::Log::Init();
    HINSTANCE FrontendProcess = ShellExecute(NULL, NULL, L"..\\Frontend\\Frontend.exe", NULL, NULL, SW_SHOW);

    if ((INT_PTR)FrontendProcess < 32)
    {
        DWORD Error = GetLastError();
        HSC_ERROR("Frontend process creation failed! Error code: {0}", Error);
        return Error;
    }
    else
        HSC_TRACE("Frontend startup successful");

    return 0;
}
