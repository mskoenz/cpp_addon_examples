// Author:  Mario S. Könz <mskoenz@gmx.net>
// Date:    07.01.2015 09:14:39 CET
// File:    test_color.cpp

#include <iostream>

//~ #define ADDON_NO_COLOR
//~ #define ADDON_NO_DEBUG
//~ #define NDEBUG

#include "addon/all.hpp"

int main(int argc, char * argv[]) {
    //============================= color ==========================================================
    GREENB("hello ", "");
    GREENBG("world");
    
    RED("how ", "");
    YELLOW("are ", "");
    
    std::cout << MAGENTA_ << "you " << CYAN_ << "doing" << std::endl;
    
    //============================= debug ==========================================================
    int i = 10;
    
    DEBUG_VAR(i)
    DEBUG_MSG("test debugging")
    
    ASSERT(i == 11, "i is not equal 11!");
    
    return 0;
}
