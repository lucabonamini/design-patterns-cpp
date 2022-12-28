project(abstract-factory)
cmake_minimum_required(VERSION 3.16.2)

add_executable(abstract-factory main.cpp)
target_compile_options(abstract-factory PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
