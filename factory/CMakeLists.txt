project(factory)
cmake_minimum_required(VERSION 3.16.2)

add_executable(factory main.cpp)
target_compile_options(factory PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
