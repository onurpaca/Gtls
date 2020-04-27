cmake_minimum_required(VERSION 3.1..3.17)

if(${CMAKE_VERSION} VERSION_LESS 3.16)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(
        gtls
        VERSION      0.1
        DESCRIPTION  "Utility library for Gmsh"
        LANGUAGES    CXX
       )

add_subdirectory(libs)