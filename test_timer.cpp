// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    13.01.2015 11:12:47 CET
// File:    test_timer.cpp

#include <iostream>

#include "addon/all.hpp"

int main(int argc, char * argv[]) {
    addon::timer_class timer;
    
    // start timer
    timer.start();
    
    // brun some time
    addon::clock::sleep(1.2);
    
    // stop timer
    timer.stop();
    
    // timer can be printed
    std::cout << timer << std::endl;
    
    // available methods
    DEBUG_VAR(timer.cycles())
    DEBUG_VAR(timer.sec())
    DEBUG_VAR(timer.msec())
    DEBUG_VAR(timer.usec())
    
    // clear
    timer.clear();
    
    return 0;
}
