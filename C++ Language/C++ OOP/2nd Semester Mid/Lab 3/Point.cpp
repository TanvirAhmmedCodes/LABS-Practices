/*
Develop a C++ class named Point that represents a point in a 2D coordinate system, with
two private integer variables x and y to store the coordinates. The class should include a
constructor that initializes these coordinates upon object creation and a copy constructor
that allows one Point object to be initialized as a copy of another. Additionally, the class
should provide getter functions to access the x and y values. Create a distance function
to calculate euclidean distance between two objects.
*/

#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    int getX() { return x; }
    int getY() { return y; }
    double distance(const Point &p)
    {
        int dx = p.x - x;
        int dy = p.y - y;
        return sqrt(dx * dx + dy * dy);
    }
};
int main()
{
    Point p1(1, 2);
    Point p2(4, 6);
    Point p3 = p1;
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    cout << "Distance between p1 and p3: " << p1.distance(p3) << endl;

    return 0;
}