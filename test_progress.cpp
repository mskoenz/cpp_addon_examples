// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    13.01.2015 12:10:54 CET
// File:    test_progress.cpp

#include <iostream>
#include <typeinfo>

#include "addon/all.hpp"

int main(int argc, char* argv[]) {
    addon::parameter.read(argc, argv);
    
    using pgr = addon::progress;
    
    int n = 1000;
    double time = 10;
    
    //------------------- parameter read has to happen before pgr.set_load -------------------
    pgr::set_load(n);
    pgr::to_file = true;
    pgr::to_term = true;
    
    for(uint i = 0; i < n; ++i) {
        pgr::trigger([](){GREEN("hi", "");});
        pgr::update(i);
        addon::clock::sleep(time/n);
    }
    pgr::done();
    
    std::string fname_ = "bla.txt";
    std::ofstream ofs, ofs2;
    ofs.open(fname_, std::ios_base::out);
    DEBUG_VAR(ofs.is_open())
    DEBUG_VAR(ofs2.is_open())
    ofs2.open(fname_, std::ios_base::out);
    ofs.close();
    DEBUG_VAR(ofs.is_open())
    DEBUG_VAR(ofs2.is_open())
    
    ofs.close();
    ofs2.close();
    
    
    return 0;
}
