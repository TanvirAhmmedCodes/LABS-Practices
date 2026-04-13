/*
Create a C++ program demonstrating multilevel inheritance with three classes: Shape,
Circle, and Cylinder. The Shape class contains a method to input the radius. The Circle
class, which inherits from Shape, adds a method to calculate and display the area of the
circle. The Cylinder class, which inherits from Circle, adds methods to calculate and
display the cylinder’s volume and surface area using the same radius and an additional
height. In the main() function, create a Cylinder object, set all attributes, and display the
radius, circle area, cylinder volume, and surface area.

*/
#include <iostream>
using namespace std;

class Shape
{
public:
    double radius;

    void inputRadius(double r)
    {
        radius = r;
    }
};

class Circle : public Shape
{
public:
    double area;

    void calcArea()
    {
        area = 3.1416 * radius * radius;
    }

    void displayArea()
    {
        cout << "Circle Area: " << area << endl;
    }
};

class Cylinder : public Circle
{
public:
    double height;
    double volume;
    double surfaceArea;

    void setHeight(double h)
    {
        height = h;
    }

    void calcVolume()
    {
        volume = 3.1416 * radius * radius * height;
    }

    void calcSurfaceArea()
    {
        surfaceArea = 2 * 3.1416 * radius * (radius + height);
    }

    void displayAll()
    {
        cout << "Radius: " << radius << endl;
        displayArea();
        cout << "Cylinder Volume: " << volume << endl;
        cout << "Surface Area: " << surfaceArea << endl;
    }
};

int main()
{
    Cylinder c;

    c.inputRadius(5);
    c.setHeight(10);

    c.calcArea();
    c.calcVolume();
    c.calcSurfaceArea();

    c.displayAll();

    return 0;
}