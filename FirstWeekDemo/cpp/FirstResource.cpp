#include <iostream>
class FirstResource {
public:
    int value1;
    char value2;
    FirstResource() : value1(0), value2('a') {
        std::cout << "FirstResource constructor" << std::endl;
    }
    ~FirstResource() {
        std::cout << "FirstResource destructor" << std::endl;
    }

    // 拷贝赋值
    FirstResource& operator=(const FirstResource& other) {
        std::cout << "FirstResource copy assignment operator" << std::endl;
        if (this != &other)
        {
            value1 = other.value1;
            value2 = other.value2;
        }

        return *this;
    }

    // 拷贝构造
    FirstResource(const FirstResource& other) : value1(other.value1), value2(other.value2) {
        std::cout << "FirstResource copy constructor" << std::endl;
    }
    FirstResource(int value1, char value2) : value1(value1), value2(value2) {
        std::cout << "FirstResource constructor with value1 and value2" << std::endl;
    }
    
};

int main() {
    FirstResource res1(10, 'b');
    FirstResource res2 = res1; // 调用拷贝构造函数
    FirstResource res3; 
    res3 = res1; // 调用拷贝赋值运算符
    return 0;
}
