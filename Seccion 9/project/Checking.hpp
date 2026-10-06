#pragma once
#include "Account.hpp"
class Checking :public Account {
public:
    //Checking(const std::string &name,float balance);
    using Account::Account; //Inheriting the constructors
    ~Checking();
    void Withdraw(float amount);
};