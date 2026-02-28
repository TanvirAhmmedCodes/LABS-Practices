/*
Create a C++ class named MobilePhone with three private data members:
brand, model, and price.
● The class will include a default constructor that initializes brand and model to
"Unknown" and price to 0, a parameterized constructor to initialize all members with
user-provided values and a copy constructor to copy data from another object. A
destructor will be implemented to display a message indicating which object is being
destroyed.
● Two member functions will be defined outside the class using the scope resolution
operator: displayInfo() to print all details of the phone, and isPremiumPhone() to print
"This is a premium phone." if the price is greater than 30000, otherwise print "This is a
budget phone.".
● In the main() function, Prompt the user to enter the brand, model, and price for a mobile
phone, then create an object using the parameterized constructor with this input. Create
another object using the copy constructor to duplicate the first object. Create a pointer
to the first object. Call displayInfo() and isPremiumPhone() on the original object, the
copied object, and the pointer-accessed object.
*/

#include <iostream>
using namespace std;

class MobilePhone
{
private:
    string brand;
    string model;
    float price;

public:
    MobilePhone()
    {
        brand = "Unknown";
        model = "Unknown";
        price = 0;
    }

    MobilePhone(string b, string m, float p)
    {
        brand = b;
        model = m;
        price = p;
    }

    MobilePhone(const MobilePhone &obj)
    {
        brand = obj.brand;
        model = obj.model;
        price = obj.price;
    }

    ~MobilePhone()
    {
        cout << "Destroying object: " << brand << " " << model << endl;
    }

    void displayInfo();
    void isPremiumPhone();
};

void MobilePhone::displayInfo()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}

void MobilePhone::isPremiumPhone()
{
    if (price > 30000)
        cout << "This is a premium phone." << endl;
    else
        cout << "This is a budget phone." << endl;
}

int main()
{
    string brand, model;
    float price;

    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Price: ";
    cin >> price;

    MobilePhone phone1(brand, model, price);
    MobilePhone phone2(phone1);

    MobilePhone *ptr = &phone1;

    cout << "\nOriginal Object:\n";
    phone1.displayInfo();
    phone1.isPremiumPhone();

    cout << "\nCopied Object:\n";
    phone2.displayInfo();
    phone2.isPremiumPhone();

    cout << "\nPointer Accessed Object:\n";
    ptr->displayInfo();
    ptr->isPremiumPhone();

    return 0;
}