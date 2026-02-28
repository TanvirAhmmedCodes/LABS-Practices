/*
Design a class named Circle that represents a circle. The class
should have private attribute for the radius of the circle. Implement
public methods to calculate and return the area and circumference
of the circle. Create an object of this class, set the radius, and
display the area and circumference.
*/

#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }
    double getArea()
    {
        return 3.14159 * radius * radius;
    }
    double getCircumference()
    {
        return 2 * 3.14159 * radius;
    }
    double getRadius()
    {
        return radius;
    }
};
int main()
{
    Circle c1;
    c1.setRadius(5.0);
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;
    return 0;
}