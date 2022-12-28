project(builder)
cmake_minimum_required(VERSION 3.16.2)

add_executable(builder main.cpp)
target_compile_options(builder PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
