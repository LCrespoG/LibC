cmake_minimum_required(VERSION 3.29)
project(LibC)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibC main.c
        "EJ 1/FunccomC.c"
        "EJ 1/FunccomC.h"
        "EJ 2/cadenas.c"
        "EJ 3/archivos.c")