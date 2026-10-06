#include <iostream>
#include "Integer.h"
class Product {
    Integer m_Id;
public:
    Product (const Integer &id):m_Id(id){  //no is initialation and no assignment
        std::cout<< "Product (cons Integer &)"<< std::endl;
        //m_Id=id;
    }
    ~ Product(){
        std::cout << "~Product() "<< std::endl;
    }

};
int main (){
    Product(5);
    return 0;


}

