#pragma once
#include "ParentA.h"

class ChildB : public ParentA
{
private:
    ElementC* elementD; // Composition: ChildB has an ElementC member
public:
    ChildB(int d);

    ~ChildB();
};
