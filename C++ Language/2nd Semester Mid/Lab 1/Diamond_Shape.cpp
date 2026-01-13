#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd positive integer for rows: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Please enter an odd number." << endl;
        return 1;
    }

    int space = n / 2;
    int stars = 1;

    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        space--;
        stars += 2;
    }

    space = 1;
    stars = n - 2;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
        stars -= 2;
    }

    return 0;
}