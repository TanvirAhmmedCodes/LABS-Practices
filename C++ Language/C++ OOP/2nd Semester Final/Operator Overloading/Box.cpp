#include <iostream>
using namespace std;

class Box {
    double l, w, h;

public:
    Box(double a = 0, double b = 0, double c = 0) {
        l = a;
        w = b;
        h = c;
    }

    double volume() const {
        return l * w * h;
    }

    bool operator>(const Box& b) {
        return volume() > b.volume();
    }

    bool operator==(const Box& b) {
        return volume() == b.volume();
    }

    friend bool operator>(const Box& a, const Box& b) {
        return a.h > b.h;
    }

    friend bool operator==(const Box& a, const Box& b) {
        return a.h == b.h;
    }

    void display() const {
        cout << "Box(" << l << ", " << w << ", " << h << ")\n";
    }
};

int main() {
    Box b1(2, 3, 4);
    Box b2(2, 2, 5);

    b1.display();
    b2.display();

    if (b1.operator>(b2))
        cout << "b1 bigger volume\n";
    else
        cout << "b2 bigger volume\n";

    if (b1.operator==(b2))
        cout << "volume equal\n";
    else
        cout << "volume not equal\n";

    if (::operator>(b1, b2))
        cout << "b1 taller\n";
    else
        cout << "b2 taller\n";

    if (::operator==(b1, b2))
        cout << "height equal\n";
    else
        cout << "height not equal\n";

    return 0;
}