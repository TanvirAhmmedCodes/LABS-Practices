/*
A class called “X” has an operator overloading function. Now implement a code for the
statement: ob1= 45+ob2 to compile correctly.
*/

#include <iostream>
using namespace std;
class X
{
    int a;

public:
    X(int i = 0)
    {
        a = i;
    }
    friend X operator+(int n, X ob)
    {
        return X(n + ob.a);
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    X ob1, ob2(10);
    ob1 = 45 + ob2;
    ob1.display();
}