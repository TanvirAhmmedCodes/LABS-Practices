/*
You are required to design a crash-proof loan processing terminal using inheritance, where the base class is BankData (responsible for storing inputs) and the derived class is SecureBank (responsible for validation and computation). The system takes five inputs: Email, Password, Loan Amount, Income, and Expense, and calculates a Risk Score using the formula: 
Risk = Loan Amount / (Income - Expense).

The program must validate inputs carefully:
• email must not start with a number, must contain '@', and end with ".com";
• password must be strong (minimum 8 characters with uppercase, lowercase, digit, and special character);
• loan amount must not be negative; and
• income must not be equal to expense to avoid division by zero.

Execution Logic: In main(), implement the process using a try-catch mechanism. If any exception occurs, the system must print the error and automatically repeat the entire input process. The system must continuously demand new inputs until a 100% error-free session is processed, after which it should print "Transaction Complete".
*/

#include <iostream>
#include <regex>
using namespace std;

class BankData {
public:
    string email, password;
    double loan, income, expense;
};

class SecureBank : public BankData {
public:
    void input() {
        cin >> email >> password >> loan >> income >> expense;
    }

    void validate() {
        if (!regex_match(email, regex("^[A-Za-z][A-Za-z0-9._%+-]*@.*\\.com$")))
            throw runtime_error("Invalid Email");

        if (!regex_match(password, regex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[^A-Za-z0-9]).{8,}$")))
            throw runtime_error("Weak Password");

        if (loan < 0)
            throw runtime_error("Negative Loan");

        if (income == expense)
            throw runtime_error("Division Error");
    }

    double risk() {
        return loan / (income - expense);
    }
};

int main() {
    while (true) {
        try {
            SecureBank obj;
            obj.input();
            obj.validate();
            cout << obj.risk() << endl;
            cout << "Transaction Complete" << endl;
            break;
        } catch (exception &e) {
            cout << e.what() << endl;
        }
    }
}