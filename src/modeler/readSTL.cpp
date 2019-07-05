#include "../../lib/eigen-3.3.7/Eigen/Eigen"
#include "modeler.h"

void Modeler::readSTL(std::string path)
{
    this->_filepath = path;
    readSTL();
}

void Modeler::readSTL()
{
    // check if filepath is not set
    try
    {
        if (this->_filepath.empty())
            throw std::runtime_error("(string) _filepath in (Modeler) modeler not set!");
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // parse STL into an intermediate object. Then convert intermediate object into custom datastructure, so that in the
    // future we can support more file types.
}