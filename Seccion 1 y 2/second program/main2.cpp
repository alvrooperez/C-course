#include <iostream>

int main() {
    

    std::cout << "Hello \n" << 45 << " " << 3.141f << std::endl;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age is:" << age << std::endl;

    char buff[512];
    std::cout<< "Enter your name :" ;
    std::cin >> buff;
    std::cout << "Your name is : " << buff << std::endl;
    
    char buff2[64];
    std::cin.getline( buff2, 64, '\n' );  //for reading a line of text with spaces
    std::cout << "Your name is : " << buff2 << std::endl;

    return 0;

}