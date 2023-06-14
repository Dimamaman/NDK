cmake_minimum_required(VERSION 3.22.1)
project("my_ndk")
add_library(util SHARED util-lib.cpp)
add_library(demo SHARED demo-lib.cpp)
