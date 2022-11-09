# ========================================================================================
# File  : extern/CMakeLists.txt
# Brief : CMake file controlling retrieval and compilation of external dependencies
# ========================================================================================
include(FetchContent)

# ----------------------------------------------------------------------------------------
# Abseil
# ----------------------------------------------------------------------------------------
FetchContent_Declare(
    abseil
    GIT_REPOSITORY https://github.com/abseil/abseil-cpp.git
    GIT_TAG 8c0b94e793a66495e0b1f34a5eb26bd7dc672db0 # 20220623.1
)
set(ABSL_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)
set(ABSL_BUILD_TESTING OFF CACHE BOOL "" FORCE)
set(ABSL_PROPAGATE_CXX_STD ON CACHE BOOL "" FORCE)

# ----------------------------------------------------------------------------------------
# Fmt
# ----------------------------------------------------------------------------------------
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG a33701196adfad74917046096bf5a2aa0ab0bb50 # 9.1.0
)
set(FMT_TEST OFF CACHE BOOL "" FORCE)

# ----------------------------------------------------------------------------------------
# GoogleTest
# ----------------------------------------------------------------------------------------
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG 58d77fa8070e8cec2dc1ed015d66b454c8d78850 # v1.12.1
)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set(gtest_build_tests OFF CACHE BOOL "" FORCE)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# ----------------------------------------------------------------------------------------
# PyBind11
# ----------------------------------------------------------------------------------------
FetchContent_Declare(
    pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG 80dc998efced8ceb2be59756668a7e90e8bef917 # v2.10.1
)
set(PYBIND11_TEST OFF CACHE BOOL "" FORCE)

# ----------------------------------------------------------------------------------------
# Make Available
# ----------------------------------------------------------------------------------------
FetchContent_MakeAvailable(
    abseil
    fmt
    googletest
    pybind11
)