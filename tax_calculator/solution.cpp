#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getInt(string);
string getString(string);
bool contains(string, string);

int main()
{
    int orderAmount = getInt("What is the order amount?: ");
    string state = getString("What is the state?: ");

    transform(state.begin(), state.end(), state.begin(), ::tolower);

    if (contains(state, "wi"))
    {
        /* calculate tax */
        double tax = (5.5 / 100) * orderAmount;
        /* calculate subtotal */
        double subTotal = orderAmount + tax;
        /* print calculation results */
        cout << "The subtotal is $" << subTotal << "\n";
        cout << "The tax is $" << subTotal - orderAmount << "\n";
        cout << "The total is $" << subTotal << "\n";
    }
    else
    {
        cout << "The total is $" << orderAmount << "\n"; 
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

string getString(string text)
{
    string input;

    cout << text;

    cin >> input;

    return input;
}

bool contains(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}