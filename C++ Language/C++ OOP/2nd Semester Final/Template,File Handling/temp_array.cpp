#include<iostream>
#include<utility>
using namespace std;

template<typename A>
A MaxVal(A ara[],int s)
{
    A mx = ara[0];
    for(int i=1;i<s;i++)
    {
        if(ara[i]>mx)
        {
            mx = ara[i];
        }
    }
    return mx;
}

int main()
{
    int araInt[5]={2,9,1,5,4};
    char araChar[5] = {'a','i','w','x','y'};
    string araStr[5] = {"hello","hell","hey","oh","bye"};
    cout<<MaxVal(araInt,5)<<endl;
    cout<<MaxVal(araChar,5)<<endl;
    cout<<MaxVal(araStr,5)<<endl;


}
