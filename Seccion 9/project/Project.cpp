#include <iostream>
#include "Savings.hpp"
#include "Checking.hpp"
#include "Transaction.hpp"
int main(){
    
    Checking ch("Bob",100);
    Account *PAccount= &ch;
    Account PAccount= ch; //object slicing
    
    return 0;
}