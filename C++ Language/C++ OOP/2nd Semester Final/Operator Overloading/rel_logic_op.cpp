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
    bool operator ==(coord ob)
    {
        if(x == ob.x  && y==ob.y)
        {
            return true;
        }
        else
            return false;
    }

     bool operator &&(coord ob)
    {
        if((x && ob.x)  && (y&&ob.y))
        {
            return true;
        }
        else
            return false;
    }



};

int main()
{
    coord o1(3,4);
    coord o2(3,5);
    coord o3(3,4);

    if(o1 == o2 && o1 == o3 )
    {
        cout<<"o1 and o2 is equal"<<endl;
    }
    else
        cout<<"o1 and o2 is NOT equal"<<endl;
    if(o1 == o3)
    {
        cout<<"o1 and o3 is equal"<<endl;
    }
    else
        cout<<"o1 and o3 is NOT equal"<<endl;

    if ( o1 && o2)
    {
        cout<<"o1 AND o2 is true"<<endl;
    }
    else
        cout<<"o1 AND o2 is false"<<endl;

}
