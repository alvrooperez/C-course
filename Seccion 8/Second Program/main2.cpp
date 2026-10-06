#include <iostream>
constexpr int GetNumber(){
    return 42;
}
constexpr int Add (int x, int y){
    return x + y;
}

constexpr int Max (int x, int y){
    if (x>y)
        return x;
    return y;
}

int main(){
    //behaves as constexpr
    constexpr int i =10; // Always evaluated a compile time
    int arr[i];

    //behaves as constexpr
    const int j=GetNumber();
    //int arr1[j]; // Not posible because is not constant
    // change the function as constexpr
    int arr1[j]; 
    //behaves as normal function
    int x = GetNumber();

    constexpr int sum = Add(3,5);  // you cannot used x because it is not compilable a compile itime
    int sum2 =Add(3,5);
    int maximum2 =Max(3,5);

    return 0;
}

// Constexpr rules
//1. Only Literal types
// void scalar tyoes (int float char) references ..
// 2. One Line , the return statment (Now yes we can)
//3. Implicy inline?