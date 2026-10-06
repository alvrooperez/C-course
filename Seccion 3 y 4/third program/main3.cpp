#include <iostream>
#include "Integer.h"

void Print(Integer val){

}
int main() {
    Integer a(1);
    a.SetValue(3);
    //auto b{std::move(a)};
    Print(std::move(a)); // You use a and then eliminate it (its memory)
    //std:: cout<< a.GetValue(); //error
    a.SetValue(5); //you have to make setValue to assign new memory to a, you are reutilizing a
    //even if I don't copy constructor I can move it, so I have to use std::move in fuctions
    return 0;

}