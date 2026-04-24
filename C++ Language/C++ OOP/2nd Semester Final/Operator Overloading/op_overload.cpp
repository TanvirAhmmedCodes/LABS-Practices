// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// add Distance
class Distance{
    public:
    int feet, inch;
    Distance()
    {
        inch=0;
        feet=0;
    }
     Distance(int m, int i)
    {
        inch=i;
       feet=m;
    }
    void display()
    {
        cout<<"feet: "<<feet<<" Inches: "<<inch<<endl;
    }
Distance  addDistance(Distance d2)
{
    Distance d3;
    d3.feet= feet+d2.feet;
    d3.inch= inch+d2.inch;
    return d3;
}
Distance operator +(Distance d2)
{
    Distance d3;
    d3.feet= feet+d2.feet;
    d3.inch= inch+d2.inch;
    return d3;
}
Distance operator +(int a)
{
    Distance d3;
    d3.feet= feet+a;
    d3.inch= inch+a;
    return d3;
}
};

int main() {
    // Write C++ code here
    Distance dis1(8,9);
     Distance dis2(5,6);
     Distance dis3= dis1.addDistance(dis2);
     Distance d3 = dis1 + dis2;
     dis3.display();
     d3.display();

     Distance d4 = dis1 + 4;
     d4.display();
    return 0;
}
