#include <iostream>
#include "math.h" // Include the header file for the Add function
//usually is better not doing that way
void Print(char ch){
    for (int i=0; i<10; i++){
        std::cout << ch;
    }
    std::cout << std::endl;
}

int main() {
    int x,y;
    std::cin >> x >> y;
    int result = Add(x,y);
    std::cout << "The sum is: " << result << std::endl;

    Print('*'); // Call the Print function to print asterisks
    return 0;
}

//g++ -std=c++20 -Wall Source.cpp math.cpp -o  functions 
