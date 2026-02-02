#include <iostream>
using namespace std;

class MobilePhone {
private:
    string brand;
    string model;
    float price;

public:
    MobilePhone() {
        brand = "Unknown";
        model = "Unknown";
        price = 0;
    }

    MobilePhone(string b, string m, float p) {
        brand = b;
        model = m;
        price = p;
    }

    MobilePhone(const MobilePhone &obj) {
        brand = obj.brand;
        model = obj.model;
        price = obj.price;
    }

    ~MobilePhone() {
        cout << "Destroying object: " << brand << " " << model << endl;
    }

    void displayInfo();
    void isPremiumPhone();
};

void MobilePhone::displayInfo() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}

void MobilePhone::isPremiumPhone() {
    if (price > 30000)
        cout << "This is a premium phone." << endl;
    else
        cout << "This is a budget phone." << endl;
}

int main() {
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