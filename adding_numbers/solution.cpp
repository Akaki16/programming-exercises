#include <iostream>

using std::string;
using std::cout;
using std::cin;

int getInt(string text);

int main()
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        int number = getInt("Enter a number: ");
        total += number;
    }

    cout << "The total is: " << total;

    return 0;
}

int getInt(string text)
{
    int number;

    cout << text;

    cin >> number;

    return number;
}