#include <iostream>
#include "ParentA.h"
#include "ElementC.h"

ParentA::ParentA(int d) : data(d)
{
    std::cout << "ParentA constructor called with data: " << data << std::endl;
    elementC = new ElementC(d); // Initialize the ElementC member
    std::cout << "ElementC member constructed in ParentA" << std::endl;
}

ParentA::~ParentA()
{
    std::cout << "ParentA destructor called" << std::endl;
    delete elementC;
}
