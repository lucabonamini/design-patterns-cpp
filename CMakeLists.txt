project(design-patterns)
cmake_minimum_required(VERSION 3.16.2)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(creational-patterns/abstract-factory)
add_subdirectory(creational-patterns/factory-method)
add_subdirectory(creational-patterns/builder)
add_subdirectory(creational-patterns/prototype)
add_subdirectory(creational-patterns/singleton)
