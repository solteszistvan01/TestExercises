cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 17)

set(PROJECT_HEADERS
        feladat1/gauss_eliminacio.h
        math.h)

set(SOURCE_FILES
        feladat1/gauss_eliminacio.c
        feladat1/program1.c)


include_directories(include)
link_directories(./ThirdParty/LibraryExample/)
include_directories(ThirdParty/LibraryExample/include)

add_executable(untitled main.c)

add_subdirectory(feladat1)
target_link_libraries(untitled m) #solved the problem for unresolved reference to sqrt