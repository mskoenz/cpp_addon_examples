// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    26.03.2014 15:45:36 CET
// File:    performance_example.cpp

#include <iostream>

#include "addon/all.hpp"

int main(int argc, char * argv[]) {
    addon::random_class<int, addon::mersenne> rng1(0, 10);
    addon::random_class<int, addon::linear_congruential> rng2(0, 10);
    addon::random_class<int, addon::default_rng> rng3(0, 10);
    
    MEASURE(rng1(), "mersenne")
    MEASURE(rng2(), "lin_congr")
    MEASURE(rng3(), "default")
    
    addon::perf::results();
    addon::perf::speedup();
    addon::perf::clear();
    
    std::map<std::string, double> data = addon::perf::data();
    
    return 0;
}
