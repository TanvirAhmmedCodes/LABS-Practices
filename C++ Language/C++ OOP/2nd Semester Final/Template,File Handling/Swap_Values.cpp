/*
Design a generic function/ template function called swapValues() that swaps the
values of two variables using pass-by-reference. The program should print the values
before and after swapping. Test the function with different data types such as integers,
floats, and strings to demonstrate the reusability of templates.
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    float p = 1.5, q = 2.5;
    string s1 = "Hello", s2 = "World";

    cout << "Before swap int: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swap int: " << x << " " << y << endl;

    cout << "Before swap float: " << p << " " << q << endl;
    swapValues(p, q);
    cout << "After swap float: " << p << " " << q << endl;

    cout << "Before swap string: " << s1 << " " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swap string: " << s1 << " " << s2 << endl;

    return 0;
}