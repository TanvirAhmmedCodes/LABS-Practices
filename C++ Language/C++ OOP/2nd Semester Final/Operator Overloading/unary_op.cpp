#include<iostream>
using namespace std;
class Distance{
public:
    int feet, inch;
    Distance(){
    }
    Distance(int f, int i)
    {
        feet=f;
        inch=i;
    }

    ///Prefix
    void operator --()
    {
        --feet;
        --inch;
        cout<<"Feet: "<<feet<<" Inch: "<<inch<<endl;
    }

    ///Postfix
     void operator --(int)
    {
        feet--;
        inch--;
        cout<<"Feet: "<<feet<<" Inch: "<<inch<<endl;
    }


};


int main()
{
    Distance d1(3,4);
    Distance d2(5,4);
    --d1;
    d2--;



}
