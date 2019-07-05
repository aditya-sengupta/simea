#include "modeler/modeler.h"
#include "solver/solver.h"
#include "mesher/mesher.h"
#include <iostream>

Modeler modeler;
Solver solver;
Mesher mesher;

int main() {
    std::cout << "SIMEA: Simple Meshing and Engineering Analysis" << std::endl;
    modeler.readSTL();
    return 0;
}