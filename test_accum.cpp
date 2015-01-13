// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    08.01.2015 10:23:01 CET
// File:    test_accum.cpp

#include <iostream>

#include "addon/all.hpp"

using namespace addon;

int main(int argc, char * argv[]) {
    accumulator<double> acc;
    
    acc << 1;
    acc << 5;
    acc << 10;
    
    std::cout << acc << std::endl;
    
    DEBUG_VAR(acc.mean())
    DEBUG_VAR(acc.dev())
    DEBUG_VAR(acc.std())
    DEBUG_VAR(acc.count())
    DEBUG_VAR(acc.sum())
    
    acc.clear();
    
    return 0;
}
