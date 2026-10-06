#include "Checking.hpp"
#include <iostream>
/*
Checking::Checking(const std::string &name, float balance):
Account(name,balance)
{
}
*/

Checking::~Checking()
{
}

void Checking::Withdraw(float amount)
{
    if (amount+50<=m_Balance){
        Account::Withdraw(amount);
        //m_Balance -= amount;
    }else {
        std::cout << "Not enought money "<< std::endl;
    }
    
}
