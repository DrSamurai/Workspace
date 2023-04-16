#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount{
public:
    string name;
    string surname;
    double accountBalance;
    int accountNumber;

    BankAccount(string name, string surname, double accountBalance, int accountNumber);

    void deposit(double addedAmount);
    void withdraw(double substractedAmount);
    double getBalance();
    string getName();
    int getNumber();
    void transfer(BankAccount &acc, double transferredAmount);
    void printStatement();
    void setName(string newname, string lastname);
    void setNumber(int newnumber);
};

















#endif
