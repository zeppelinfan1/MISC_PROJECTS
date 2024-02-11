#include <iostream>









int main() {

    int x = 10;

    int* ptr = &x;
    int* ptr2 = ptr;
    ptr2++;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;

    return 0;
}