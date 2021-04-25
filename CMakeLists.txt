# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project (CMakeProject1)

set(CMAKE_CXX_STANDARD 14)

# Include sub-projects.
add_subdirectory ("CMakeProject1")

add_executable(project CMakeProject1/CMakeProject1.cpp)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(project PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )