# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)

project (CMakeProject1)

set(CMAKE_CXX_STANDARD 14)

# Include sub-projects.
add_subdirectory ("CMakeProject1")

set(SOURCES ${CMAKE_SOURCE_DIR}/CMakeProject1/CMakeProject1.cpp
			${CMAKE_SOURCE_DIR}/CMakeProject1/test.cpp
			${CMAKE_SOURCE_DIR}/CMakeProject1/test.h)

add_executable(project ${SOURCES})