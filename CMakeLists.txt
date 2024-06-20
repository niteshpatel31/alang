cmake_minimum_required(VERSION 3.29)
project(alang)

set(CMAKE_CXX_STANDARD 23)

add_executable(alang main.cpp
        lexer.h)
