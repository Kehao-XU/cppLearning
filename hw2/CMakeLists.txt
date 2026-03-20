cmake_minimum_required(VERSION 4.1)
project(hw2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(__MACOSX)

add_executable(hw2
        grade.cpp
        grade.h
        main.cpp
        median.cpp
        median.h
        Student_info.cpp
        Student_info.h)
