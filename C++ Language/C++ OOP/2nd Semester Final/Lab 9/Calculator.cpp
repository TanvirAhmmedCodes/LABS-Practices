/*
Develop a template class named Calculator that performs basic arithmetic operations
such as addition, subtraction, multiplication, and division for different numeric data types.
The class should contain two data members and member functions for each operation.
Test the program with integer and floating-point inputs, and handle division by zero
appropriately.
*/

#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
    T a, b;

public:
    void setValues(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T subtract()
    {
        return a - b;
    }

    T multiply()
    {
        return a * b;
    }

    T divide()
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a / b;
    }
}
};

int main()
{
    Calculator<int> c1;
    c1.setValues(10, 5);

    cout << "Addition: " << c1.add() << endl;
    cout << "Subtraction: " << c1.subtract() << endl;
    cout << "Multiplication: " << c1.multiply() << endl;
    cout << "Division: " << c1.divide() << endl;

    Calculator<float> c2;
    c2.setValues(7.5, 2.5);

    cout << "Addition: " << c2.add() << endl;
    cout << "Subtraction: " << c2.subtract() << endl;
    cout << "Multiplication: " << c2.multiply() << endl;
    cout << "Division: " << c2.divide() << endl;

    return 0;
}