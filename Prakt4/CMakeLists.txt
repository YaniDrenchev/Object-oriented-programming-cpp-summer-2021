cmake_minimum_required(VERSION 3.13)
project(Prakt4)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(tests)
add_executable(Prakt4 main.cpp Employee.h Company.h Company.cpp Employee.cpp)
