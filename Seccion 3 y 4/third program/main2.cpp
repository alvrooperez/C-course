#include <iostream>
#include "Integer.h"


class Number {
    Integer m_Value;
public:
    Number()=default;
    Number (int value):m_Value{value} {}
    //Number (const Number &n):m_Value{n.m_Value}{}; //not do it
    //~Number(){}//same, if added, move operation are deleted
    //Number(Number &&n):m_Value{std::move(n.m_Value)}{} // same with copy also
    Number(Number &&n)=default;
    Number & operator = (Number &&)=default; //Now we can fix it (only move)
    Number (const Number &n)=default;
    Number & operator = (const Number &)=default;

};
Number CreateNumber (int num) {
    Number n{num};
    return n;
}
int main(){
    Number n1{1};
    auto n2{n1};
    n2=n1;
    auto n3{CreateNumber(3)};
    n3=CreateNumber(3);
    return 0;
}