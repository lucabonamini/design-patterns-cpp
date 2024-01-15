project(factory-method)
cmake_minimum_required(VERSION 3.16.2)

add_executable(factory-method src/main.cpp)
target_include_directories(factory-method PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_compile_options(factory-method PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
