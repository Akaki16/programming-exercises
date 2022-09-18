#include <iostream>

using namespace std;

string getString(string);

int main()
{   
    const string correctUsername = "nick";
    const string correctPassword = "12345abcd";

    string userName = getString("What is your username?: ");
    string userPassword = getString("What is your password?: ");

    if (userName == correctUsername && userPassword == correctPassword)
    {
        cout << "Welcome\n";
    }
    else
    {
        cout << "I don't know you!\n";
    }

    return 0;
}

string getString(string text)
{
    string input;

    cout << text;

    cin >> input;

    return input;
}