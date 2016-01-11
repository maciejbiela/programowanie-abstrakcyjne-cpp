cmake_minimum_required(VERSION 3.3)
project(programowanie_abstrakcyjne)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(programowanie_abstrakcyjne ${SOURCE_FILES})

include_directories(homework8)

add_subdirectory(homework8)
add_subdirectory(homework8_tests)