project(abstract-factory)
cmake_minimum_required(VERSION 3.16.2)

add_executable(abstract-factory src/main.cpp)
target_include_directories(abstract-factory PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_compile_options(abstract-factory PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
