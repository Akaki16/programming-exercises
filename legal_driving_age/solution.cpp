#include <iostream>

using namespace std;

int getInt(string);

int main()
{
    int age = getInt("How old are you?: ");

    if (age >= 16)
    {
        cout << "You are old enough to legally drive.\n";
    }
    else
    { 
        cout << "You are not old enough to legally drive.\n";
    }

    return 0;
}

int getInt(string text)
{
    int number;

    cout << text;

    cin >> number;

    return number;
}