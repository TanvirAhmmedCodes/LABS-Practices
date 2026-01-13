/*Design a class named Rectangle that represents a rectangle. The
class should have private attributes for the length and width of the
rectangle. Implement public methods to calculate and return the
area and perimeter of the rectangle. Create an object of this class,
set the length and width, and display the area and perimeter.*/

#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    void setValues(double l, double w)
    {
        length = l;
        width = w;
    }
    double getArea()
    {
        return length * width;
    }
    double getPerimeter()
    {
        return 2 * (length + width);
    }
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
};
int main()
{
    Rectangle r1;
    r1.setValues(5.5, 3.0);
    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;
    return 0;
}