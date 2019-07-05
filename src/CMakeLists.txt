cmake_minimum_required(VERSION 3.13)
project(simea)

set(CMAKE_CXX_STANDARD 17)

add_executable (
                simea
                simea.cpp
                model/materials.cpp
                model/materials.h
                modeler/modeler.cpp
                modeler/modeler.h
                modeler/readSTL.cpp
                solver/solver.cpp
                solver/solver.h
                mesher/mesher.cpp
                mesher/mesher.h
                model/model.cpp
                model/model.h
               )