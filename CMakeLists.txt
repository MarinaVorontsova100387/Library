cmake_minimum_required(VERSION 3.25)
project(Library)

set(CMAKE_CXX_STANDARD 17)

add_executable(Library main.cpp Author.h Date.h Book.h)
