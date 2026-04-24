/*
Write a C++ program to demonstrate inheritance and runtime polymorphism through a
simple Shape hierarchy. Create a base class named Shape containing a pure virtual
function draw() that will be overridden in derived classes. Derive three classes — Circle,
Square, and Triangle — from the Shape class. Each derived class should override the
draw() function to display a specific message indicating which shape is being drawn.
Include appropriate data members for each class: radius for Circle, side for Square, and
base and height for Triangle. Provide both default and parameterized constructors to
initialize these values. Add another virtual function named area() in the base class and
override it in each derived class to calculate the area using the correct formulas. In the
main() function, use a base class pointer to access the draw() and area() functions
polymorphically for each shape and display the results.
*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};

class Circle : public Shape
{
public:
    double radius;

    Circle()
    {
        radius = 0;
    }

    Circle(double r)
    {
        radius = r;
    }

    void draw()
    {
        cout << "Drawing Circle" << endl;
    }

    double area()
    {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape
{
public:
    double side;

    Square()
    {
        side = 0;
    }

    Square(double s)
    {
        side = s;
    }

    void draw()
    {
        cout << "Drawing Square" << endl;
    }

    double area()
    {
        return side * side;
    }
};

class Triangle : public Shape
{
public:
    double base, height;

    Triangle()
    {
        base = 0;
        height = 0;
    }

    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    void draw()
    {
        cout << "Drawing Triangle" << endl;
    }

    double area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape *s;

    Circle c(5);
    Square sq(4);
    Triangle t(6, 3);

    s = &c;
    s->draw();
    cout << s->area() << endl;

    s = &sq;
    s->draw();
    cout << s->area() << endl;

    s = &t;
    s->draw();
    cout << s->area() << endl;

    return 0;
}