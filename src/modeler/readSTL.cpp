#include "modeler.h"

void Modeler::readSTL(std::string filepath) {
    // set filepath
    this->_filepath = filepath;

    readSTL();
}

void Modeler::readSTL() {
    // check if filepath is not set
    try {
        if (this->_filepath.empty())
            throw("(Modeler) modeler (string) _filepath not set!");
    }
    catch (const char*& msg) {
        std::cerr << msg << std::endl;
    }

    // parse STL into an intermediate object. Then convert intermediate object into custom datastructure, so that in the
    // future we can support more file types.
}