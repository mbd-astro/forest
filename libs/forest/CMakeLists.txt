# ========================================================================================
# File  : forest/CMakeLists.txt
# Brief : Forest library CMake file
# ========================================================================================

# ----------------------------------------------------------------------------------------
# Forest Library Creation
# ----------------------------------------------------------------------------------------
# Basic library name and alias
add_library(forest-forest ./src/forest.cpp)
add_library(Forest::forest ALIAS forest-forest)
set_target_properties(forest-forest PROPERTIES OUTPUT_NAME forest)

# Clang Tidy
if (FOREST_ENABLE_CLANG_TIDY)
    set_target_properties(
        forest-forest 
        PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}"
    )
endif()

# Include directories
target_include_directories(
    forest-forest
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# ----------------------------------------------------------------------------------------
# Testing
# ----------------------------------------------------------------------------------------
if (FOREST_ENABLE_TESTS)
    add_subdirectory(test)
endif ()

# ----------------------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------------------
