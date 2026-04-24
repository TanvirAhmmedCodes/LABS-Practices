/*
Create three classes: Student, Course, and University. The Student class should have data
members for student_name and student_id. The Course class should have data members
for course_name and course_code. The University class should have data members for
university_name and university_address. Initialize the data members using constructors.
Create a class Enrollment that inherits from Student, Course, and University, with an
additional data member for enrollment_date and a member function printDetails(). Call
the member function using the object of the Enrollment class.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    string student_name;
    int student_id;

    Student(string name, int id)
    {
        student_name = name;
        student_id = id;
    }
};

class Course
{
public:
    string course_name;
    string course_code;

    Course(string name, string code)
    {
        course_name = name;
        course_code = code;
    }
};

class University
{
public:
    string university_name;
    string university_address;

    University(string name, string address)
    {
        university_name = name;
        university_address = address;
    }
};

class Enrollment : public Student, public Course, public University
{
public:
    string enrollment_date;

    Enrollment(string sname, int sid,
               string cname, string ccode,
               string uname, string uaddress,
               string date)
        : Student(sname, sid),
          Course(cname, ccode),
          University(uname, uaddress)
    {
        enrollment_date = date;
    }

    void printDetails()
    {
        cout << student_name << endl;
        cout << student_id << endl;
        cout << course_name << endl;
        cout << course_code << endl;
        cout << university_name << endl;
        cout << university_address << endl;
        cout << enrollment_date << endl;
    }
};

int main()
{
    Enrollment e("Tanvir", 112,
                 "CSE", "CSE112",
                 "BUBT", "Dhaka",
                 "13-04-2026");

    e.printDetails();
}