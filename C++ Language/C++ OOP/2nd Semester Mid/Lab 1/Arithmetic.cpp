#include <iostream>

using namespace std;

int main()
{
    int n, m;
    char op;

    cout << "Enter first number: ";
    cin >> n;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> m;

    switch (op)
    {
    case '+':
        cout << "Result: " << n + m << "\n";
        break;
    case '-':
        cout << "Result: " << n - m << "\n";
        break;
    case '*':
        cout << "Result: " << n * m << "\n";
        break;
    case '/':
        cout << "Result: " << n / m << "\n";

    default:
        cout << "Error: Invalid" << "\n";
    }
    return 0;
}