//! @file forest/details/platform.hpp
//! @brief pre-processor macro definitions providing OS, architecture, and compiler info

#ifndef FOREST_DETAILS_PLATFORM_HPP_
#define FOREST_DETAILS_PLATFORM_HPP_

// ---------------------------------------------------------------------------------------
// Operating System
// ---------------------------------------------------------------------------------------
#if defined(__APPLE__) && defined(__MACH__) // OSX
#    define FOREST_OS_OSX
#elif defined(__CYGWIN__)
#    define FOREST_OS_CYGWIN
#elif defined(__linux__)
#    define FOREST_OS_LINUX
#elif defined(_WIN32) || defined(_WIN64)
#    define FOREST_OS_WINDOWS
#else
#    error Unknown operating system
#endif

// ---------------------------------------------------------------------------------------
// Architecture
// ---------------------------------------------------------------------------------------
#if defined(__x86_64__) || defined(_M_AMD64)
#    define FOREST_ARCH_X86_64
#elif defined(__arm__) || defined(_M_ARM)
#    define FOREST_ARCH_ARM
#elif defined(__aarch64__)
#    define FOREST_ARCH_ARM64
#elif defined(__i386__) || defined(_M_IX86) || defined(_X86_)
#    define FOREST_ARCH_X86
#elif defined(__powerpc__) || defined(_M_PPC)
#    define FOREST_ARCH_PPC
#else
#    error Unknown architecture
#endif

// ---------------------------------------------------------------------------------------
// Compiler
// ---------------------------------------------------------------------------------------
// NOTE (RJP): Clang also defines the GCC compiler macros, so check for clang first
#if defined(__clang__)
#    define FOREST_COMPILER_CLANG
#elif defined(__GNUC__)
#    define FOREST_COMPILER_GCC
#elif defined(__INTEL_COMPILER)
#    define FOREST_COMPILER_INTEL
#elif defined(_MSC_VER)
#    define FOREST_COMPILER_MSVC
#elif defined(__MINGW32__)
#    define FOREST_COMPILER_MINGW
#else
#    error Unkown compiler
#endif

#endif // FOREST_DETAILS_PLATFORM_HPP_
