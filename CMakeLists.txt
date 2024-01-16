project(design-patterns)
cmake_minimum_required(VERSION 3.16.2)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(abstract-factory)
add_subdirectory(factory-method)
add_subdirectory(builder)
add_subdirectory(prototype)
