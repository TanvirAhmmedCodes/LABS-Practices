/*
Create a coord class that represents a 2D coordinate with x and y value. Overload the +
operator to add an integer value to both x and y coordinates of a coord object. Implement two
overloaded versions of + as friend functions:
 coord + int to allow adding an integer to a coord object.
 int + coord to allow adding a coord object to an integer.
Both versions should return a new coord object with updated values. Implement a display
function to print the x and y coordinates. In the main function, create a coord object, perform
addition operations using both versions of the overloaded “+” operator, and display the results.
*/

#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    friend coord operator+(coord c, int n)
    {
        return coord(c.x + n, c.y + n);
    }
    friend coord operator+(int n, coord c)
    {
        return coord(c.x + n, c.y + n);
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    coord c1(2, 3), c2, c3;
    c2 = c1 + 5;
    c3 = 5 + c1;
    c2.display();
    c3.display();
}