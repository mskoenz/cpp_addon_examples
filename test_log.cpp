// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    12.01.2015 08:48:00 CET
// File:    test_log.cpp

#include <iostream>

#include "addon/all.hpp"

using namespace addon;

int main(int argc, char * argv[]) {
    log_class log("bla.txt");

    log["energy"] = 12;
    log["magn"] = 123.4;
    
    for(int i = 0; i < 10; ++i) {
        log["energy"] = i;
        log["magn"] = i * i;
        
        log.write();
    }
    
    return 0;
}
