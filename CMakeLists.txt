cmake_minimum_required(VERSION 3.23)
project(GoogleTest)
set(CMAKE_CXX_STANDARD 17)
add_executable(GoogleTest src/main.cpp)

add_subdirectory(/home/solteszistvan/CLionProjects/GoogleTest/lib/googletest-main)
include_directories(/home/solteszistvan/CLionProjects/GoogleTest/lib/googletest-main/googletest/include)
include_directories(/home/solteszistvan/CLionProjects/GoogleTest/lib/googletest-main/googlemock/include)

#Define executable

#Link with GoogleTest
target_link_libraries(GoogleTest gtest gtest_main)

#Link with GoogleMock
target_link_libraries(GoogleTest gmock gmock_main)
