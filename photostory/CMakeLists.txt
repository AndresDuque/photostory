cmake_minimum_required(VERSION 3.20)

project(model VERSION 1.0 LANGUAGES CXX)

add_library(model SHARED)
target_sources(model PRIVATE
        include/Image.h
        src/Image.cpp)
target_include_directories(model PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)