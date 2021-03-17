cmake_minimum_required(VERSION 3.13)

add_executable(tests test.cpp)
find_package(Catch2 REQUIRED)
target_link_libraries(tests PRIVATE Catch2::Catch2)
