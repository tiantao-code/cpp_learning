#include <iostream>
#include "ParentA.h"
#include "ChildB.h"

int main() 
{
    std::cout << "Creating ParentA object with data 10" << std::endl;
    ParentA parent(10);
    
    std::cout << "\nCreating ChildB object with data 20" << std::endl;
    ChildB child(20);
    
    std::cout << "\nExiting main function, destructors will be called in reverse order of construction" << std::endl;
    return 0;
}