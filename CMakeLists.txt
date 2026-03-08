cmake_minimum_required(VERSION 4.1)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(Cpp_OOP_Demos/02_header_files_guards)

add_executable(cpp_projects
        Cpp_OOP_Demos/01_basics_stack_heap/main.cpp
        Cpp_OOP_Demos/02_header_files_guards/Dog.cpp
        Cpp_OOP_Demos/02_header_files_guards/Dog.h
        Cpp_OOP_Demos/02_header_files_guards/main2.cpp
        Cpp_OOP_Demos/00_pointers/1_pointers_basics.cpp
        Cpp_OOP_Demos/00_pointers/2_references.cpp)
