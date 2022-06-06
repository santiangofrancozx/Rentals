cmake_minimum_required(VERSION 3.22)
project(ProyectoX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoX
        Users/Admin.cpp
        Classes/Users_Classes/Admin.h
        Main/main.cpp
        Users/Provider.cpp
        Classes/Users_Classes/Provider.h
        Users/User.cpp
        Classes/Users_Classes/User.h)
