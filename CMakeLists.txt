cmake_minimum_required (VERSION 3.15)
project(visual-tracker)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)
find_package(dlib REQUIRED)

# ------------------------------------------------------------------------------
# SECTION: Google Test (gtest) unit testing framework
# ------------------------------------------------------------------------------
add_subdirectory(third-party/googletest-release-1.10.0 EXCLUDE_FROM_ALL)

# Prevent overriding the parent project's compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

# ------------------------------------------------------------------------------
# SECTION: add unit tests
# ------------------------------------------------------------------------------
add_subdirectory(tests)
