cmake_minimum_required(VERSION 3.17)
project(Verificador_de_parenteses C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Verificador_de_parenteses
        main.c
        pilha.h)
