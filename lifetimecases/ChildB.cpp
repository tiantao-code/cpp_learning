#include <iostream>
#include "ChildB.h"

ChildB::ChildB(int d) : ParentA(d)
{
    std::cout << "ChildB constructor called with data: " << d << std::endl;
    elementD = new ElementC(d); // Initialize the ElementC member
    std::cout << "ElementC member constructed in ChildB" << std::endl;
}

ChildB::~ChildB()
{
    std::cout << "ChildB destructor called" << std::endl;
    delete elementD;
}
