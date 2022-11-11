# ========================================================================================
# File  : forest/CMakeLists.txt
# Brief : Forest library CMake file
# ========================================================================================

# ----------------------------------------------------------------------------------------
# Forest Library Creation
# ----------------------------------------------------------------------------------------
# Basic library name and alias
add_library(forest-forest ./src/temp.cpp)
add_library(Forest::forest ALIAS forest-forest)
set_target_properties(forest-forest PROPERTIES OUTPUT_NAME forest)

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