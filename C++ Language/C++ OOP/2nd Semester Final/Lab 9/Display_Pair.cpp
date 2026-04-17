/*
Implement a function template named displayPair() that accepts two arguments of possibly
different data types and displays them as a pair. Demonstrate the function using different
combinations of types such as integer–string and character–float to show that templates can
handle multiple type parameters efficiently.
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
void displayPair(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    displayPair(10, "Hello");
    displayPair('A', 3.5);

    return 0;
}