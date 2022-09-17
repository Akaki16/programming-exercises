#include <iostream>

using namespace std;

string getString(string);

int main()
{
    string noun = getString("Enter a noun: ");
    string verb = getString("Enter a verb: ");
    string adjective = getString("Enter a adjective: ");
    string adverb = getString("Enter a adverb: ");

    cout << "Do you " << verb << " your " << adjective << " " << noun << " " << adverb << "?" << " " << "That's hilarious!";

    return 0;
}

string getString(string text)
{
    string input;

    cout << text;

    getline(cin, input);

    return input;
}