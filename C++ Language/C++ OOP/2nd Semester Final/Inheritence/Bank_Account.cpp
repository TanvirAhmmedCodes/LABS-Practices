/*
Design a C++ program to implement a simple Bank Account Management System
using operator overloading and single inheritance. Create a base class named Account
that stores information such as the account holder’s name, account number, and balance.
Include member functions to deposit money, withdraw money, and display account
details. Overload the + operator to allow adding the balances of two accounts, producing
a new Account object that stores the total balance. Also, overload the > operator to
compare two accounts and determine which one has a higher balance. Derive a subclass
named SavingsAccount from Account, which contains an additional data member for
interest rate and a function addInterest() that updates the balance by applying the interest
rate. Demonstrate all functionalities in the main() function by creating multiple account
objects and performing operations such as deposit, comparison, and interest calculation.
*/
#include <iostream>
using namespace std;

class Account
{
public:
    string name;
    int accNumber;
    double balance;

    Account(string n, int a, double b)
    {
        name = n;
        accNumber = a;
        balance = b;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << endl;
    }

    Account operator+(Account obj)
    {
        Account temp("Total", 0, 0);
        temp.balance = balance + obj.balance;
        return temp;
    }

    bool operator>(Account obj)
    {
        return balance > obj.balance;
    }
};

class SavingsAccount : public Account
{
public:
    double interestRate;

    SavingsAccount(string n, int a, double b, double r)
        : Account(n, a, b)
    {
        interestRate = r;
    }

    void addInterest()
    {
        balance = balance + (balance * interestRate / 100);
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
        cout << endl;
    }
};

int main()
{
    Account a1("Tanvir", 101, 5000);
    Account a2("Rahim", 102, 3000);

    a1.deposit(1000);
    a2.withdraw(500);

    if (a1 > a2)
    {
        cout << "A1 has higher balance" << endl;
    }
    else
    {
        cout << "A2 has higher balance" << endl;
    }

    Account total = a1 + a2;

    SavingsAccount s1("Karim", 103, 4000, 10);
    s1.addInterest();

    a1.display();
    a2.display();
    total.display();
    s1.display();

    return 0;
}