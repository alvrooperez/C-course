#include "Transaction.hpp"
#include <iostream>

void Transact(Account *pAccount)
{
    std::cout << ""<< std::endl;
    std::cout << "Initial Balance : "<< pAccount->GetBalance() << std::endl;
    pAccount->Deposit(100);
    pAccount->AccumulativeInterest();
    pAccount->Withdraw(170);
    std::cout << "Interest rate : "<< pAccount->GetInterestRate() << std::endl;
    std::cout << "Final Balance : "<< pAccount->GetBalance() << std::endl;
}