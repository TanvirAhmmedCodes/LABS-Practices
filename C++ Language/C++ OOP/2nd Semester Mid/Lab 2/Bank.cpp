/*
Design a class named BankAccount.The class should have private attributes for account holder name, account number, and balance.
Implement public methods to:
•	Deposit an amount into the account
•	Withdraw an amount from the account
•	Display the current balance
Create an object of this class, set the account details, perform deposit and withdrawal operations, and display the final balance.
*/

#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    void setDetails(string n, int acc, double b)
    {
        name = n;
        accountNumber = acc;
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
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void displayBalance()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount b1;
    b1.setDetails("Tanvir", 12345, 1000.0);
    b1.displayBalance();
    b1.deposit(500.0);
    b1.withdraw(200.0);
    b1.displayBalance();
    return 0;
}