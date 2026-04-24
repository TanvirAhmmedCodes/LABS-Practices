/*
A class called “X” has two operator overloading functions. Now implement a code for the
statement: ob1= (ob2+2)*ob3 to compile correctly.
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
    friend X operator+(X ob, int n)
    {
        return X(ob.a + n);
    }
    friend X operator*(X ob1, X ob2)
    {
        return X(ob1.a * ob2.a);
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    X ob1, ob2(5), ob3(3);
    ob1 = (ob2 + 2) * ob3;
    ob1.display();
}