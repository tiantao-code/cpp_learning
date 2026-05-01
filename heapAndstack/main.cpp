#include <iostream>
#include "ParentA.h"

int stackObjectLifetime();
int heapObjectLifetime(ParentA*& parent1, ParentA*& parent2);

int main()
{
    ParentA* heapObject1;
    ParentA* heapObject2;
    stackObjectLifetime();
    heapObjectLifetime(heapObject1, heapObject2);
    std::cout << "Heap objects data: " << heapObject1->getData() << ", " << heapObject2->getData() << std::endl;
    
    delete heapObject1;
    delete heapObject2;

    return 0;
}

int stackObjectLifetime()
{
    std::cout << "Creating stack object of parent1 with data 10" << std::endl;
    ParentA parent1(10);
    std::cout << "Creating stack object of Parent2 with data 20" << std::endl;
    ParentA parent2(20);
    return 0;
}

int heapObjectLifetime(ParentA*& parent1, ParentA*& parent2)
{
    std::cout << "Creating heap object of ParentA with data 10" << std::endl;
    parent1 = new ParentA(10);
    std::cout << "Creating heap object of Parent2 with data 20" << std::endl;
    parent2 = new ParentA(20);
    return 0;
}