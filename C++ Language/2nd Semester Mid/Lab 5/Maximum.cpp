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