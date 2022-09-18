#include <iostream>

using namespace std;

int getInt(string);

int main()
{
    int people = getInt("How many people?: ");
    int pizzas = getInt("How many pizzas do you have?: ");

    int result = people / pizzas;
    int personGets = people / result;
    int pizzasLeft = people % result;

    cout << people << " people " << "with " << pizzas << " pizzas\n";
    cout << "Each person gets " << personGets << " pieces of pizza.\n";
    cout << "There are " << pizzasLeft << " leftover pieces\n";

    return 0;
}

int getInt(string text)
{
    int number;

    cout << text;

    cin >> number;

    return number;
}