/*
Write a C++ program to demonstrate the concept of function overloading by defining an
overloaded function named Max(). The function should perform different operations
based on the number and type of parameters passed to it. The Max() function must be
overloaded to:
(i) find the maximum of two integers,
(ii) find the maximum of three floating-point numbers, and
(iii) find the maximum element in an array of integers, given the array and its size.
In the main() function, take the necessary inputs from the user, call the appropriate
overloaded versions of the Max() function, and display the results to clearly illustrate
function overloading in C++.
*/

#include <iostream>
using namespace std;

int Max(int a, int b)
{
    return (a > b) ? a : b;
}

float Max(float a, float b, float c)
{
    float m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    return m;
}

int Max(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum of two integers: " << Max(a, b) << endl;

    float x, y, z;
    cout << "Enter three floating point numbers: ";
    cin >> x >> y >> z;
    cout << "Maximum of three floats: " << Max(x, y, z) << endl;

    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum element in array: " << Max(arr, n) << endl;

    return 0;
}