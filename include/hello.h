#include <iostream>

class Test {
public:
    Test() {
        std::cout << "Test()" << std::endl;
    }
    ~Test() {
        std::cout << "~Test()" << std::endl;
    }

    void output() ;
};