#include <iostream>

using namespace std;

string getString(string);

int main()
{
    /* prompt for the quote */
    string quote = getString("What is the quote?: ");
    /* prompt for the author */
    string author = getString("Who said it?: ");

    /* display result */
    cout << author << " said \" "<< quote << "\"\n";

    return 0;
}

string getString(string text)
{
    string input;

    cout << text;

    getline(cin, input);

    return input;
}