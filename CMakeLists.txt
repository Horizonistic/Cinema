cmake_minimum_required(VERSION 3.3)
project(Cinema)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/utils/SuperOutput.h src/utils/SuperOutput.cpp src/Date.cpp src/Date.h)
add_executable(Cinema ${SOURCE_FILES})