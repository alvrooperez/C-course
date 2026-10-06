
#include <iostream>
//returns r-value
int Add(int x,int y){
    return x + y;
}
//returns l-value
int & Transform(int &x){
    x *=x;
    return x;
}

void Print(int &x){
    std::cout<< "Print(int &x)" << std::endl;
}

void Print(const int &x){
    std::cout<< "Print(conts int &x)" << std::endl;
}


void Print(int &&x){
    std::cout<< "Print(int &&x)" << std::endl;
}



int main(){
    // x,y are l-value 5,10 are r-value
    int x=5;
    int y=10;
    //Expression returns r-value
    int result =x+y;
    // Expression return l-value
    ++x=6;

    int && r1= 10;
    int &&r2 = Add(3,2);

    x=0;
    //int &&r3=x;

    int &ref=Transform(x);
    const int &ref2 =3;

    Print(x);

    Print(3); //if r-value no activated it used the const
    return 0;
}