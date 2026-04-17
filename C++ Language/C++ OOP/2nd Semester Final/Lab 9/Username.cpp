/*
Write a C++ program that takes a username (string) from the user and checks whether
it follows specific rules.
If any rule is violated, the program should throw an exception with a proper message.
The username must satisfy the following conditions:
1. Length must be between 5 and 15 characters.
2. The first character must be a letter.
3. The username cannot contain spaces.
4. The username can only contain letters and digits (no special characters like @, #, $,
%, !).
If any rule is violated, throw an exception with a specific message.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string username;
    cin >> username;

    try
    {
        if (username.length() < 5 || username.length() > 15)
            throw string("Length must be between 5 and 15 characters");

        if (!isalpha(username[0]))
            throw string("First character must be a letter");

        for (int i = 0; i < username.length(); i++)
        {
            if (username[i] == ' ')
                throw string("Username cannot contain spaces");

            if (!isalnum(username[i]))
                throw string("Only letters and digits allowed");
        }

        cout << "Valid username" << endl;
    }
    catch (string msg)
    {
        cout << msg << endl;
    }

    return 0;
}