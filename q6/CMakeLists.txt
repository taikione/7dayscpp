cmake_minimum_required(VERSION 3.7)
project(q6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp airplane.cpp fighter.cpp)
add_executable(q6 ${SOURCE_FILES})

