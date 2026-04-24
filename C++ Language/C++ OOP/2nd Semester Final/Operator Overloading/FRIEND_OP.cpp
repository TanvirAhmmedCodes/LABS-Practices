#include<iostream>
using namespace std;

class Number{
private:
    int value;
    //int q;
public:
    Number(){
        value = 0;
    }
    Number(int v)
    {
        value=v;
    }

    void display()
    {
        cout<<"Value is: "<<value<<endl;
    }

    friend Number operator + (Number n1, Number n2);
    friend Number operator + (int p, Number n2);
    friend Number operator + (Number n1, int p);
    friend bool operator == (Number n1, Number n2);
       friend    void operator ++ (Number &n1);
       friend void operator ++ (Number &n1, int p);

};

// parameter: two objects of number class
Number operator + (Number n1, Number n2)
{
    Number n3;
    n3.value = n1.value + n2.value;

    return n3;
}
//
// int + obj
Number operator + (int p, Number n2)
{
    Number n3;
    n3.value = p + n2.value;
   // n3.q = p + n2.q;

    return n3;
}

 Number operator + (Number n1, int p)
{
    Number n3;
    n3.value = n1.value + p;

    return n3;
}

bool operator == (Number n1, Number n2)
{
    if(n1.value == n2.value)
    {
        return true;
    }
    else
        return false;
}

//prefix
void operator ++ (Number & n1)
{
    ++n1.value;
    n1.display();

}
//postfix
void operator ++ (Number & n1, int p)
{
    n1.value++;
    n1.display();
}

int main()
{
   Number num1(2);
   Number num2(3);
   Number num3 = num1 + num2;

   Number num4 = 12 + num2;
   Number num5 = num1 + 10;


   if(num1 == num2)
   {
       cout<<"num1 and num2 are equal"<<endl;
   }
   else
   cout<<"num1 and num2 are not equal"<<endl;

   num3.display();
   num4.display();
   num5.display();

   num1++;
   ++num1;

}
