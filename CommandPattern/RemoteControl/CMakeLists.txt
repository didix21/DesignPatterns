# CMakeList.txt : CMake project for TestingCmake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Include directories
include_directories (include)

# Add soource files
file (GLOB SOURCES "src/*.cpp")

# add the executable
add_executable (RemoteControl ${SOURCES})