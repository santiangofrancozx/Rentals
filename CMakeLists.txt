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
        Classes/Users_Classes/User.h
        Classes/Users_Classes/Subscribed.h
        Users/Subscribed.cpp
        Classes/Autos_Clasees/Comfort.h
        Autos/Comfort.cpp
        Classes/Autos_Clasees/Sport.h
        Autos/Sport.cpp
        Classes/Autos_Clasees/Work.h
        Autos/Work.cpp
        )

