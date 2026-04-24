#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person()
    {
        cout<<"Person const.."<<endl;
    }
    Person(string name, int age)
    {
        this->name=name;
        this->age= age;
    }
};

class Student: public Person
{
public:
    int id;
    Student()
    {
        cout<<"Student const.."<<endl;
    }
    Student(string n, int a, int i): Person(n,a)
    {
        id = i;
    }
};
class TA: public Student{
  public:
      int salary;
      TA(){cout<<"Ta Const..."<<endl;}
      TA(string n, int a, int i, int s): Student(n,a,i)
      {
          salary = s;
      }

      void display()
      {
          cout<<name<<" "<<age<<" "<<id<<" "<<salary<<endl;
      }
};
int main(){
    TA t("ABCD",22, 1450, 5000);

}
