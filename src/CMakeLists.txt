cmake_minimum_required(VERSION 3.23)
project(cppLanguage)

set(CMAKE_CXX_STANDARD 20)

include_directories(hdr)

set(HEADER_FILES
    basic_concepts.cpp
    bitFields.cpp
    declarations.cpp
    def&odr.cpp
    memoryAllocation.cpp
    Source_inclusion.cpp
)
