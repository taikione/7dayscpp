cmake_minimum_required(VERSION 3.7)
project(m_perceptron)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

include_directories(Eigen)
link_directories(Eigen)

add_executable(m_perceptron ${SOURCE_FILES})