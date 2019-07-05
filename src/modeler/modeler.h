#ifndef SIMEA_MODELER_H
#define SIMEA_MODELER_H

#include <iostream>
#include <string>

#include "materials.h"

class Modeler {
private:
    std::string _filepath;
    int _num_triangles;
    // data-structure or object for imported geometry. Try linking object sub-geometries with the JSON properties.

public:
    Modeler() {
        this->_filepath = "";
        this->_num_triangles = 0;
    }
    Modeler(std::string path) {
        this->_filepath = path;
        this->_num_triangles = 0;
    }

    void set_filepath(std::string path) { this->_filepath = path; }
    std::string filepath() { return this->_filepath; }
    int num_triangles() { return this->_num_triangles; }

    void readSTL(std::string filepath);
    void readSTL();
    // create geometry object
    // getter and setter for geometry object
    // parse JSON properties
};

extern Modeler modeler;

#endif //SIMEA_MODELER_H
