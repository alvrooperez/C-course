#include <iostream>

union Test {
    int x;
    char ch;
    Test(): ch{'a'} {
        std::cout << "__FUNCSIG__" <<std::endl;
    }
    ~Test() {
        std::cout << "__FUNCSIG__" <<std::endl;
    }
};
struct A {};
struct B {};

union UDT {
    A a;
    B b;
    std::string s;
    UDT() {

    }
    ~UDT() {
        
    }
};


int main(){

    using namespace std::string_literals;
    UDT udt;
    //new(&udt.s) std::string{"Hello World"s};
    new(&udt.a) A{};
    udt.a.~A();
    /*
    Test t;
    std::cout << sizeof(Test)<<std::endl; //size of its largest variable
    std::cout << t.ch << std::endl;

    t.x=1000;
    */
    //std::cout << t.ch << std::endl; //not active not posible
}