# CMake version required
cmake_minimum_required(VERSION 3.16)

# Project name
project(StressTest)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories (where .hpp files are located)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Collect all .cpp files from the src directory
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create the executable from the source files
add_executable(StressTest ${SOURCES})

# Set the output directory for the executable to the 'build' folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
