#include <iostream>
#include "Integer.h"


Integer operator +(int x, const Integer &y){
    Integer temp;
    temp.SetValue(x+y.GetValue());
    return temp;
}

std::ostream & operator <<(std::ostream & out, const Integer &a){
   out << a.GetValue();
   return out;
}

std::istream & operator >>(std::istream & input,Integer &a){
   int x;
   input>> x;
   *a.m_pInt=x; //posible because this function is a friend

   return input;
}




int main(){
    Integer a(1),b(3);
    //Integer sum=a+b;
    a();
    Integer sum=a +5;
    // Integer sum=5+a;  Is called by the left , so will be an error
    std::cout << sum.GetValue()<<std::endl;
    Integer sum2=5+a; // Now that the operator is created it will work
    std::cout << sum2<<std::endl; //With the << operator now we can print a class (what we set for the class)
    std::cin >> a;
    std::cout << a << std::endl;
    return 0;
}