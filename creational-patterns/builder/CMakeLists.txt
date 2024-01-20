project(builder)
cmake_minimum_required(VERSION 3.16.2)

set(SOURCE_FILES 
    src/computer.cpp
    src/computer_assembler.cpp
    src/gaming_computer_builder.cpp
    src/office_computer_builder.cpp
)

add_executable(builder src/main.cpp ${SOURCE_FILES})
target_include_directories(builder PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_compile_options(builder PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
