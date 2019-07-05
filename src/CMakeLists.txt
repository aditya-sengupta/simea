cmake_minimum_required(VERSION 3.13)
project(simea C)

set(CMAKE_C_STANDARD 11)

add_executable (
                simea
                main.c
                modeler/materials.c
                modeler/materials.h
                modeler/modeler.c
                modeler/modeler.h
               )