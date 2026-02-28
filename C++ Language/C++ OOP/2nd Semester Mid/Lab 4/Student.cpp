/*
Create a C++ class named Student with three private data members: name
(string), rollNumber (integer), and marks (float). The class should include public member
functions to input student information from the user and to display the student details.
Another public member function should be implemented to update the marks of a
student.
In the main() function, create two objects of the Student class. Use the input function to
take the name, roll number, and marks for each student from the user. Display the
information of both students. Then, update the marks of one student using the update
function and display the updated information.
*/

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