#include "HSCpch.h"
#include "FrontendProcess.h"

#include "Log/Log.h"

namespace HSC
{
    void FrontendProcess::Init()
    {
        if (!FrontendProcessInstance)
        {
            HSC_TRACE("Frontend starting up");

            FrontendProcessInstance = ShellExecute(NULL, NULL, exe, NULL, NULL, SW_SHOW);

            if ((INT_PTR)FrontendProcessInstance > 32)
                HSC_TRACE("Frontend started up successful");
            else
            {
                Error = GetLastError();
                HSC_ERROR("Frontend process creation failed! Error code: {0}", Error);
            }
        }
        else
            HSC_INFO("Frontend started up already but Init is called another time!");
    }
}
