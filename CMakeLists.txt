cmake_minimum_required(VERSION 3.3)
project(Cinema)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Date.cpp src/Date.h src/utils/SuperOutput.h src/utils/SuperOutput.cpp src/Movie.cpp src/Movie.h)
add_executable(Cinema ${SOURCE_FILES})