#basic structure

cmake_minimum_required(VERSION 3.23)

set(This Example)

project(FSA)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#building code

set(Sources
        test1.cpp
        )

#Including google-test directories
add_subdirectory("/home/solteszistvan/CLionProjects/FSA/Google_tests/lib")
include_directories("/home/solteszistvan/CLionProjects/FSA/Google_tests/lib/googletest-main/googletest/include")
include_directories("/home/solteszistvan/CLionProjects/FSA/Google_tests/lib/googletest-main/googlemock/include")

#Link executable with google-test

add_executable(test1.cpp)

target_link_libraries(EXECUTABLE_NAME gtest gtest_main)
target_link_libraries(EXECUTABLE_NAME gmock gmock_main)