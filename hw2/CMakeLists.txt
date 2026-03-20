cmake_minimum_required(VERSION 4.1)
project(hw2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(__MACOSX)

add_executable(hw2
        __MACOSX/._grade.cpp
        __MACOSX/._grade.h
        __MACOSX/._main.cpp
        __MACOSX/._median.cpp
        __MACOSX/._median.h
        __MACOSX/._Student_info.cpp
        __MACOSX/._Student_info.h
        grade.cpp
        grade.h
        main.cpp
        median.cpp
        median.h
        Student_info.cpp
        Student_info.h)
