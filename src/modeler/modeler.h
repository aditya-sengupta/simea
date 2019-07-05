#ifndef SIMEA_MODELER_H
#define SIMEA_MODELER_H

#include <iostream>
#include <string>

#include "../model/model.h"

class Modeler {

private:

    // stores the absolute path to the .stl import file
    std::string _filepath;

    // total number of triangles in the imported geometry
    int _num_triangles;

public:

    /**
     * Constructor for Modeler objects
     */
    Modeler() {
        this->_filepath = "";
        this->_num_triangles = 0;
    }

    /**
     * Constructor for Modeler objects
     * @param path sets the filepath of the .stl import file
     */
    Modeler(std::string path) {
        this->_filepath = path;
        this->_num_triangles = 0;
    }

    /**
     * resets the filepath to the .stl import file
     * @param path specifies the
     */
    void resset_filepath(std::string path) { this->_filepath = path; }

    /**
     * @return stored filepath in modeler object
     */
    std::string filepath() { return this->_filepath; }

    /**
     * @return total parsed triangles in imported geometry
     */
    int num_triangles() { return this->_num_triangles; }

    /**
     * reads .stl geometry file
     * @param filepath sets filepath for the .stl import file and reads from it
     */
    void readSTL(std::string filepath);

    /**
     * reads .stl geometry file
     */
    void readSTL();
    // initialize and store imported geometry in model object
    // parse JSON properties for model properties/materials
};

extern Modeler modeler;

#endif //SIMEA_MODELER_H
