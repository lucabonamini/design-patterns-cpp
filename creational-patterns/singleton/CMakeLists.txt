project(singleton)
cmake_minimum_required(VERSION 3.16.2)

set(SOURCE_FILES 
    src/pastry.cpp
    src/pastry_factory.cpp
)

add_executable(singleton src/main.cpp ${SOURCE_FILES})
target_include_directories(singleton PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_compile_options(singleton PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
