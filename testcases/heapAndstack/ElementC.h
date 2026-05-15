#pragma once
#include <iostream>

class ElementC
{
private:
    int data;
public:
    ElementC(int d);
    ~ElementC();
};

inline ElementC::ElementC(int d) : data(d)
{
    std::cout << "ElementC constructor called with data: " << data << std::endl;
}

inline ElementC::~ElementC()
{
    std::cout << "ElementC destructor called" << std::endl;
}
