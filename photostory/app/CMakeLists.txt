cmake_minimum_required(VERSION 3.20)

add_executable(photostory)
target_sources(photostory PRIVATE
        photostory.cpp)
target_link_libraries(photostory PRIVATE
        model)