// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    07.01.2015 10:26:38 CET
// File:    test_parameter.cpp

#include <iostream>

#include "addon/all.hpp"

int main(int argc, char * argv[]) {
    //=========================== parameter ========================================================
    auto & p = addon::parameter;
    
    //-------------------------- set defaults ------------------------------------------------------
    p["energy"] = 1.23;
    p["x"] = 1;
    p["p"] = "bla";
    
    //------------------ read argv and bash_in.txt if available ------------------------------------
    p.read(argc, argv);
    
    //-------------------- basic +/* (returns boost::any) ------------------------------------------
    p["img_dir"] = p["prog_dir"] + "/img";
    p["y"] = p["x"] * 10;
    p["magn"] = 13.45 + p["energy"];
    
    std::cout << p << std::endl;
    
    //---------------------------- assign ----------------------------------------------------------
    int i = p["y"];
    
    DEBUG_VAR(i)
    
    return 0;
}
