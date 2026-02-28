/*
Develop a C++ class named Distance with one private integer data member
meters. The class should include a parameterized constructor to initialize the value and a
copy constructor to create an object as a copy of another. Provide a public getter
function to access the distance value. Also write a function named addDistance() that
takes two Distance objects as parameters and returns a new Distance object
representing their sum. In the main() function, create objects using both constructors
and use the function to calculate and display the total distance.
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;

public:
    Distance(int m)
    {
        meters = m;
    }

    Distance(const Distance &d)
    {
        meters = d.meters;
    }

    int getMeters()
    {
        return meters;
    }
};

Distance addDistance(Distance d1, Distance d2)
{
    return Distance(d1.getMeters() + d2.getMeters());
}

int main()
{
    Distance d1(50);
    Distance d2(d1);

    Distance total = addDistance(d1, d2);

    cout << "Distance 1: " << d1.getMeters() << " meters" << endl;
    cout << "Distance 2: " << d2.getMeters() << " meters" << endl;
    cout << "Total Distance: " << total.getMeters() << " meters" << endl;

    return 0;
}