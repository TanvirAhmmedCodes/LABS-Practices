/*
Write a C++ program that defines a generic function/ template function named
findMax() which accepts two parameters: an array of any data type, and its size. It
returns the larger one. Use the same function to compare integers, floating-point
numbers, and characters. Display the result for each type to show that the same function
works for multiple data types.
*/

#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size)
{
    T max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int intArr[] = {10, 20, 5, 30};
    float floatArr[] = {1.5, 2.7, 0.9, 3.2};
    char charArr[] = {'a', 'x', 'm', 'b'};

    cout << "Max int: " << findMax(intArr, 4) << endl;
    cout << "Max float: " << findMax(floatArr, 4) << endl;
    cout << "Max char: " << findMax(charArr, 4) << endl;

    return 0;
}