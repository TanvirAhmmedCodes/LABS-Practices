/*
Design a class named Book to encapsulate information about a book such as: title, author,
and publicationYear. Implement the following:
• A non-parameterized (default) constructor that initializes title and author to
"Unknown" and publicationYear to 0.
• A destructor that displays a message indicating which Book object (by title) is being
destroyed.
• Public member functions to set the book details by taking input from the user and
to display the book’s information. Inside the setter function for the publication year,
implement validation logic to ensure the year is not in the future (i.e., it should not
exceed the current year). If the input is invalid, set the year to 0 and display a warning
message.
• In the main() function, create an object of the Book class, prompt the user to input
book details using the setter functions, display the entered information, then create
additional Book objects using the default constructor and display their details.
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int publicationYear;

public:
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        publicationYear = 0;
    }
    ~Book()
    {
        cout << "Book \"" << title << "\" is being destroyed." << endl;
    }
    void setTitle()
    {
        cout << "Enter book title: ";
        getline(cin, title);
    }
    void setAuthor()
    {
        cout << "Enter author name: ";

        getline(cin, author);
    }
    void setPublicationYear()
    {
        cout << "Enter publication year: ";
        int year;
        cin >> year;
        cin.ignore();
        time_t t = time(0);
        tm *now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        if (year > currentYear)
        {
            cout << "Warning: Invalid year! Setting publication year to 0." << endl;
            publicationYear = 0;
        }
        else
        {
            publicationYear = year;
        }
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << endl;
    }
};
int main()
{
    Book b1;
    b1.setTitle();
    b1.setAuthor();
    b1.setPublicationYear();
    cout << "\nEntered book details:" << endl;
    b1.display();
    Book b2;
    Book b3;
    cout << "Default book details:" << endl;
    b2.display();
    b3.display();
    return 0;
}