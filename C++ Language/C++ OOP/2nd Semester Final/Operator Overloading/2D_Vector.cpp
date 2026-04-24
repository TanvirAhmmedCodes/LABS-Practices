/*
Create a class Vector to represent a 2D vector with x and y components. Overload the
following operators using friend operator functions:
i. Unary -- to decrement both x and y components of the vector.
ii. Binary + to add two Vector objects component-wise.
iii. Write a main function to demonstrate the working of these operators.
*/

#include <iostream>
using namespace std;

class Vector {
    int x, y;

public:
    Vector(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    friend Vector& operator--(Vector &v) {
        v.x--;
        v.y--;
        return v;
    }

    friend Vector operator+(const Vector &a, const Vector &b) {
        return Vector(a.x + b.x, a.y + b.y);
    }

    void display() const {
        cout << "Vector(x: " << x << ", y: " << y << ")" << endl;
    }
};

int main() {
    Vector v1(5, 6), v2(2, 3), v3;

    v1.display();
    --v1;
    v1.display();

    v3 = v1 + v2;
    v3.display();
}