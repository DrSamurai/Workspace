#include "BankAccount.h"

BankAccount::BankAccount(string name, string surname, double accountBalance, int accountNumber)
{

    this->name = name;
    this->surname = surname;
    this->accountBalance = accountBalance;
    this->accountNumber = accountNumber;
}

void BankAccount::deposit(double addedAmount)
{
    accountBalance += addedAmount;
}

void BankAccount::withdraw(double substractedAmount)
{
    if (substractedAmount > accountBalance)
        cout << "Your account doesn't have enough balance for this transaction..." << endl;
    else
    {
        accountBalance -= substractedAmount;
    }
}

void BankAccount::transfer(BankAccount &acc, double transferredAmount)
{
    if (transferredAmount > accountBalance)
        cout << "Cannot perform transaction!" << endl;
    else
    {
        acc.accountBalance += transferredAmount;
        accountBalance -= transferredAmount;
    }
}

double BankAccount::getBalance()
{
    return accountBalance;
}

string BankAccount::getName()
{
    return (name + " " + surname);
}

int BankAccount::getNumber()
{
    return accountNumber;
}

void BankAccount::printStatement()
{
    cout << "Account holder's name:  " << name + " " + surname << endl;
    cout << "Account balance: " << accountBalance << endl;
    cout << "Account number: " << accountNumber << endl;
}

void BankAccount::setName(string new_name, string new_surname)
{
    name = new_name;
    surname = new_surname;
}

void BankAccount::setNumber(int newnumber)
{
    accountNumber = newnumber;
}