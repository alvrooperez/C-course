#include <iostream>

void Print(const int &ref){
    std::cout << ref << std::endl;
    // ref = 700; // error, cannot modify a constant reference
}

int main(){
    
    int x{10};
    
    Print(x);
    Print(1); 
    std::cout <<"main: " << x << std::endl;
    
    return 0;

}