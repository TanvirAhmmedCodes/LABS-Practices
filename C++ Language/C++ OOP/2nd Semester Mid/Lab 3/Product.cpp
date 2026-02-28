/*
• Design a class named Product to represent a product in a store.
• The class should include private attributes for the product’s name (productName),
ID (productID), and price (price).
• Implement a default constructor that initializes productName to “Unnamed”,
productID to 0, and price to 0.0, and a parameterized constructor that allows setting
these attributes to specific values upon object creation.
• Use a method to display the product information (displayDetails).
• The class should also have a destructor that outputs a message when an object is
destroyed.
• In the main function, create objects using both constructors, modify the default
object’s details, and display the information for each product.
*/

#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string productName;
    int productID;
    double price;

public:
    Product()
    {
        productName = "Unnamed";
        productID = 0;
        price = 0.0;
    }
    Product(string n, int i, double p)
    {
        productName = n;
        productID = i;
        price = p;
    }
    ~Product()
    {
        cout << "Product object destroyed" << endl;
    }
    void update(string n, int i, double p)
    {
        productName = n;
        productID = i;
        price = p;
    }

    void displayDetails()
    {
        cout << "Name: " << productName << endl;
        cout << "ID: " << productID << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};
int main()
{
    Product p1;
    p1.displayDetails();
    Product p2("Table", 191, 70.2);
    p2.displayDetails();
    p1.update("Chair", 352, 10.20);
    p1.displayDetails();
    return 0;
}