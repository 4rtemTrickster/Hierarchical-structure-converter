workspace "Hierarchical-structure-converter"
    architecture "x86_64"
    startproject "Backend"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Backend"
    location "Backend"
    kind "WindowedApp"
    language "C++"
    cppdialect "C++17"
    staticruntime "on"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "HSCpch.h"
    pchsource "%{prj.name}/src/HSCpch.cpp"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
    }

    defines
    {
        "_CRT_SECURE_NO_WARNINGS"
    }

    includedirs
    {
        "%{prj.name}/src",
        "%{prj.name}/vendor/spdlog/include",
    }

    filter "configurations:Debug"
    defines "HSC_DEBUG"
    runtime "Debug"
    symbols "on"

filter "configurations:Release"
    defines "HSC_RELEASE"
    runtime "Release"
    optimize "on"

filter "configurations:Dist"
    defines "HSC_DIST"
    runtime "Release"
    optimize "on"