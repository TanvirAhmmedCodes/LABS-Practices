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
#include <string>
using namespace std;

class Merge_string {
    string s;

public:
    Merge_string(string str = "") {
        s = str;
    }

    friend Merge_string operator+(Merge_string a, Merge_string b) {
        return Merge_string(a.s + " " + b.s);
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    Merge_string o1("Good"), o2("Morning"), o3;
    o3 = o1 + o2;
    o3.display();
}