/*
Design a class named Student that stores information about a
student's name, roll number, and marks in three subjects.
Implement methods to calculate the total marks and average marks.
Create two objects for this class, set the values, and display the
students’ details along with the total and average marks.
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int roll;
    float m1, m2, m3;

public:
    void setInfo(string n, int r, float s1, float s2, float s3)
    {
        name = n;
        roll = r;
        m1 = s1;
        m2 = s2;
        m3 = s3;
    }
    float getTotal()
    {
        return m1 + m2 + m3;
    }
    float getAverage()
    {
        return getTotal() / 3;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Average Marks: " << getAverage() << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.setInfo("Tanvir", 101, 85, 90, 78);
    s2.setInfo("Suborna", 102, 70, 75, 80);
    s1.display();
    s2.display();
    return 0;
}