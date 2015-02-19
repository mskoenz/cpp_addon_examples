// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    12.01.2015 08:48:00 CET
// File:    test_log.cpp

#include <iostream>
#include <cmath>

#include "addon/all.hpp"

using namespace addon;

int main(int argc, char * argv[]) {
    
    parameter.read(argc, argv);
    
    log_class log(parameter["wd"] + "/cos.txt"); //default name prog_dir + "/log.txt"
    log_class log2("sin.txt");
    
    std::map<std::string, double> param;
    
    param["N"] = 1000;
    param["range"] = 3.14;
    
    log.set_param(param);
    log2.set_param(param);
    
    
    for(int i = 0; i < param["N"]; ++i) {
        log["idx"] = i;
        log["x"] = i/param["N"] * param["range"];
        log["cos"] = cos(log["x"]);
        
        log2["idx"] = log["idx"];
        log2["x"] = log["x"];
        log2["sin"] = sin(log2["x"]);
        
        log.write();
        log2.write();
    }
    
    return 0;
}
