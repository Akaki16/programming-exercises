#include <iostream>

using namespace std;

double getDouble(string);

int main()
{
    /* Prompt for the prices and quantities of three items */
    double item1Price = getDouble("Enter the price of item 1: ");
    double item1Quantity = getDouble("Enter the quantity of item 1: ");
    double item2Price = getDouble("Enter the price of item 2: ");
    double item2Quantity = getDouble("Enter the quantity of item 2: ");
    double item3Price = getDouble("Enter the price of item 3: ");
    double item3Quantity = getDouble("Enter the quantity of item 3: ");

    /* calculate subtotal */
    double subTotal = (item1Quantity * item1Price) + (item2Quantity * item2Price) + (item3Quantity * item3Price);

    /* calculate tax */
    double tax = (5.5 / 100) * subTotal;

    /* calculate total */
    double total = subTotal + tax;

    cout << "Subtotal: $" << subTotal << "\n";
    cout << "Tax: $" << tax << "\n";
    cout << "Total: $" << total << "\n";

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;
    
    cin >> number;

    return number;
}