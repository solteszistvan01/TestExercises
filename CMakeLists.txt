cmake_minimum_required(VERSION 3.23)
project(cppLanguage)

set(CMAKE_CXX_STANDARD 20)

add_executable(cppLanguage src/memoryAllocation.cpp src/basic_concepts.cpp main.cpp hdr/basic_concepts.h hdr/memoryAllocation.h hdr/def&odr.h hdr/bitFields.h src/bitFields.cpp hdr/expressions.h src/declarations.cpp src/def&odr.cpp src/Source_inclusion.cpp hdr/Source_inclusion.h)
