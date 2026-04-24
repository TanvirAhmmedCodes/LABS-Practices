/*
A Library Membership Management System is designed to manage different types of members and their membership fees efficiently using Object-Oriented Programming (OOP) concepts.

The system contains a base class named Member, which stores common information such as member name and ID. From this base class, three derived classes are created: RegularMember, PremiumMember, and GuestMember. Each derived class implements its own version of the calculateFee() function.

The fee structure is different for each type of member:
- Regular members pay a fixed monthly fee.
- Premium members pay a yearly fee along with additional service charges.
- Guest members are charged based on the number of visits.

Design the system using the concepts of:
- Pure virtual function
- Polymorphism
- Object pointer

Class Name         Attributes                         Functions
Member (Base)      name, id                           calculateFee()
RegularMember       monthlyFee                        calculateFee()
PremiumMember       yearlyFee, serviceCharge          calculateFee()
GuestMember         perVisitFee, numberOfVisits       calculateFee()
*/

#include <iostream>
#include <string>
using namespace std;

class Member {
protected:
    string name;
    int id;

public:
    Member(string n, int i) : name(n), id(i) {}
    virtual void calculateFee() = 0;
    virtual ~Member() {}
};

class RegularMember : public Member {
    double monthlyFee;

public:
    RegularMember(string n, int i, double f) : Member(n, i), monthlyFee(f) {}

    void calculateFee() {
        cout << monthlyFee << endl;
    }
};

class PremiumMember : public Member {
    double yearlyFee, serviceCharge;

public:
    PremiumMember(string n, int i, double y, double s)
        : Member(n, i), yearlyFee(y), serviceCharge(s) {}

    void calculateFee() {
        cout << yearlyFee + serviceCharge << endl;
    }
};

class GuestMember : public Member {
    double perVisitFee;
    int visits;

public:
    GuestMember(string n, int i, double p, int v)
        : Member(n, i), perVisitFee(p), visits(v) {}

    void calculateFee() {
        cout << perVisitFee * visits << endl;
    }
};

int main() {
    Member* m1 = new RegularMember("A", 1, 500);
    Member* m2 = new PremiumMember("B", 2, 5000, 800);
    Member* m3 = new GuestMember("C", 3, 50, 10);

    m1->calculateFee();
    m2->calculateFee();
    m3->calculateFee();

    delete m1;
    delete m2;
    delete m3;

    return 0;
}