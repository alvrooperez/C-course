#include <iostream>
//Prototype or declaration of the function Add
int Add(int x, int y);

int main() {
    int x,y;
    std::cin >> x >> y;
    int result = Add(x,y);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
//Definition of the function Add
int Add(int x, int y){
    int sum= x + y;
    return sum;
}