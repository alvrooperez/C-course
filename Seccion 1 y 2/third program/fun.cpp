#include <iostream>
int Add(int *a, int *b) {
    return *a + *b;
}

void AddVal(int *a,int *b,int *result) {
    *result= *a+*b;
}

void Swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}

void Factorial(int *a,int *result){
    *result=1;
    for (int i=*a;i>0;i--){
        std::cout <<i << " " << *result << std::endl;
        *result=*result*i;
    }

}
