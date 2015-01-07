// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    07.01.2015 09:11:57 CET
// File:    test_random.cpp

#include <iostream>

#include "addon/all.hpp"

using namespace addon;

int main(int argc, char * argv[]) {
    //============================ random ==========================================================
    global_seed.seed(1);
    
    random_class < double, mersenne > rng1;
    random_class < int, linear_congruential > rng2(1, 6);
    random_class < int, linear_congruential > rng3(1, 6);
    
    for(uint i = 0; i < 5; ++i) {
        std::cout << rng1() << "  " << rng2() << "  " << rng3() << std::endl;
    }
    
    return 0;
}
