cmake_minimum_required(VERSION 3.16)
project(lab01-inheritance-Raque15)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_subdirectory(src)

add_executable(lab01-inheritance-Raquel15
        src/Lab01Inheritance.cpp src/Base.cpp src/Base.h src/Derived1.cpp src/Derived1.h src/Derived2.cpp src/Derived2.h)





