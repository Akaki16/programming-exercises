#include <iostream>

using namespace std;

string getString(string);

int main()
{
    string text = getString("What is the input string?: ");

    cout << text << " has " << text.size() << " characters";

    return 0;
}

string getString(string text)
{
    string input;

    cout << text;

    cin >> input;

    return input;
}