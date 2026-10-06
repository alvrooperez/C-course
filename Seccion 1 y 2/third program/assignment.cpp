#include <iostream>
#include "fun.h"

int main() {
    int a{10};
    int b{5};
    int result{};

    result = Add(&a, &b);
    std::cout << "Sum: " << result << std::endl;

    AddVal(&a, &b, &result);
    std::cout << "Sum using AddVal: " << result << std::endl;
    Swap(&a, &b);
    std::cout << "After Swap: a = " << a << ", b = " << b << std::endl;
    Factorial(&a, &result);
    std::cout << "Factorial of a: " << result << std::endl;


    
}