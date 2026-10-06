#include <iostream>

int main(){
    int x{10};
    std::cout << &x << std::endl;
    int *ptr{&x};  // pointer same type as the variable it points to
    void *ptr2{&x}; // pointer of type void, can point to any type, always initialized pointer
    std::cout << ptr << std::endl;
    *ptr = 20; 
    std::cout << x << std::endl;
    int y = *ptr; 
    std::cout << y << std::endl;
    void *ptr3 =nullptr; 
    //*ptr3 = 30; // error, cannot dereference a void pointer

    
    
    return 0;

}

