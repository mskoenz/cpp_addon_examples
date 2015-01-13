// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    13.01.2015 08:34:13 CET
// File:    test_timing.cpp

#include <iostream>

#include "addon/all.hpp"

int main(int argc, char * argv[]) {
    std::cout << addon::clock::sec() << std::endl;
    
    std::cout << addon::clock::date_time() << std::endl;
    
    addon::clock::sleep(5);
    
    std::cout << addon::clock::sec() << std::endl;
    
    addon::clock::print();
    
    return 0;
}
