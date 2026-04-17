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

    void divide()
    {
        if (b == 0)
        {
            cout << "Division by zero not allowed" << endl;
        }
        else
        {
            cout << a / b << endl;
        }
    }
};

int main()
{
    Calculator<int> obj1;
    obj1.setValues(10, 5);

    cout << obj1.add() << endl;
    cout << obj1.subtract() << endl;
    cout << obj1.multiply() << endl;
    obj1.divide();

    Calculator<float> obj2;
    obj2.setValues(7.5, 2.5);

    cout << obj2.add() << endl;
    cout << obj2.subtract() << endl;
    cout << obj2.multiply() << endl;
    obj2.divide();

    return 0;
}