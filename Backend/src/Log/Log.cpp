#include "HSCpch.h"
#include "Log.h"

#include <spdlog/sinks/basic_file_sink.h>

namespace HSC
{
    Ref<spdlog::logger> Log::Logger;

    void Log::Init()
    {
        Ref<spdlog::sinks::basic_file_sink_mt> FileSink = CreateRef<spdlog::sinks::basic_file_sink_mt>("..\\HSC.log", true);
        FileSink->set_pattern("[%l] %n: %v");

        Logger = CreateRef<spdlog::logger>("Backend", FileSink);
        spdlog::register_logger(Logger);
        Logger->set_level(spdlog::level::trace);
        Logger->flush_on(spdlog::level::trace);

        HSC_INFO("Logger initialized!");
    }
}