#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }

    void updateMarks(float newMarks)
    {
        marks = newMarks;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.input();

    cout << "\nEnter details for Student 2:\n";
    s2.input();

    cout << "\nStudent 1 Details:\n";
    s1.display();

    cout << "\nStudent 2 Details:\n";
    s2.display();

    float newMarks;
    cout << "\nEnter new marks for Student 1: ";
    cin >> newMarks;

    s1.updateMarks(newMarks);

    cout << "\nUpdated Student 1 Details:\n";
    s1.display();

    return 0;
}