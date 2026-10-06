#include "Integer.h"
#include <memory>
void Display(Integer *p){
    if (!p){
        return;
    }
    std::cout << p->GetValue()<< std::endl;
}

Integer * GetPointer (int value){
    Integer *p= new Integer{value};
    return p;
}
void Store(std::unique_ptr<Integer> &p){  //By reference changes the way you can use it
    std::cout << "Storing  data into a file : " << p->GetValue() << std::endl;
}
void Operate(int value){
    std::unique_ptr<Integer> p {GetPointer(value)};
    if (p== nullptr){
        p.reset(new Integer{value});
    }
    p->SetValue(100);
    Display(p.get());
    //delete p;
    p=nullptr;  // for a unique_ptr si same as deleting and then assigning nullptr
    //p=new Integer{};
    p.reset(new Integer{});
    *p = __LINE__;
    Display(p.get());
    //Store(p); // not posible because it is delete last time it is used
    //Store(std::move(p)); // You can't create a copy but we can move it
    Store (p); //if it possible if you passed it by reference
    *p=200; //now it works because we don't have move it
    //delete p;
}

int main () {
    Operate(5);
}