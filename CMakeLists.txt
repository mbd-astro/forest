# ========================================================================================
# File  : CMakeLists.txt
# Brief : Top-Level CMake file for Forest
# ========================================================================================
cmake_minimum_required(VERSION 3.22.1)

# ----------------------------------------------------------------------------------------
# Module Path Modification
# ----------------------------------------------------------------------------------------
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# ----------------------------------------------------------------------------------------
# Project Creation
# ----------------------------------------------------------------------------------------
project(
    Forest
    VERSION 0.0.1
    DESCRIPTION "Fast multi-body orbit propagation"
    HOMEPAGE_URL "https://github.com/mbd-astro/forest"
    LANGUAGES CXX
)

# ----------------------------------------------------------------------------------------
# General Options
# ----------------------------------------------------------------------------------------
option(FOREST_ENABLE_TESTS "Build the unit tests for Forest" ON)
option(FOREST_ENABLE_DOCS "Build the forest documentation" ON)
option(FOREST_ENABLE_WERROR "Treat warnings as errors" ON)

mark_as_advanced(FOREST_WERROR)

# ----------------------------------------------------------------------------------------
# Testing Setup
# ----------------------------------------------------------------------------------------
if (FOREST_ENABLE_TESTS)
    enable_testing()
endif()

# ----------------------------------------------------------------------------------------
# Sub-directories
# ----------------------------------------------------------------------------------------
add_subdirectory(extern)
add_subdirectory(libs)
add_subdirectory(examples)