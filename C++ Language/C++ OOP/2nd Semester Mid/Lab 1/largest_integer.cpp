#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {

        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    return 0;
}