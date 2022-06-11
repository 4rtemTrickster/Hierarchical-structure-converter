#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace HSC
{
    class Log
    {
    public:
        static void Init();

        static Ref<spdlog::logger>& GetLogger() { return Logger; }

    private:

        static Ref<spdlog::logger> Logger;
    };
}

#define HSC_TRACE(...)      ::HSC::Log::GetLogger()->trace(__VA_ARGS__)
#define HSC_INFO(...)       ::HSC::Log::GetLogger()->info(__VA_ARGS__)
#define HSC_WARN(...)       ::HSC::Log::GetLogger()->warn(__VA_ARGS__)
#define HSC_ERROR(...)      ::HSC::Log::GetLogger()->error(__VA_ARGS__)
#define HSC_CRITICAL(...)   ::HSC::Log::GetLogger()->critical(__VA_ARGS__)