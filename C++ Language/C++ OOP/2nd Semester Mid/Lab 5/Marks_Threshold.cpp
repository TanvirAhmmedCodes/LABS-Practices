/*
Create a class Student with attributes: name, id, and marks. The program should create
an array (or list) of 5 Student objects, take input for their details, and perform the
following operations:
1. Calculate and display the average marks of all students.
2. Ask the user to input a threshold mark.
3. Display the names and marks of students who scored above the given threshold.
To achieve this, include a member function inside the Student class that displays details
of students whose marks are greater than the user-given value.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float marks;

    void input(int i)
    {
        cout << "Student " << i + 1 << " Name: ";
        cin >> name;
        cout << "Student " << i + 1 << " ID: ";
        cin >> id;
        cout << "Student " << i + 1 << " Marks: ";
        cin >> marks;
    }

    void displayAbove(float threshold)
    {
        if (marks > threshold)
        {
            cout << name << " - " << marks << endl;
        }
    }
};

int main()
{
    Student s[5];
    float total = 0;

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].input(i);
        total += s[i].marks;
    }

    float average = total / 5;
    cout << "\nAverage Marks of the Students: " << average << endl;

    float threshold;
    cout << "Enter threshold marks: ";
    cin >> threshold;

    cout << "Students scoring above " << threshold << " marks:\n";
    for (int i = 0; i < 5; i++)
    {
        s[i].displayAbove(threshold);
    }

    return 0;
}