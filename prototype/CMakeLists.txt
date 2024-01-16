project(prototype)
cmake_minimum_required(VERSION 3.16.2)

set(SOURCE_FILES 
    src/business_card.cpp
    src/business_card_prototype_factory.cpp
)

add_executable(prototype src/main.cpp ${SOURCE_FILES})
target_include_directories(prototype PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_compile_options(prototype PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)
