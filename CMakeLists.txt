cmake_minimum_required(VERSION 3.20)
project(untitled64)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-main)

include_directories(lib/googletest-main/googletest/include)
add_executable(untitled64 main.cpp)
target_link_libraries(untitled64 gtest gtest_main)
