cmake_minimum_required(VERSION 3.23)
project(cppLanguage)

set(CMAKE_CXX_STANDARD 20)

add_executable(cppLanguage memoryAllocation.cpp basic_concepts.cpp main.cpp basic_concepts.h memoryAllocation.h def&odr.h bitFields.h bitFields.cpp expressions.h declarations.cpp def&odr.cpp Source_inclusion.cpp Source_inclusion.h)
