cmake_minimum_required(VERSION 4.1)
project(hw3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw3
        algorithm.h
        analysis.cpp
        analysis.h
        grade.cpp
        grade.h
        main.cpp
        Student_info.cpp
        Student_info.h)
