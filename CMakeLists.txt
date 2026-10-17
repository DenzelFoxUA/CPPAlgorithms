cmake_minimum_required(VERSION 4.3)
project(CppAlgorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppAlgorithms main.cpp
        MyAlgorithmsSrc/AlgorithmsLab.cpp
        MyAlgorithms/AlgorithmsLab.h)

target_include_directories(CppAlgorithms PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/MyAlgorithms
)

target_sources(CppAlgorithms PRIVATE
        main.cpp
        MyAlgorithmsSrc/AlgorithmsLab.cpp
)


