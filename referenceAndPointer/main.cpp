#include <iostream>

void test()
{
    int a = 10;
    int* p = &a; // p is a pointer to an integer, storing the address of a
    int& r = a;  // r is a reference to an integer, referring to a

    std::cout << "Value of a: " << a << std::endl; // Output: 10
    std::cout << "Value through pointer p: " << *p << std::endl; // Output: 10
    std::cout << "value of pointer p: " << p << std::endl; // Output: Address of a
    std::cout << "Value through reference r: " << r << std::endl; // Output: 10

    *p = 20; // Modifying value through pointer
    std::cout << "value of pointer p: " << p << std::endl; //
    std::cout << "Value of a after modifying through pointer: " << a << std::endl; // Output: 20

    r = 30; // Modifying value through reference
    std::cout << "Value of a after modifying through reference: " << a << std::endl; // Output: 30
}

int main() 
{
    test();
    return 0;
}