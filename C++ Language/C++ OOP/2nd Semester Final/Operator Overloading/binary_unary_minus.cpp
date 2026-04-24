#include<iostream>
using namespace std;

class coord{
int x,y;
public:
    coord(){
    x=0;
    y=0;
    }
    coord(int i, int j)
    {
        x=i;
        y=j;
    }
    coord operator - (coord ob)
    {
        coord res;
        res.x = x - ob.x;
        res.y= y-ob.y;
        return res;
    }
    coord operator - ()
    {
        x = -x;
        y = -y;
        return *this;
    }
    void display()
    {
        cout<<" X = "<<x<<" Y = "<<y<<endl;
    }

};

int main()
{
    coord c1(2,3);
    coord c2(3,4);
    coord c3 = c1 - c2;
    coord c4 = -c1;

    c3.display();
    c4.display();
}

