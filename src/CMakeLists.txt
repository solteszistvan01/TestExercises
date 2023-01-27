cmake_minimum_required(VERSION 3.4)
project(GoogleTestDemo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
set(SOURCE_FILES
        main.cpp
)
add_executable(GoogleTest ${SOURCE_FILES})
target_link_libraries(GoogleTestDemo gtest)
set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})