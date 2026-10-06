#include "Integer.h"
#include <iostream>
#include <memory>
class IntPtr {
    Integer *m_p;
public:
    IntPtr(Integer *p) :m_p(p){

    }
    ~IntPtr(){
        delete m_p;
    }
    Integer *operator ->(){
        return m_p;
    }
    Integer & operator *(){
        return *m_p;
    }
};

void Process(std::shared_ptr<Integer> ptr){ // or unique_ptr
    std::cout << ptr->GetValue()<<std::endl;
}
void CreateInteger (){
    //std::unique_ptr<Integer> p(new Integer);  // a pointer that deletes with the object
    std::shared_ptr<Integer> p(new Integer); // using always smart pointers
    (*p).SetValue(3);
    Process(p);
    // you can no create a copy of it but we can move it

    std::cout << p->GetValue()<< std::endl;
}

int main(){

    CreateInteger ();  // It will be a smart pointers
    return 0;
}