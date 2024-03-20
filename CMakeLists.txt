cmake_minimum_required(VERSION 3.26)
project(TP2_POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(TP2_POO main.cpp
        Form.cpp
        Form.h
        cmake-build-debug/SecDuration.cpp
        cmake-build-debug/SecDuration.h
        cmake-build-debug/FullDuration.cpp
        cmake-build-debug/FullDuration.h
)
