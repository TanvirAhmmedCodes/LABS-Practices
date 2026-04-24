/*
Display appropriate messages based on the comparison results. Create a Box class that
represents a 3D box with length, width, and height as attributes. Overload the relational operators
(<, ==, !=) to compare two Box objects based on their volume. Implement a main function to test
these operators by creating multiple Box objects and comparing them.
*/

#include <iostream>
using namespace std;

class Box
{
    int l, w, h;

public:
    Box(int a = 0, int b = 0, int c = 0)
    {
        l = a;
        w = b;
        h = c;
    }

    int volume()
    {
        return l * w * h;
    }

    friend bool operator<(Box a, Box b)
    {
        return a.volume() < b.volume();
    }

    friend bool operator==(Box a, Box b)
    {
        return a.volume() == b.volume();
    }

    friend bool operator!=(Box a, Box b)
    {
        return a.volume() != b.volume();
    }
};

int main()
{
    Box b1(2, 3, 4), b2(3, 3, 3), b3(2, 3, 4);

    if (b1 < b2)
        cout << "b1 < b2" << endl;
    else
        cout << "b1 >= b2" << endl;

    if (b1 == b3)
        cout << "b1 == b3" << endl;
    else
        cout << "b1 != b3" << endl;

    if (b2 != b3)
        cout << "b2 != b3" << endl;
    else
        cout << "b2 == b3" << endl;
}