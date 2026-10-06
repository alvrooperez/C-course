#include <iostream>

namespace Avg {
float Calculate(float x, float y){
    return (x+y)/2;
}
}
namespace Basic {
float Calculate(float x, float y){
    return (x+y);
}
}

namespace Sort {
void Quicksort(){}

void mergesort(){}
}

namespace {
    void InternalFunction(){}
}

int main(){
    //using namespace Avg;
    InternalFunction();
    using Avg::Calculate;
    float result = Basic::Calculate(3.9f,8.2f);

    std::cout << "El resultado es: "<< result << std::endl;

    float result2 = Calculate(3.9f,8.2f);
    
    std::cout << "El resultado es: "<< result2 << std::endl;

    return 0;
}
