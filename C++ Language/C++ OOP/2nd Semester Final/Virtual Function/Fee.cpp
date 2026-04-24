/*
An Online Course Enrollment System is designed to manage different types of students
and their course fees efficiently using Object-Oriented Programming (OOP) concepts.
A base class named Student stores common information such as student name and
student ID. Three derived classes - UndergraduateStudent, GraduateStudent, and
PartTimeStudent - extend the base class and implement their own fee calculation
methods.
•	Undergraduate students pay a fixed fee per semester.
•	Graduate students pay a semester fee along with a research fee.
•	Part-time students are charged based on the number of courses they take.
Design the system by implementing the calculateFee() function of each class following the
concepts of pure virtual function, polymorphism, and object pointer.

Class Name                          Attributes                    Functions
Student (Base)                      name, id                      calculateFee()
UndergraduateStudent (Derived)      semesterFee                   calculateFee()
GraduateStudent (Derived)           semesterFee, researchFee      calculateFee()
PartTimeStudent (Derived)           courseFee, numberOfCourses    calculateFee()
*/
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;

    Student(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void calculateFee() = 0;
};

class UndergraduateStudent : public Student
{
public:
    double semesterFee;

    UndergraduateStudent(string n, int i, double f) : Student(n, i)
    {
        semesterFee = f;
    }

    void calculateFee()
    {
        cout << "Undergraduate Fee: " << semesterFee << endl;
    }
};

class GraduateStudent : public Student
{
public:
    double semesterFee, researchFee;

    GraduateStudent(string n, int i, double s, double r) : Student(n, i)
    {
        semesterFee = s;
        researchFee = r;
    }

    void calculateFee()
    {
        cout << "Graduate Fee: " << semesterFee + researchFee << endl;
    }
};

class PartTimeStudent : public Student
{
public:
    double courseFee;
    int numberOfCourses;

    PartTimeStudent(string n, int i, double f, int c) : Student(n, i)
    {
        courseFee = f;
        numberOfCourses = c;
    }

    void calculateFee()
    {
        cout << "Part-Time Fee: " << courseFee * numberOfCourses << endl;
    }
};

int main()
{
    Student *s;

    UndergraduateStudent u("Tanvir", 1, 20000);
    GraduateStudent g("Rahim", 2, 25000, 5000);
    PartTimeStudent p("Karim", 3, 4000, 3);

    s = &u;
    s->calculateFee();

    s = &g;
    s->calculateFee();

    s = &p;
    s->calculateFee();

    return 0;
}