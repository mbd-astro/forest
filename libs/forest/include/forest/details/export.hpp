//! @file forest/details/export.hpp
//! @brief pre-processor macro definitions providing api definition for symbol export

#ifndef FOREST_DETAILS_EXPORT_HPP_
#define FOREST_DETAILS_EXPORT_HPP_

#include <forest/details/platform.hpp>

#if defined(FOREST_OS_WINDOWS) && defined(FOREST_BUILD_SHARED)
#    if defined(FOREST_EXPORT)
#        define FOREST_API __declspec(dllexport)
#    else
#        define FOREST_API __declspec(dllimport)
#    endif
#else
#    define FOREST_API
#endif

#endif // FOREST_DETAILS_EXPORT_HPP_
