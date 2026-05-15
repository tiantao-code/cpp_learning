#pragma once
#include "ElementC.h"

class ParentA
{
private:
    int data;
    ElementC* elementC; // Composition: ParentA has an ElementC member
public:
    ParentA(int d);
    ~ParentA();
};

