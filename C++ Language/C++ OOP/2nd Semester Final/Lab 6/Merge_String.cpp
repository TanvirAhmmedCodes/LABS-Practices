/*
Define a class Merge_string having two member variables - length (denoting string length)
and s (denoting a string content) and member function display(). Overload + operator for
concatenating two strings.
main(){
Merge_string o1(“Good”), o2(“Morning”), o3;
o3= o1+o2;
o3.display();
}
Output:
Good Morning
*/

#include <iostream>
#include <cstring>
using namespace std;

class Merge_string
{
    int length;
    char s[100];

public:
    Merge_string()
    {
        length = 0;
        s[0] = '\0';
    }

    Merge_string(const char str[])
    {
        strcpy(s, str);
        length = strlen(s);
    }

    friend Merge_string operator+(Merge_string a, Merge_string b)
    {
        Merge_string temp;
        strcpy(temp.s, a.s);
        strcat(temp.s, " ");
        strcat(temp.s, b.s);
        temp.length = strlen(temp.s);
        return temp;
    }

    void display()
    {
        cout << s << endl;
    }
};

int main()
{
    Merge_string o1("Good"), o2("Morning"), o3;

    o3 = o1 + o2;

    o3.display();
}