//-----------------------------------------------------------------------------------------
//
// This is a placement file to prevent compile errors, give your own config options
// (i.e. I dont want to lean enough lua to generate this file through premake)
//-----------------------------------------------------------------------------------------

#include <version>

#if !defined(__cpp_lib_format)
    #define SPDLOG_FMT_EXTERNAL
    #define SPDLOG_WCHAR_TO_UTF8_SUPPORT
#else
    #include <format>
    #define SPDLOG_USE_STD_FORMAT
    #define SPDLOG_WCHAR_TO_UTF8_SUPPORT
#endif
