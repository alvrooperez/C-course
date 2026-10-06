#include <cstdlib>
#include <iostream>
#include <memory>


void DynArray (){}
class Point {
public:
    Point (int x, int y){

    }
};
int main(){
    {
    //std::unique_ptr<int[]> p {new int[5]{1,2,3,4,5}};
    auto p =std::make_unique <int> (5);
    auto pt =std::make_unique <Point> (3,5);
    auto pArr =std::make_unique <int[]>(5); // You can't initialized
    pArr[0]=0;
    }

    {
    //std::unique_ptr<int[]> p {new int[5]{1,2,3,4,5}};
    auto p =std::make_shared <int> (5);
    auto pt =std::make_shared <Point> (3,5);
    auto pArr =std::make_shared <int[]>(5); // You can't initialized
    pArr[0]=0;
    }

    // No custom deleter with make functions
}
